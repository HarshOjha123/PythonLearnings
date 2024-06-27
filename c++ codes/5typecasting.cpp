#include<iostream>
using namespace std;
int main(){
    int a=97;
    float b=a;
    double f=a;
    char cha=a;
    float c=3.22;
    int d=c;
    cout<< "type cast from int to float:"<<b<<endl;
    cout<< "type cast from int to double"<<f<<endl;
     cout<< "type cast from int to char :"<<cha<<endl; // according to ascii table
    cout<< "type cast from float to int:"<<d<<endl;


    char ch='A';
    int e=ch;
    float g=ch;
    double h=ch;
    cout<< "type cast from char to int :"<<e<<endl;
     cout<< "type cast from char to float :"<<g<<endl;
      cout<< "type cast from char to double :"<<h<<endl;

    int j='a';
    char k=90;
    cout<< "type cast :"<<k<<endl;
    cout<< "type cast :"<<j<<endl;

}