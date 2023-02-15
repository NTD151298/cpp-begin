#include<iostream> 
#include<string> 
#include <cmath>

using namespace std;

int main() {
    cout << "Start!" << " \n";
    int a = 10;
    cout << "a = " << a << "\n";
    int aa;
    cout << "So muon nhap = "; cin >> aa;
    switch (aa) {
        case 1:
            cout << "So mot.";
            break;
        case 2:
            cout << "So hai.";
            break;
        case 3:
            cout << "So ba.";
            break;
        case 4:
            cout << "So bon.";
            break;
        case 5:
            cout << "So nam.";
            break;
        case 6:
            cout << "So sau.";
            break;
        case 7:
            cout << "So bay.";
            break;
        case 8:
            cout << "So tam.";
            break;
        case 9:
            cout << "So chin.";
            break;
        case 10:
            cout << "So muoi.";
            break;
        default:
            cout << "Khong trong tu 1 den 10.";
    }
    cout << "\n";
    return 0;
}
