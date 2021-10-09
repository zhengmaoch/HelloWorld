#include <iostream>
#include "hello.h"

using namespace std;

int main(int argc, char **argv)
{
    Hello hello("Hello C++ World!");
    hello.say();
    return 0;
}