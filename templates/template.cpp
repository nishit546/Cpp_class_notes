#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
void add(T1 a, T2 b){
    cout << a + b << endl;
}

int main() {
    add(10, 20);                 // int + int
    add(10, 56.3);               // int + float
    
    // use string instead of char*
    add(string("Hii "), string("!"));  

    return 0;
}