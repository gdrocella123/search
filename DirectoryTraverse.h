#ifndef DIRECTORY_TRAVERSE_H
#define DIRECTORY_TRAVERSE_H

#include "Visitor.h"
#include <string>

class DirectoryTraverse {
private:
    std::string directory;
public:

    DirectoryTraverse(const std::string& directory);

    void traverse(Visitor vistit);
};

#endif
