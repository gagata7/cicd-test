#include <bits/stdc++.h>
using namespace std;

class Book {
    string title, author;
    // int use_count;
    public:
        Book(string _title, string _author):
            title(_title), author(_author) {}
        
        void getInfo(){
            cout<<"title: "<<title<<endl;
            cout<<"author: "<<author<<endl;
        }

//         void borrowBook(){
//             use_count++;
//         }

//         void returnBook(){
//             use_count--;
//         }
};

class User {
    shared_ptr<Book> borrowedBook;
    string name;
    public:
        User(string _name, shared_ptr<Book> &p):
            name(_name), borrowedBook(p) {
                // borrowedBook->borrowBook();
            }

        void getInfo(){
            cout<<name<<" pozyczyl: \n";
            // borrowedBook->getInfo();
        }

        // ~User() {
        //     borrowedBook->returnBook();
        // }
};


int main(){
    auto ptr = make_shared<Book> ("gagata to umie", "gunia");
    cout<<ptr.use_count()<<endl;
    weak_ptr<Book> w = ptr;
    cout<<ptr.use_count()<<endl;
    auto sp = w.lock();
    delete w;
    sp->getInfo();
    return 0;
}