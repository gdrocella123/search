#include "DirectoryTraverse.h"
#include "Visitor.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cerr << "./mysearch <directory> <filename>" << endl;
        return 1;
    }

    string searchDir(argv[1]);
    string file(argv[2]);

    DirectoryTraverse directoryTraverse(searchDir);
    Visitor v(file);

    directoryTraverse.traverse(v);

    return 0;
}
