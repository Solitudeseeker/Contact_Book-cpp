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
void addContact(vector<Contact>& contacts){
    string name, phone, email;
    cout<<"Enter Name: ";
    getline(cin, name);
    cout<<"Enter Phone: ";
    getline(cin, phone);
    cout<<"Enter E-main: ";
    getline(cin, email);
    Contact c1(name, phone, email);
    contacts.push_back(c1);
}
void displayContacts(const vector<Contact>& contacts){
    cout<<"\n----- Contact Details -----\n"<<endl;
    for(const auto& contact: contacts){
        cout<<"\n------------------------"<<endl;
        cout<<"Name: "<<contact.name<<endl;
        cout<<"Phone: "<<contact.phone<<endl;
        cout<<"E-mail: "<<contact.email<<endl;
        cout<<"------------------------\n"<<endl;
    }
}
int main(){
    char another;
    vector <Contact> contacts;
    do{
        addContact(contacts);
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
    displayContacts(contacts);
    return 0;
}