#include<iostream>
#include<string>

using namespace std;

int main() {
	cout << "Start!" << " \n\n";
	cout << "Nhap chu lan 1: " << " \n";
	string c; getline(cin, c); cout << "Chu moi nhap la: " << c << "\n\n";
	cout << "Nhap chu lan 2: " << " \n";
	string d;
	getline(cin, d); cout << "Chu moi nhap la: " << d << "\n\n";
	int x;
	cout << "Xac dinh so chan hay le\n";
	cout << "Nhap so x: "; cin  >> x; cout << " \n";
	if(x == 0){
		cout << "So x la so 0" << "\n";
	}else if (x % 2 == 0){
		cout << "So x la so chan" << "\n";
	}else{
		cout << "So x la so le" << "\n\n";
	}
	cout << "Endl!" << " \n";
	return 0;
}
