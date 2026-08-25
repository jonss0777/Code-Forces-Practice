#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cin >> input;

    int initial = input.at(0);
    if(initial >= 'a' && initial <= 'z'){
        input[0] = char(initial-32);
    }
    cout << input << "\n";
    return 0;
}