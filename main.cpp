#include <iostream> 
using namespace std;

int main(){
    system("cls");

    // Break
    // Perulangan For 1-10 di break di 5
    cout << "Break : ";
    for(int i = 1; i <= 10; i++){
        if (i==5) break;
        cout << i << ", ";
    }
    cout << endl << endl;

    // Continue
    // Perulangan for 1-10 di continue di 5" << endl;
    cout << "Continue : ";
    for(int i = 1; i <= 10; i++){
        if(i==5) continue;
        cout << i << ", ";
    }
    cout << endl << endl;

    cin.get();
    return 0;
}