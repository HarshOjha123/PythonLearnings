#include<iostream>
using namespace std;
int main(){int x;
    cin>>x;
   signed int ans=0;
    while(x!=0){
       signed int r=x%10;
     ans=(ans*10)+r;
        x=x/10;

    }
   //cout<<(21&1)<<endl;

    cout<<"the reverse no. is:"<<ans;
}