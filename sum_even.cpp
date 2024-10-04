#include<bits/stdc++.h>

using namespace std;

int main(){
      
    int n;
     cin>>n;
     int sum=0;
      for(int i=0; i<=n; i++)
      if(i%2==0){
          cout<<i<<" "<<endl;
          sum=sum+i;

      }

cout<<"the value of total even nunber sum"<<sum;




    return 0;

}