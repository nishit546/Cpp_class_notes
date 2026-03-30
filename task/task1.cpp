#include <iostream>
#include <string>
using namespace std;
class Book {
    private : 
    int book_id;
    string book_name;
    float price;
    public : 
    Book(int id , string name , float p){
        book_id = id;
        book_name = name;
        price = p;
    }
    void display(){
        cout << "Book id: " << book_id << endl;
        cout << "Book name: " << book_name << endl;
        cout << "Book price: " << price << endl;
    }

};
int main(){
Book b1(1,"C++",532);
Book b2(2,"C",230);
Book b3(3,"C#",640);
b1.display();
b2.display();
b3.display();
    return 0;

}