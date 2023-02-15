#include<iostream> 
#include<string> 
#include <cmath>

using namespace std;

int main() {
    cout << "Start!" << " \n";
    int a = 10;
    cout << "a = " << a << "\n";
    int b; cout << "b = "; cin >> b;
    if (b > a){
        cout << "b lon hon a" << "\n";
    }else if (b < a){
        cout << "b nho hon a" << "\n";
    }else  
        cout << "b bang a" << "\n";
    int c = (a > b) ? 100 : -100;
    cout << "c = " << c << "\n";
    string d = (a > b) ? "Day la a lon hon b \n" : "Day khong phai la a lon hon b \n";
    cout << "d = " << d << "\n";
    return 0;
}
