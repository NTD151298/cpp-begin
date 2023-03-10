#include<iostream> 

using namespace std;

int main() {

    cout << "Start!" << " \n";
    int a = 5;                  // Integer (whole number)
    float b = 5.99;             // Floating point number
    double c = 9.98;            // Floating point number
    char d = 'D';               // Character
    bool e = true;              // Boolean
    string s = "Hello";         // String 
    cout << "Integer (whole number) " << a << "\n";
    cout << "Floating point number " << b << "\n";
    cout << "Floating point number " << c << "\n";
    cout << "Character " << d << "\n";
    cout << "Boolean " << e << "\n";
    cout << "String  " << s << "\n";
    /*

    Data Type 	Size 	        Description
    boolean 	1 byte 	        Stores true or false values
    char 	    1 byte 	        Stores a single character/letter/number, or ASCII values
    int 	    2 or 4 bytes 	Stores whole numbers, without decimals
    float 	    4 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
    double 	    8 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

    */
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    return 0;
}

