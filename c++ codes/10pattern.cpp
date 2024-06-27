#include<iostream>
using namespace std;
int main(){
/*   //1
int i=1,j;
while(i<=5){
    j=1;
    while ( j<=5)          
    { cout<<"*";            
    j=j+1;
    }cout<<endl;
    i=i+1;

}*/  //2
/*int x=1;
while(x<=3)
{int y=1;
    while(y<=3){
        cout<<x;
        y=y+1;

    }cout<<endl;
x=x+1;}

*/

/*    //3  
int x=1;
while(x<=4){
    int y=1;
    while(y<=4){
cout<<y;
y++;
    }cout<<endl;
    x+=1;
}*/

/*    //4
int i=1;

while(i<=3){
    int j=1;
    int count=3;
    while(j<=3){
        cout<<count;
        count--;
        j++;
    }cout<<endl;
    i++;
}*/
/*     //5
int i=1;int count=1;
while(i<=3){
    int j=1;
    while(j<=3){
        cout<<count;
        count++;
        j++;
    }cout<<endl;
    i++;
}*/
/*     //6
int i=1;
while(i<=4){
    int j=1;
    while(j<=i){
        cout<<"*";
        j++;

    }cout<<endl;
    i++;
}*/
/*     //7
int i=1;
while(i<=4){
    int j=1;
    while(j<=i){
        cout<<i;
        j++;
    }cout<<endl;
i++;
}*/
/*      //8
int i=1;int count=1;
while(i<=4){
    int j=1;
    while(j<=i){
        cout<<count<<"\t";
        count++;
        j++;

    }cout<<endl;
    i++;
}*/
/*        //9
int i=1;
while(i<=4){
    int j=1;   //int count=i; 
    while(j<=i){
        cout<<i+j-1;  //cout<<count;
        j++;          //count++;
    }cout<<endl;
    i++;
}*/
/*      //10
int i=1;
while(i<=4){
    int j=1;int count=i;
    while(j<=i){
        cout<<count;
        count--;
        j++;
    }cout<<endl;
    i++;
}*/
/*        //11
int i=1;int count=65;
while(i<=4){
    int j=1;
    char ch=count;
    while(j<=4){
        cout<<ch;
        j++;
    }cout<<endl;
    count++;
i++;
}*/
/*       //12
int i=1;
while(i<=4){
    int j=1;
   int count=65;
    while(j<=4){char ch=count;

        cout<<ch;
    count++;    j++;

    }cout<<endl;
    
i++;
}*/
/*       //13
int i=1;int count=65;
while(i<=4){
    int j=1;
    
    while(j<=4){
        char ch=count;
        cout<<ch;
        j++;
count++;
    }cout<<endl;
    i++;

}*/
/*       //14
int i=1;int count=65;
while(i<=3){
    int j=1; 
    char ch=count;
    while(j<=3){
        cout<<ch<<"\t";
        ch++;
        j++;

    }cout<<endl; count++;
 i++; 
}*/
/*      //15
int i=1;int count=65;
while(i<=3){
    int j=1;char ch=count;
    while(j<=i){
        cout<<ch;
        j++;
    }cout<<endl;
    count++;
    i++;
}*/
/*        //16
int i=1;int count=65;
while (i<=4)
{
int j=1; char ch=count;
while(j<=i){
    cout<<ch;
    ch++;
    j++;
}cout<<endl;count+=i; 
i++;
}
*/
/*          //17
int i=1;int count=65;
while (i<=4)
{
int j=1; char ch=count;
while(j<=i){
    cout<<ch;
    ch++;
    j++;
}cout<<endl;count+=1; 
i++;
}*/
/*         //18
int i=1;int count=68;
while (i<=4)
{
int j=1; char ch=count;
while(j<=i){
    cout<<ch;
    ch++;
    j++;
}cout<<endl;count-=1; 
i++;
}*/
/*        //19
int i=1;
while(i<=4){
    int j=4-i;
    while(j>=1){
        cout<<" ";
        j--;    
    }int k=1;
    while(k<=i){cout<<"*";
    k++;
    }
    cout<<endl;
    i++;
}
*/

//20
/*int i=1;
while(i<=4){
    int j=4-i+1;
    while(j>=1){
        cout<<"*";
        j--;
    }cout<<endl;
    i++;
}*/
//21
/*int i=1;
while(i<=4){
    int j=1;
    while(j<i){
        cout<<" ";
        j++;    
    }int k=4-i+1;
    while(k>=1){cout<<"*";
    k--;
    }
    cout<<endl;
    i++;
}*/
//22
/*int i=1;
while(i<=4){
    int j=1;
    while(j<i){
        cout<<" ";
        j++;

    }
    int k=4-i+1;
    while(k>=1){
        cout<<i;
k--;
    }cout<<endl;
    i++;
}
*/
// 23

/*int i=1;
while(i<=4)
{
    int j=4-i;
    while(j>0){
        cout<<" ";
        j--;
    }int k=1;
    while(k<=i){
        cout<<i;
        k++;
    }cout<<endl;
    i++;
}*/
//24
/*int i=1;
while(i<=4)
{int c=i;
    int j=1;
    while(j<i){
        cout<<" ";
        j++;
    }int k=4-i+1;
    while(k>0){
        cout<<c;
        k--;
        c++;
    }cout<<endl;
    i++;
}*/
//25

/*int i=1;int count=1;
while(i<=4)
{
    int j=4-i;
    while(j>0){
        cout<<" ";
        j--;
    }int k=1;int p=count;
    while(k<=i){
        cout<<p;
        k++;
    p++;
    }cout<<endl; count+=i;
    i++;
}*/
//26

/*int i=1;
while(i<=4){
    int j=4-i,c=1;
    while(j>0){
        cout<<" ";
        j--;
    }int k=1;
    while(k<=i){
        cout<<c;
    k++;c++;
    }int n=2;int m=i-1;
    while(n<=i){
        cout<<m;
        n++;
        m--;
          }
    cout<<endl;
    i++;
}*/

//27

/*int i=1;
while(i<=5){
    int j=5-i+1,k=1;
    while(j>0){
        cout<<k;
        j--;
        k++;

    }int n=2;
    while(n<=i){
        cout<<"**";
        n++;
    }int v=5-i+1,h=5;
    while(v>0){
        cout<<h;
        h--;
        v--;
    }
    cout<<endl;
    i++;
}*/
}