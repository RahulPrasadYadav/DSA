#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
     cin>>n;
      int i=2;
      while(i<n){
           if(n%2==0){
              cout<<"is not prime"<<i<<endl;
                 
                 
             }
             

           else{
               cout<<"ITS is a prime"<<i<<endl;

           }
           i=i+1;

      }


    return 0;

}