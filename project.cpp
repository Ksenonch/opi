#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    char* hi = new char[10];
    cout << "Введите приветствие\n";
    cin.getline(hi, 10);
    int n =4 , m = 5, result;
    result = n * m;
    cout << result;

}

