#include "DirectoryReader.h"
#include <filesystem>

DirectoryReader::DirectoryReader(const std::string& directoryName) {
    this->directoryName = directoryName;
}

std::list<std::string> DirectoryReader::readDirectory() {
    std::list<std::string> directories = {};

    for(const auto& entry : std::filesystem::directory_iterator(this->directoryName)) {
        directories.push_back(entry.path().filename().string());
    }

    return directories;
}
