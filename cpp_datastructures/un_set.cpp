
#include <iostream>
#include <unordered_set>
using namespace std;


int main(){
    unordered_set<int> myset = {0, 1 ,2 , 4};

    cout << "myset.size() : " << myset.size() << "\n"; 

    // Range based loop
    for(const auto& elem: myset){
        cout << elem << "\n";
    }

    // Iterator based loop 
    for(auto itr = myset.begin(); itr != myset.end(); ++itr){
        cout << *itr << "\n";
    }

    if(myset.find(19) == myset.end()){
        cout << "19 wasn't found in myset" << "\n";
    }

    if(myset.find(1) != myset.end()){
        cout << "1 was found" << "\n";
    }

    cout << "size: " << myset.size() << "\n";



    return 0;

}