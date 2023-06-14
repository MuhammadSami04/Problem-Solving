#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int t,hr,min,a,b,ang;
    cin>>t;
    while(t>0){
    cin>>hr>>min;
    min=min/5;
    a=hr-min;
    b=abs(a);
    if(b==6){
      ang=180;
      cout<<ang<<endl;
    }
    else {
    ang=b*15;
    if(ang>180){
      ang=360-ang;
    }
    cout<<ang<<endl;
    }
    t--;
}
   return 0;
  
}
