#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
      cout<<a<<" is smaller than "<<b<<endl;
    }
    else if(a>b)
    {
      cout<<a<<" is greater than "<<b<<endl;
    }
    else
    {
      cout<<a<<" is equal to "<<b<<endl;
    }
    return 0;
  }
