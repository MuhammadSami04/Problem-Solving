  #include<iostream>
  using namespace std;
  
  int main()
  {
    int x,y,z;
    cin>>x>>y>>z;
    
    if(x<y&&y<z){
      cout<<y;
    }
    else if(x>y&&y>z){
      cout<<y;
    }
    else if(x<z&&z<y){
      cout<<z;
    }
     else if(x>z&&z>y){
      cout<<z;
    }
    else{
      cout<<x;
    }

    
    return 0;
  }
