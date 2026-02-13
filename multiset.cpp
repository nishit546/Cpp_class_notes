#include <iostream>
#include <set>
using namespace std;

int main(){
multiset<int> s1 = {45,6,323,3,0,31,6,3};

for(int value : s1){
    cout << value << endl;
}
cout << "After loop" << endl;
    cout << s1.count(3) << endl;
    return 0;
}