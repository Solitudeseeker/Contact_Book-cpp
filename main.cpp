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
void addContacts(vector<Contact>& contacts){
    char another;
    do{
        string name, phone, email;
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter Phone: ";
        getline(cin, phone);
        cout<<"Enter E-mail: ";
        getline(cin, email);
        Contact c1(name, phone, email);
        contacts.push_back(c1);
        cout<<endl;
        cout<<"Do you want to add another contact? (Y/N): ";
        cin>>another;
        while(another != 'Y' && another != 'y' && another != 'N' && another != 'n'){
            cout<<"Invalid input. Please enter Y or N."<<endl;
            cin>>another;
        }
        cin.ignore();
        if(another== 'N' || another == 'n'){
            cout<<"Return To Menu..."<<endl;
        }else{
            cout<<"Adding another contact...\n"<<endl;
        }
    }while(another == 'Y' || another == 'y');
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
void searchContact(const vector<Contact>& contacts){
    string searchName;
    bool found =  false;
    cout<<"\n=========Search Contact=========\n";
    cout<<"Enter Name to Search: ";
    getline(cin, searchName);
    cout<<endl;
    for(const auto& contact: contacts){
        if(contact.name == searchName){
            cout<<"\n----The Contact details are: ----"<<endl;
            cout<<contact.name<<endl;
            cout<<contact.phone<<endl;
            cout<<contact.email<<endl;
            cout<<"----------------------------\n"<<endl;
            found= true;
        }
    }
    if(!found){
        cout<<"The contact does not exist in your Contact List."<<endl;
        cout<<endl;
    }
}
void deleteContact(vector<Contact>& contacts){
    string deleteName;
    bool found = false;
    cout<<"\n==== Delete Contact ====\n"<<endl;
    cout<<"Enter Name to Delete: ";
    getline(cin, deleteName);
    for(int i=0; i<contacts.size(); i++){
        if(contacts[i].name == deleteName){
            contacts.erase(contacts.begin() + i);
            cout<<"The contact "<<deleteName<<" has been deleted successfully."<<endl;
            cout<<"=======================\n"<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"The Contact doesn't exists in your Contact List."<<endl;
        cout<<"=======================\n"<<endl;
    }
}
void editContact(vector<Contact>& contacts){
    string editName;
    string editedName;
    string editedPhone;
    string editedEmail;
    bool found = false;
    cout<<"\n=====Editing Contact=====\n"<<endl;
    cout<<"Enter Name that you want to Edit: ";
    getline(cin, editName);
    for(int i=0; i<contacts.size(); i++){
        if(contacts[i].name == editName){
            cout<<"Enter Name for Modification: ";
            getline(cin, editedName);
            cout<<"Enter Phone for Modification: ";
            getline(cin, editedPhone);
            cout<<"Enter Email for Modification: ";
            getline(cin, editedEmail);
            contacts[i].name = editedName;
            contacts[i].phone = editedPhone;
            contacts[i].email = editedEmail;
            found= true;
            cout<<"After Editing :"<<endl;
            cout<<"Name: "<<contacts[i].name<<endl;
            cout<<"Phone: "<<contacts[i].phone<<endl;
            cout<<"E-mail: "<<contacts[i].email<<endl;
            cout<<"\n=========================\n"<<endl;
        }
    }
    if(!found){
        cout<<"Contact Not found!!!";
        cout<<"\n=========================\n"<<endl;
    }
}
int main(){
    vector <Contact> contacts;
    int choice;
    do{
        cout<<"\n====Contact Book====\n"<<endl;
        cout<<"1. Add Contacts\n";
        cout<<"2. Display Contacts\n";
        cout<<"3. Search Contact\n";
        cout<<"4. Delete Contact\n";
        cout<<"5. Edit Contact\n";
        cout<<"6. Exit"<<endl;
        cout<<"\nEnter the number assign to the Menu List to continue: ";
        cin>>choice;
        cin.ignore();
        switch(choice){
            case 1:
            addContacts(contacts);
            break;
            case 2:
            displayContacts(contacts);
            break;
            case 3:
            searchContact(contacts);
            break;
            case 4:
            deleteContact(contacts);
            break;
            case 5:
            editContact(contacts);
            break;
            case 6:
            cout<<"Thankyou for using Contact Book!"<<endl;
            break;
            default:
            cout<<"Invalid Chioce...."<<endl;
            break;
        }
    }while(choice != 6);
    return 0;
}