#include<iostream> 
#include<string> 
#include <cmath>

using namespace std;

int main() {
    cout << "Start!" << " \n";
    int a, b;
    cout << "a = "; cin >> a;
    while (a < 10)
    {
        cout << "a la " << a << "\n";
        a++;
    }
    cout << "b = "; cin >> b;
    do{
        cout << "b la " << b << "\n";
        b++;
    }while (b < 10);
    return 0;
}
