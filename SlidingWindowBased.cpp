Input : String: hello
        Size: 2
        Distinct Substring: [el, he, ll, lo]
Output : Smallest Substring: el
         Largest Substring: lo

Input : String: geeksforgeeks
        Size: 3
        Distinct Substring: [eek, eks, for, gee, ksf, org, rge, sfo]
Output : Smallest Substring: eek
         Largest Substring: sfo
         
         
         
         --------------------
#include<bits/stdc++.h>
using namespace std;
 int main(){
     string str;
     int size, i;
     cin>>str>>size;
        string currStr = str.substr(0, size); 
        string lexMin = currStr; 
        string lexMax = currStr;
        for(i=size; i<str.length(); i++){
          currStr = currStr.substr(1, size) + str[i];
          if(lexMax < currStr){
              lexMax = currStr;
          }if(lexMin > currStr){
              lexMin = currStr;
          }
     }
     cout << lexMin << std::endl;
     cout<<lexMax<<endl;
 }
