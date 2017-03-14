//
// Created by hal9000 on 14/03/17.
//
#include <iostream>
#include "HelloWorlder.h"

using namespace std;

HelloWorlder::HelloWorlder(string theName) {
    name = theName;
}

void HelloWorlder::sayHello() {
    std::cout << "Hello, " << name << "!" << std::endl;
}