#include <iostream>
#include <set>
using namespace std;

int main(){
set<int> s1 = {45,6,323,3,0,31};
s1.insert(-69);
s1.insert(59);

for(int value : s1){
    cout << value << endl;
}

s1.erase(-69);
for(int value : s1){
    cout << value << endl;
}
auto it = s1.find(59);
if(it!= s1.end()){
    cout << "found : " << *it << endl;
}
else{
    cout << "Not found :" << endl;
}
cout << s1.count(323) << endl;
    return 0;
}