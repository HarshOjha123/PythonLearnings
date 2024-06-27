#include<iostream>
using namespace std;
int var(int n){
    n++;
    cout<<"in var function"<<" "<<n<<endl;
}

int main(){
    int n=11;
    var(n);
    cout<<"in main function"<<" "<<n;

}
//when we update a variable(same in main function/the variable we pass as a parameter during function calling) in user defined function.
//then the update only occurs in user-defined function not in the value of variable in main function

/*B  U  T*/

//IN array when we update a value in user defined function then the value in main function also gets updated

/*
#include<iostream>
using namespace std;
void updatearr(int arr[],int m){
arr[0]=6;
cout<<"in update function"<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
cout<<"go to main function"<<endl;
}

int main(){
int array1[3]={3,4,5};
updatearr(array1,3);
cout<<"in main function"<<" "<<array1[0]<<" "<<array1[1]<<" "<<array1[2]<<endl;
}*/