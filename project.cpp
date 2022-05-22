#include <iostream>
#include <string.h>
using namespace std;
/// Two numbers
int a, b;
/*!
*    \brief multiply, multiplies two numders
*    A function of type int, designed to multiply two numbers.
*   @param[in] a
*   The first multiplier, type int.
*   @param[in] b
*   The second multiplier, type int.
*   @return
*   Returns an int value, which is the result of multiplication
*/
int multiply(int a, int b) {
    return a * b;
}

/*!
* \brief the main function< the execution of the program begins with it
*/
int main()
{
    
    char* hi = new char[10];
    cout << "Введите приветствие\n";
    cin.getline(hi, 10)
    cout << multiply(4, 5);
    cout << endl;
    cout << "Введите два числа: ";
    cin >> a;
    cin >> b;
}

