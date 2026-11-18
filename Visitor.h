#ifndef VISITOR_H
#define VISITOR_H

#include <string>

class Visitor {
private:
    std::string key;
public:
    Visitor(const std::string& key);

    bool visit(const std::string& obj);
};

#endif
