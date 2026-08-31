#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    
    q.push(88);
    q.push(99);
    q.push(100);
    
    cout << "last element in q: " << q.back() << "\n";

    cout << "first element in q: " << q.front() << "\n";

    q.pop();
    cout << "after q.pop(): " << q.front() << "\n";
    
    cout << "size: " << q.size() << "\n";

    return 0;
}
