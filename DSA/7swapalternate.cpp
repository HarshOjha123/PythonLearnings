#include<iostream>
using namespace std;
void swapAlternate(int arr[],int m){
    int temp,k=1;
        for(int i=0;i<m-2;i+=2){
            if(k>=m){
                break;
            }
            temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
            k+=2;}       
            cout<<"["<<" ";    
        for(int j=0;j<m;j++){
            cout<<arr[j]<<" ";
            }
        cout<<"]";
}
int main(){
int array1[]={1,2,3,4,5,6,7,8};
int n=sizeof(array1)/4;//sizeof(int)=4
//cout<<n;
swapAlternate(array1,n);
}