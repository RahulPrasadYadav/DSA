//  print using recursion  5 time name 

#include<bits/stdc++.h>
using namespace std;
void fn(int i,int n){
       if(i>n) return ;
       cout<<"Rahul"<<endl;
       fn(i+1,n);
}

int main(){
    int n;
    cin>>n;

     fn(1,n);
     



    return 0;

}