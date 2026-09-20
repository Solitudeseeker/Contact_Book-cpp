#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

class Contact{
    public:
    string name;
    string phone;
    string email;

    Contact(string n, string p, string e){
        name = n;
        phone = p;
        email = e;
    }
};
int main(){
    vector <Contact> contacts;
    string name, phone, email;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter phone: ";
    getline(cin, phone);
    cout<<"Enter email: ";
    getline(cin, email);
    Contact c1(name, phone, email);
    contacts.push_back(c1);
    cout<<"\n -----Contact Details-----\n";
    for(const auto& contact : contacts){
        cout<<"Name: "<<contact.name<<endl;
        cout<<"Phone: "<<contact.phone<<endl;
        cout<<"Email: "<<contact.email<<endl;
    }
    return 0;
}