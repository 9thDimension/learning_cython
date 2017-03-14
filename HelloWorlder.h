//
// Created by hal9000 on 14/03/17.
//

#ifndef HELLO_WORLD_HELLOWORLDER_H
#define HELLO_WORLD_HELLOWORLDER_H
#include <string>

using namespace std;

class HelloWorlder{
public:

    HelloWorlder(string name);
    void sayHello();

private:
    string name;
};

#endif //HELLO_WORLD_HELLOWORLDER_H