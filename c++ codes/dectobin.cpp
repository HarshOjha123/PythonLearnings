#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,answer=0;
    
    cout<<"enter the number-"<<endl;
    cin>>n;int j=0;
    while(n!=0)
{
   int bit=n&1;
   
    answer=(pow(10,j)*bit)+answer;
    n=n>>1;
    j++;
}
cout<<answer<<endl;
}