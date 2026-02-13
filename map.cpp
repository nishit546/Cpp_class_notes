#include <iostream>
#include <map>
using namespace std;

int main(){
map<int , string> m1;
m1[3] = "nishit";
m1[1] = "nothing";
m1.insert({2 , "nope"});
m1.erase(2);
    
map<char , int> m2;


    return 0;
}