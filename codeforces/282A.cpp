// Problem 282A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    while(n--){
        string input;
        cin >> input;

        if(input.find("--")){
            count--;
        }
        else if(input.find("++")){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}