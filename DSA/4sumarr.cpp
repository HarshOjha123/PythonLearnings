#include<iostream>
using namespace std;

int sumarr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int array1[100];
    for(int j=0;j<size;j++){
        cout<<"enter the number"<<" "<<j<<":";
        cin>>array1[j];
    }
    cout<<"the sum of array:"<<sumarr(array1,size);

}