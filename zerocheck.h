# pragma once
#include <string>
using namespace std;

class ZeroCheck {
    string msg;
public:
    ZeroCheck()
    {
    this->msg = "";
    }
    ZeroCheck(string _msg)
    {
        this->msg = _msg;
    }
    string what()
    {
        return (msg);
    }
};
