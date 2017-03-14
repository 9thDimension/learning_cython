#include <iostream>
#include "HelloWorlder.h"

using namespace std;



int main() {

    string theString = "Banana";

    HelloWorlder hw(theString);

    hw.sayHello();

    return 0;
}