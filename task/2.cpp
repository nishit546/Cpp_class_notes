#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
cout << "Enter m: ";
int m;
cin >> m;
int n;
cout << "Enter n : ";
cin >> n;
list<int> l1;
list <int> l2;
list <int> l3;
cout << "Enter l1 items" << endl;
for(int i = 0;i<m;i++){
    int x;
    cin >> x;
    l1.push_back(x);
}
cout << "Enter l2 items" << endl;

for(int j = 0;j < n;j++){
    int y;
    cin >> y;
    l2.push_back(y);

}

cout << "Concat list" << endl;
for(int i:l1) {
    l3.push_back(i);
}
for(int i:l2) 
{
    l3.push_back(i);
}
l3.sort();
for(int i:l3) cout << i << endl;
    return 0;
}