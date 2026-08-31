// Problem 41A

#include <iostream>
#include <string>
using namespace std;

int main(){

    string a, b;
    cin >> a;
    cin >> b;

    if(a.length() != b.length()){
        cout << "NO" << "\n";
    }
    else{
        int size = a.length();

        for(int i = 0; i < size; i++){
            if(a[i]!= b[size-1-i]){
                cout << "NO" << "\n";
                return 0;
            }
        }
        cout << "YES" << "\n";
    }
    return 0;

}

