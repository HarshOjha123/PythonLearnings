#include<iostream>
using namespace std;
int main()
{  
    //all these operators work on bit values
    int a=2;
    int b=3; 
    cout<<"bit &   AND " << (a&b) <<endl; 
    cout<<"bit |   OR "<< (a|b)  <<endl; 
    cout<<"bit ^   XOR " << (a^b) <<endl; 
    cout<<"bit ~   not " << (~a) <<endl;
    cout<<"right shift >> :" << (a>>2) <<endl;
    cout<<"left shift << :" << (a<<2) <<endl;

}