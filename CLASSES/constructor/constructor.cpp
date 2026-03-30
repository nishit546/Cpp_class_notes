#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    string gender;
    int age;

    Student(string name1, string gender1, int age1){
        name = name1;
        gender = gender1;
        age = age1;
    }
    void display(){
        cout << "The data is initialized are " << this->name << " " << this->gender << " " << this->age << endl;
    }
};
    ~Student(){
        cout << "The particular object being destroyed" << endl;

    }
int main(){
    Student s1("Nishit Doshi", "male", 18);
   s1.display();
   Student s2("Nothing" , "male" , 29);
   s2.display();

    return 0;
}