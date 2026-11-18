#include "DirectoryTraverse.h"
#include <string>
#include <filesystem>
#include <iostream>
using namespace std;

void traverseHelper(const string& directory, Visitor& visitor);

DirectoryTraverse::DirectoryTraverse(const string& directory) {
    this->directory = directory;
}

void DirectoryTraverse::traverse(Visitor visitor) {
    traverseHelper(this->directory, visitor);
}

void traverseHelper(const string& directory, Visitor& visitor) {
    try {
        for ( const auto& entry : std::filesystem::recursive_directory_iterator(directory)) {
            if (entry.is_regular_file()) {
                visitor.visit(entry.path().string());
            }
        }
    }
    catch(const filesystem::filesystem_error& error) {
        cerr << error.what() << endl;
    }
}
