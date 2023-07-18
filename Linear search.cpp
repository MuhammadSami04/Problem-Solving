#include<iostream>
using namespace std;
int main()
{

int i,n,k,j;
cout<<"Enter the size of array";
cin>>j;
int a[j];
cout<<"Enter the "<<j<<" elements";
for(k=0;k<j;k++)
{

cin>>a[k];
}
cout<<"Enter the number to find";
cin>>n;
for(i=0;i<j;i++)
{

if(n==a[i])
{
cout<<"Element found at index "<<i;
}


}

}
