#include <iostream>
#include <list>
using namespace std;
int main(){

list<int> l = {1,2,3,4,55,5,5,5,5,5,5,5,5,55};
l.push_back(9);
l.push_front(0);
l.pop_back();
l.pop_front();
l.insert(l.begin() , 69);
l.erase(l.begin());
l.remove(5);
l.reverse();
l.sort();
for(int value : l){
    cout << value << endl;
}

    return 0;
}