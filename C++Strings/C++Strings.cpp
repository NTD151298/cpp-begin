#include<iostream> 
#include<string> 

using namespace std;

int main() {
    cout << "Start!" << " \n";
    string a1 = "Gio chung ta hoc va on lai ve string "; cout << a1 << "\t" << a1.length() << "\n";
    cout << "a1 :" << a1 << "\n";
    string a2 = "Trong C++"; cout << a2 << "\t" << a2.length()  << "\n";
    cout << a1 + a2 << "\n";
    cout << "a1 :" << a1 << "\n";
    string a1a2 = a1 + " ||| " + a2; cout << a1a2 << "\t" << a1a2.length() << "\n";
    cout << "a1 :" << a1 << "\n";

    string a3 = a1.append(a2); cout << a3 << "\t" << a3.length()  << "\n";
    cout << "a1 :" << a1 << "\n";

    cout << a3 << "\t" << a3.size()  << "\n\n";
    cout << "a1 :" << a1 << "\n";
    for (int i = 0; i < a1.length(); i++){
        cout << a1[i] << " ";
    }
    cout << "\n\n\n";
    string b1 = "Duong"; cout << "b1 : " << b1 << "\n";
    b1[0] = 'H'; cout << "b1 : " << b1 << "\n"; 
    string b2 = "\\dau trong string\\ \'char\' va \"mot cai gi do\"";
    cout << "b2 : " << b2 << "\n"; 
    string b3; getline(cin, b3); cout << "b3 : " << b3 << "\n"; 
    std::cout << "std::cout " << b3 << "\n";

    return 0;
}
