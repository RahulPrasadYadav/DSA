#include<bits/stdc++.h>

using namespace std;

int main(){

      // create 2D array
         int arr[3][4];
          
          // taking input  -> row wise input 

        //   for(int i=0; i<3; i++){
        //        for(int j=0; j<4; j++){
        //           cin>>arr[i][j];

        //        }
        //   }

          
          // print

        //   for(int i=0; i<3; i++){
        //        for(int j=0; j<4; j++){
        //           cout<<arr[i][j]<<" ";

        //        }
        //         cout<<endl;

        //   }


          // col wise input 
          for(int i=0; i<4; i++){
               for(int j=0; j<3; j++){
                  cin>>arr[j][i];

               }
          }
         

          for(int i=0; i<3; i++){
               for(int j=0; j<4; j++){
                  cout<<arr[i][j]<<" ";

               }
                cout<<endl;

          }









    return 0;

}