#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter a character ";
	cin>>c;
    if(c=='p'||c=='P')
    cout<<"PrepBytes";
    else if(c=='Z'||c=='z')
    cout<<"Zenith";
    else if(c=='E'||c=='e')
    cout<<"Expert Coder";
    else if(c=='D'||c=='d')
    cout<<"Data Structure";
    else
    cout<<"Please enter character from p,z,e,d";
	}
