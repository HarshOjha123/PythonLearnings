#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int input;
    cout<<"enter the input"<<endl;
    cin>>input;
    int hundred,fifty,twenty,one;
    switch(1){
        case 1:hundred=input/100;
        input=input-(hundred*100);
cout<<"the hundred note is required is:"<<hundred<<endl;

        case 2:fifty=input/50;
         input=input-(fifty*50);
cout<<"the fifty note is required is:"<<fifty<<endl;

        case 3:twenty=input/20;
         input=input-(twenty*20);
cout<<"the twenty note is required is:"<<twenty<<endl;
    case 4:one=input;
cout<<"the one note is required is:"<<one<<endl;}
}