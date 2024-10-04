#include<bits/stdc++.h>

using namespace std;

int main(){
   vector<int> v;
   cout<<"size->"<<v.capacity()<<endl;

   v.push_back(1);
      cout<<"size->"<<v.capacity()<<endl;

     v .push_back(2);
      cout<<"size->"<<v.capacity()<<endl;

       v .push_back(3);
      cout<<"capacity"<<v.capacity()<<endl;

      cout<<"size->"<<v.size()<<endl;

      cout<<"element at 2nd Index"<<v.at(2)<<endl;


         cout<<"front elemnt "<<v.front()<<endl;
         cout<<"last elemnt "<<v.back()<<endl;


    cout<<"before pop"<<endl;
    for(int i:v){
         cout<<i<<" ";

    }
    cout<<endl;
    
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
          cout<<i<<" ";

    }
    cout<<endl;


    vector<int> v1(5,1);
     for(int i:v1){
           cout<<v1[i]<<"  ";

     }
           cout<<endl;

           // copy the vector

           vector<int> last(v1);
           for(int i:last){
              cout<<last[i]<<" ";

           }

     














    return  0;

}