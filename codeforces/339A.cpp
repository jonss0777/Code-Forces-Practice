// Problem 339A

#include <iostream>
#include <string>
using namespace std;

int main(){

    int record[3] = {0};

    string input; 
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '1')  record[0]++;
        else if(input[i] == '2')  record[1]++; 
        else if(input[i] == '3') record[2]++;    
    }
    
    string result = "";
    for(int i = 0; i < 3; i++){
        for( int j = 0; j < record[i]; j++){
            result += to_string(i + 1);
            result += "+";
        }
    }
    

    if(!result.empty()){
        result.pop_back();
    }
    
    cout << result << "\n";
    return 0;
}