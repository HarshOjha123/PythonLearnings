#include<iostream>
using namespace std;
void revArray(int arr[],int m)
{
    int k=0,temp;
    cout<<m;
        for(int i=m-1;i>=0;i--){
            if(k>=i){
                break;
            }
            temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
            k++;
    }
        cout<<"[";
        for(int p=0;p<m;p++)
            {
            cout<<" "<<arr[p]<<" ";
            }
        cout<<"]";
}
int main(){
    int array1[]={6,5,4,3,2,1,0};
    int n=sizeof(array1)/sizeof(int);
    int array2[100];
    int size;
    cin>>size;
    for(int t=0;t<size;t++){
        cin>>array2[t];    
    }
revArray(array1,n);
revArray(array2,size);


}