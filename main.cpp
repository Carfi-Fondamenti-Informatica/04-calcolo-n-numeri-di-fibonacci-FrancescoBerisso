#include <iostream>
using namespace std;

int main() {
    int n1 = 1, n2 = 1, n3 = 0, cifre = 0, i = 3;
    cin >> cifre;
    if(cifre >= 2){
        cout << n1 << " " << n2 << " ";
        for(; i <= cifre; i++){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cout << n3 << " ";
        }
    else{
        cout << "errore" << endl;
    } 
    return 0;
}
