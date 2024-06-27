#include<iostream>
using namespace std;
int main(){
    int arr[10];// intialization/declaration intially at all location in array garbage values are set(like 1,2,0)
char arry3[10]={'p','l','k','m','n'};

cout<<arry3[0]<<" "<<arry3[2];//accessing through indexing
 
//print the array
int arry1[3]={1,2,4};
int i=0;
while(i<3){
    cout<<arry1[i]<<endl;
i++;
}
int zero[10]={0};//intialising all loc of array size with zero(exception)
int k=0;
while(k<10){
    cout<<zero[k]<<" ";
k++;
}
cout<<endl;

//intialising all loc with same value other than zero in array

int l[10];
int j=0;
while(j<10){
     l[j]=1;
    cout<<l[j]<<endl;
    j++;

}

}
