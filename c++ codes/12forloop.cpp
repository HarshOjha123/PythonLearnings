#include<iostream>
using namespace std;
int main(){

//fibonacci series

/*int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b <<" "; 
for(int i=1;i<=n;i++){
    int sum=a+b;
    a=b;
    b=sum;
    cout<<sum<<" ";
}*/

//is prime no or not

int n;
bool check=1;
cin>>n;
for(int i=2;i<n;i++){
if(n%i==0)
{
    check=0;
    break;
}
}
if(check==0){
    cout<<"the no is not prime";
}
else{
    cout<<"the no. is prime";
}


}