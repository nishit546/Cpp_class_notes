#include <iostream>
#include <deque>
using namespace std;

int main(){
deque<int> d = {10,20,30};
d.push_back(9);
d.push_front(2);

for(int value : d){
    cout  << value << endl;
}
    
    return 0;

}