#include<iostream>
using namespace std;
int main() {
    cout << "\nCong, Tru, Nhan, Chia" << " ";
    int a, b, c;
    double d;
    cout << "\nNhap 2 so can tinh: ";
    cout << "\na: "; cin >> a;
    cout << "\nb: "; cin >> b;
    d = a + b;
    cout << "\nPhep cong cua 2 so do la: " << d;
    if(a > b){
        d = a -b;
    }else{
        d = b - a;
    }
    cout << "\nPhep tru cua 2 so do la: " << d;
    d = a * b ;
    cout << "\nPhep nhan cua 2 so do la: " << d;
    if(a > b){
        d = a / b;
    }else{
        d = b / a;
    }
    cout << "\nPhep chia cua 2 so do la: " << d;
    cout << "\n";
    return 0;
}