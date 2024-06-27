#include <iostream>
using namespace std;
int main(){
    int x,y;
    x=10;
    y=20;
    const int z=30; //unchangeable variable it cannot be override
    cout<< "the sum is :"<<x+y+z<<endl;
    x=20;
    y=30;
    cout<< "the sum is :"<<x+y+z<<endl;

}