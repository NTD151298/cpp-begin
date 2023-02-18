#include<iostream> 
#include<string> 
#include <cmath>

using namespace std;

int main() {
    cout << "Start!" << " \n";
    int a = 10;
    cout << "a = " << a << "\n";
    int i, j;
    for(i = 1; i < 5; i++){
        for(j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(i = 0; i <= 2; i++){
        cout << "Outer: " << i << "\n";
        for(j = 0; j <= 3; j++){
            cout << "\tIner: " << j << "\n";
        }
    }
    int array[4] = {1, 2, 3, 4};
    for (int i : array){
        cout << i << "\n";
    }
    return 0;
}
