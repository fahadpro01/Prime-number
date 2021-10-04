#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int n,i;
  bool flag=0;
  
  cin>>n;
  for(i=2;i<=n;i++){
    if(n%i==0)
    { 
      
      cout<<"Non Prime";
      flag=1;
      break;
    }
    if(flag==0){
    
     cout<<"Prime";
    break;
    }
  }
}