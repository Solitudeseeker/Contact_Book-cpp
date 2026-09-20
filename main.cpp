#include<iostream>
#include<string>

using namespace std;

class Contact{
    public:
    string name;
    string phone;
    string email;
};
int main(){
    Contact c1;
    cout<<"Enter name: ";
    getline(cin, c1.name);
    cout<<"Enter phone: ";
    getline(cin, c1.phone);
    cout<<"Enter email: ";
    getline(cin, c1.email);
    cout<<"\n -----Contact Details-----\n";
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Phone: "<<c1.phone<<endl;
    cout<<"Email: "<<c1.email<<endl;
    return 0;
}