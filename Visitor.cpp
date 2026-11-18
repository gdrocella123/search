#include "Visitor.h"
#include <iostream>
#include <cctype>
using namespace std;

Visitor::Visitor(const string& key) {
    this->key = key;
}

bool Visitor::visit(const string& fname) {
    if (fname.find(this->key) != std::string::npos) {
        cout << fname << endl;
    }

    return true;
}
