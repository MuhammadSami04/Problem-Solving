#include<iostream>
  using namespace std;
  int main()
  {
   int t,n;
    cin>>t;
    while(t--){
     cout<<"Enter the year "<<endl;
      cin>>n;
      if((n%100==0 && n%400==0) || (n%100!=0 && n%4==0))
      cout<<"The given year is a leap year"<<endl;
      else 
	  cout<<"The given year is not a leap year"<<endl;}
    return 0;
  }
