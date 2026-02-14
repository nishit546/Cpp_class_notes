#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v(10);
    
    cout << "enter 10 element" << endl;
    for(int i=0;i<10;i++){
        cin >> v[i];
    }
    
    for(int i=9;i>=0;i--){
        if(i%2==0){
            v.erase(v.begin()+i);
            cout << "\nindex element that is removed :- " << i << endl;
        }
    }
    
    cout << "\nremaining element are :- " << endl;
    
    for(int value : v){
        cout << value << " ";
    }
    
    cout << "\ntotal size :- " << v.size() << endl;
    
    return 0;
}