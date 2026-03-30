#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){

    cout << "BI DIRECTIONAL" << endl;
    vector <int> v1 = {1,2,3,4,5,6,6,7,8,90};
    auto itr = v1.end();
    while(itr != v1.begin() - 1){
        cout << "Backward iterator current value : " << *itr << endl;
        --itr;
     }
     
     list <int> l1 = {1,2,3,4,5,6,7,7,8,9,9,90};



    return 0;
}