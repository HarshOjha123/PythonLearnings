#include<iostream>
using namespace std;
int main(){
    int a=23;
    float b=2.3;
    double c=2.33;
    char ch='a';
    bool d=true;
    int size=sizeof(a);//method used to know the memory size of variables(data types)
    int size1=sizeof(b);
    int size2=sizeof(c);
    int size3=sizeof(d);
    int size4=sizeof(ch);


    cout<< "the integer value is :"<< a << endl;
    cout<< "the float value is :"<< b << endl;
    cout<< "the character value is :"<< ch << endl;
    cout<< "the double value is :"<< c << endl;
    cout<< "the boolean value is :"<< d << endl;
    cout<<"in bytes:"<<size<<endl;
    cout<<"in bytes:"<<size2<<endl;
    cout<<"in bytes:"<<size3<<endl;
    cout<<"in bytes:"<<size4<<endl;
    cout<<"in bytes:"<<size1<<endl;


}