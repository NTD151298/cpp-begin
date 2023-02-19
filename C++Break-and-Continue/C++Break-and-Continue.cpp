#include<iostream> 
#include<string> 
#include <cmath>

using namespace std;

int main() {
    cout << "Start!" << " \n";
    int a;
    for (int i = 0; i < 5; i++){
        if (i == 4){
            cout << "i = " << i << " it break time." << "\n";
            break;
        }
        cout << "i = " << i << "\n";
    }
    float LucNhanThucRaDuoc; cin >> LucNhanThucRaDuoc;
    for (int i =0; i < 24; i++){
	    if ( i == LucNhanThucRaDuoc){
		    cout << "Ta da phi qua nhieu time roi: " << LucNhanThucRaDuoc << "h\n";
		    break;
	    }
	    cout << i << "h xem tiktok + choi game va mo ngay roi\n";
    }
    return 0;
}
