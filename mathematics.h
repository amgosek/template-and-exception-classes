#pragma once
#include <iostream>
using namespace std;

template <class T>
class Mathematics
{
    T val1;
    T val2;
public:
    Mathematics(T, T);
    T addition();
    T subtraction();
    T multiplication();
    T division();
    template <class some_type>friend ostream& operator<<(ostream&, Mathematics<some_type>&);
};
