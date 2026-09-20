#include<iostream>
#include<string>
#include<vector>

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
    char another;
    vector <Contact> contacts;
    string name, phone, email;
    do{
        cout<<"Enter name: ";
        getline(cin, name);
        cout<<"Enter phone: ";
        getline(cin, phone);
        cout<<"Enter email: ";
        getline(cin, email);
        Contact c1(name, phone, email);
        contacts.push_back(c1);
        cout<<"Do you want to add another contact? (Y/N): ";
        cin>>another;
        while(another != 'Y' && another != 'y' && another != 'N' && another != 'n'){
            cout<<"Invalid input. Please enter Y or N."<<endl;
            cin>>another;
        }
        cin.ignore();
        if(another== 'N' || another == 'n'){
            cout<<"Thankyou for using Contact Book!"<<endl;
        }else{
            cout<<"Adding another contact..."<<endl;
        }
    }while(another == 'Y' || another == 'y');
    cout<<"\n -----Contact Details-----\n";
    for(const auto& contact : contacts){
        cout<<"Name: "<<contact.name<<endl;
        cout<<"Phone: "<<contact.phone<<endl;
        cout<<"Email: "<<contact.email<<endl;
        cout<<"--------------------------\n";
    }
    return 0;
}