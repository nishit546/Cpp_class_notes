#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    int grade;
    string password;

    public:
    string name;

    Student(string name , string password , int grade){
        if(grade >=0 && grade <= 100){
            this->name = name;
            this->password = password;
            this->grade = grade;
            
        }

    }
    void getResult(string pass){
if(pass != password){
     cout << "Incorrect password ,  please check your password and try again" << endl;

}
cout << "Student : " << name << endl;
cout << "Grade : " << grade << endl;

if(grade >= 90){
cout << "Result: A" << endl;

}
else if(grade < 90 && grade >=70){
    cout << "Result: B" << endl;
}
else if(grade < 70 && grade >= 40){
    cout << "Result: C" << endl;
}
else if(grade < 40){
    cout << "Fail" << endl;
}
    }
};

int main(){
Student s1("Nishit" , "nishit90" , 80);
s1.getResult("nishit90");

    return 0;
}