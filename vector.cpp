#include <iostream>
#include <vector>
using namespace std;



int main(){

    vector<int> v = {10,20,30};
        v.push_back(60);
        v.insert(v.begin() + 2 , 69);
        v.erase(v.begin() + 2);
    //     for(int i = 0 ;i<v.size(); i++){
    //         cout << v[i]<< endl;
    //     }
      
    // for(int value : v){
    //     cout << value << endl;
    // }
   cout <<  v.front()<< endl;
    

    return 0;
}