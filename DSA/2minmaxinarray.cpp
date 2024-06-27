#include<iostream>
#include<math.h>
using namespace std;

    int maxarry(int arry[],int m){
        int i=0,max=-pow(2,32);//INT_MIN
        while(i<m){
            if(arry[i]>max){ // var=max(var,arry[i]); function we can use instead of 'if block'
                 max=arry[i];    
            }
            i++;
        }
        return max;
    }
        int minarry(int arry[],int m){    
        int i=0;
        double min=pow(2,32);//INT_MAX
        while(i<m){
            if(arry[i]<min){ // var=min(var,arry[i]); function we can use instead of 'if block' 
                min=arry[i];    
            }
            i++;
        }
        return min;


    }
int main(){
    int size;
    cout<<"input size"<<endl;
    cin>>size;
    int array1[100];
    cout<<"array input:"<<" ";
    for(int i=0;i<size;i++){
        cin>>array1[i];    
    }
    cout<<"the maximum no in array is:"<<maxarry(array1,size)<<endl;
    cout<<"the minimum no in array is:"<<minarry(array1,size);

}
