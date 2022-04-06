#include "mathematics.h"
#include "zerocheck.h"
using namespace std;

// #include preprocessor directive
// write your code here…


int main()
{
    try
    {
        Mathematics<int> Math1(10, 5);
        Mathematics<double> Math2(5.5, 3.4);
        Mathematics<int> Math3(6, 0);
        cout << "Math 1:" << '\n';
        cout << Math1 << '\n' << '\n';
        cout << "Math 2:" << '\n';
        cout << Math2 << '\n' << '\n';
        cout << "Math 3" << '\n';
        cout << Math3 << '\n' << '\n';
    } catch (ZeroCheck e)
    {
        cerr << e.what() << '\n';
    }
    return (0);
}

template <class T>
Mathematics<T>::Mathematics(T v1, T v2)
// write your code here…
{
    val1 = v1;
    val2 = v2;
}

// define addition()
// write your code here…
template <class T>
T Mathematics<T>::addition()
{
    T add = val1 + val2;
    return add;
}

// define subtraction()
// write your code here…
template <class T>
T Mathematics<T>::subtraction()
{
    T subtract = val1 - val2;
    return subtract;
}

// define multiplication()
// write your code here…
template <class T>
T Mathematics<T>::multiplication()
{
    T multiply = val1 * val2;
    return multiply;
}

// define division()
// write your code here…
template <class T>
T Mathematics<T>::division()
{
    if (val1 == 0 || val2 == 0)
    {
        throw ZeroCheck("Denominator is 0, invalid division.");
    }
    T divide = val1 / val2;
    return divide;
}

template<class T>
ostream& operator<<(ostream& os, Mathematics<T>& obj)
{
    //follow the sample output
    //display the obj’s val1 and val2
    //display the result of obj’s addition(), substraction(), multiplication() and division()
    // write your code here…
    os << "The result of calculation for: " << obj.val1 << " and " << obj.val2 << '\n'
    << "Sum is: " << obj.addition() << '\n'
    << "Difference is: " << obj.subtraction() << '\n'
    << "Product is: " << obj.multiplication() << '\n';
    if (obj.val1 == 0 || obj.val2 == 0)
    {
        os << obj.division() << ' ';
    }
    else
    {
        os << "Quotient is: " << obj.division() << ' ';
    }
    return (os);
}
