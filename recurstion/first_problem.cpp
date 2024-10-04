#include<bits/stdc++.h>

using namespace std;

  
// problem using recustion . print linearly 1 to n 

 void print(int i, int n){
      
 if(i>n) return ;
 cout<<i<<endl;
 print(i+1,n);





 }

int main(){
    int n;
     cin>>n;
      
   
  print(1,n);



     return 0;

}