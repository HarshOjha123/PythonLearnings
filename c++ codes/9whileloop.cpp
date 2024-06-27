#include<iostream>
using namespace std;
int main(){
    int i;                  
                                                 //the sum of even nos between 0 t0 i
    cin>>i;
    int j=1,sum=0;
    while (j<=i)
    {
        if(j%2==0){sum=sum+j;
        }
    j=j+1;}
    cout<<"the sum of even nos between 0 t0 i: "<<sum<<endl;

//check n is prime or not
int n;
cin>>n;
int x=2;
while(x<n)
{
    if(n%x==0){
        cout<<"n is not a prime no";
        break; }
    else{
        cout<<"the no is prime"<<x<<endl;
    }
    x=x+1; }
}