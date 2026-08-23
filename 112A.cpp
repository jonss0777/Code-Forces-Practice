// Problem 112A

#include <iostream>
#include <string>

using namespace std;

int main(){

    string word1, word2;

    cin >> word1 >> word2;

    for(int i = 0; i < word1.length(); i++){\

        // Alternative approach is to use to_lower() from #include <cctype>
        int val1 = int(word1[i]), val2 = int(word2[i]);
        if(val1 > 90){
            val1 = val1-32;
        }
        if(val2 > 90){
            val2 = val2-32;
        }

        if(val1 != val2){

            if(val1 > val2){
                cout << 1 << "\n";
            }
            else{
                cout << -1 << "\n";
            }
            return 0;
        }
    }

    cout << 0 << "\n";

    return 0;
}


