#include<iostream> 
#include<string> 

using namespace std;

int main() {
    cout << "Start!" << " \n";
    int x = 10; cout << x << "\n"; 
    x += 5; cout << x << " x += 5\n"; 
    x -= 5; cout << x << " x -= 5\n"; 
    x *= 5; cout << x << " x *= 5\n"; 
    x /= 5; cout << x << " x /= 5\n"; 
    x %= 5; cout << x << " x %= 5\n"; 
    x &= 5; cout << x << " x &= 5\n"; 
    x |= 5; cout << x << " x |= 5\n"; 
    x ^= 5; cout << x << " x ^= 5\n"; 
    x >>= 5; cout << x << " x >>= 5\n"; 
    x <<= 5; cout << x << " x <<= 5\n"; 
    return 0;
}

