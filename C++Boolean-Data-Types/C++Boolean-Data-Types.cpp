#include<iostream> 
#include<string> 

using namespace std;

int main() {
    cout << "Start!" << " \n";
    bool a = true; cout << a << "\n"; // in 1
    bool b = false; cout << b << "\n"; // in 0
    char d = 'A'; cout << d << "\n";
    char d1 = '1'; cout << d1 << "\n";
    string aa = "Nguyen Thai Duong";
    cout << aa << "\n";
    int a1 = 15, b1 = 12;
    cout << "(a1 > b1): " << (a1 > b1) << "\n";
    cout << "(a1 < b1): " << (a1 < b1) << "\n";
    cout << "(a1 == 15): " << (a1 == 15) << "\n";
    int a2, b2; cin >> a2; cin >> b2; cout << "\n";
    if (a2 > b2){
        cout << " Day la a2 > b2" << "\n";
    }else if (a2 < b2){
        cout << " Day la a2 < b2" << "\n";
    }else {
        cout << " Day la a2 = b2" << "\n";
    }
    return 0;
}