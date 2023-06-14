#include <iostream>
  using namespace std;
  
  int main()
  {
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
      int a,b;
      cin>>a;
      b=a%8;
      switch(b){
        case 1: cout<<a+3<<"LB"<<endl;
                break;
        case 2: cout<<a+3<<"MB"<<endl;
                break;
        case 3: cout<<a+3<<"UB"<<endl;
                break;
        case 4: cout<<a-3<<"LB"<<endl;
                break;
        case 5: cout<<a-3<<"MB"<<endl;
                break;
        case 6: cout<<a-3<<"UB"<<endl;
                break;
        case 7: cout<<a+1<<"SU"<<endl;
                break;
        case 0: cout<<a-1<<"SL"<<endl;
                break;    
      }
    }
    
    
    return 0;
  }
