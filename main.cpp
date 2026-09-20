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
    c1.name="Adi";
    c1.phone="6370409493";
    c1.email="firozjimachhar7@gmail.com";
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Phone: "<<c1.phone<<endl;
    cout<<"Email: "<<c1.email<<endl;
    return 0;
}