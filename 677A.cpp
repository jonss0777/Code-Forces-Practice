#include <iostream>
using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin >> n >> h;

    int input, count=0;
    while(n--){
        cin >> input;
        if(input > h){
            count+=2;
        }
        else{
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}