#include <iostream>
#include "hello.h"
#include "libHello.h"

using namespace std;

int main(int argc, char **argv)
{
    Hello hello("Hello C++ World!");
    hello.say();
    printHello();
    return 0;
}