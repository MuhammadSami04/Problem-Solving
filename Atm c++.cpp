#include <iostream>

using namespace std;

int main()
{
    int m,p,o,a;
    char ct,lt,wt,ac,cp;
    cout<<"--------------Please insert your card---------------"<<endl;
    cout<<"----Choose your language----"<<endl;
    cout<<">English(E)"<<endl;
    cout<<">Hindi(H)"<<endl;
    cout<<">Telugu(T)"<<endl;
    cin>>lt;
    cout<<"==>Enter card type (Domestic(D)/International(I)) "<<endl;
    cin>>ct;
    cout<<"==>Enter type of account"<<endl;
    cout<<">>Savings(S)"<<endl;
    cout<<">>Current(C)"<<endl;
    cin>>ac;
    cout<<"     What do you want to do?      "<<endl;
    cout<<"=>Withdrawl(W)"<<endl;
    cout<<"=>Setup PIN(S)"<<endl;
    cout<<"=>Balance Enquiry(B)"<<endl;
    cout<<"=>Others(O)"<<endl;
    cin>>wt;
    if (wt=='W')
    {
       cout<<"Enter the amount"<<endl;
       cin>>m;
       cout<<"Please collect the cash"<<endl<<m;
       
    }
    if (wt=='S')
    {
        cout<<"Please Enter mobile number"<<endl;
        cin>>p;
        cout<<"........"<<endl;
        cout<<"Please Enter OTP"<<endl;
        cin>>o;
        cout<<"Please setup PIN"<<endl;
        cin>>a;
        cout<<"Confirm Pin (Y/N)"<<endl;
        cin>>cp;
        if (cp=='Y')
        {
            cout<<"PIN has been set"<<endl;
        }
        else
        cout<<"Something Went wrong please try again"<<endl;
    }
    if (wt=='B')
    {
        cout<<"Please Try again later"<<endl;
    }
    else if (wt=='O')
    cout<<"Please contact branch for more information";
    
    return 0;
}

