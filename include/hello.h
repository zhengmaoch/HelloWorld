#pragma once

#include <iostream>
// #include <string>

using namespace std;

class Hello
{
public:
    Hello(string message)
    {
        this->_message = message;
    };

    void say();

private:
    string _message;
};