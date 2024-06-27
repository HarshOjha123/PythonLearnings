#include<iostream>
using namespace std;
int main(){
    int x=10,y=5;
    //arithmetic operator
    cout<<"arithemetic op:"<<x+y<<"\n";
     cout<<"arithemetic op:"<<x-y<<"\n";
      cout<<"arithemetic op:"<<x*y<<"\n";
       cout<<"arithemetic op:"<<x/y<<"\n";
        cout<<"arithemetic op:"<<x%y<<"\n";
 
 //comparison/relational operator

 cout<<"relational op:"<<(x==y)<<"\n";
  cout<<"relational op:"<<(x<=y)<<"\n";
   cout<<"relational op:"<<(x>=y)<<"\n";
    cout<<"relational op:"<<(x!=y)<<"\n";
     cout<<"relational op:"<<(x>y)<<"\n";
      cout<<"relational op:"<<(x<y)<<"\n";
// assignment operator(=,+=,-= and etc)

//logical operator
 cout<<"logical op 'and':"<<(x!=y && x>=y)<<"\n";
cout<<"logical op 'or':"<<(x==y || x>=y)<<"\n";
cout<<"logical op 'and':"<<!(x!=y && x>=y)<<"\n";


}