#include<iostream>
using namespace std;
int linSearch(int arr[],int m,int input){
    for(int i=0;i<m;i++){
    if (arr[i]==input)
    {
    return i;
    }
    }
    return -1;
}
int main(){
int key;
cin>>key;
int array1[]={10,20,30,90,-90,9,-9,10};
int n= sizeof(array1)/sizeof(int);
int found=linSearch(array1,n,key);
if(found==-1){
    cout<<"the key is not present"<<endl;
}else{
    cout<<"the key is present at index:"<<found;
}}