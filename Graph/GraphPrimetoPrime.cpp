#include<bits/stdc++.h>
using namespace std;
bool compare(int num1 , int num2){
    string s1 = to_string(num1); 
    string s2 = to_string(num2); 
    int c=0;
    if(s1[0]!=s2[0]){
        c++;
    }if(s1[1]!=s2[1]){
        c++;
    }if(s1[2]!=s2[2]){
        c++;
    }if(s1[3]!=s2[3]){
        c++;
    }
    if(c==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,p,i,j;
    cin>>a>>b;
    list<int> adj[10000];
    bool prime[10000];
    memset(prime, true, sizeof(prime)); 
    for(p=2; p*p<=9999; p++){
        if(prime[p]==true){
            for(i = p*p; i<=9999; i = i+p){
                prime[i] = false;
            }
        }
    }
    std::vector<int>v ;
    for(p=1000;p<=9999; p++){
        if(prime[p]==true){
            v.push_back(p);
        }
    }
    for(i=0; i<v.size(); i++){
        for(j=i+1; j<v.size(); j++){
            if(compare(v[i] , v[j])){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int aa ,bb;
    for(j=0; j<v.size(); j++){
        if(v[j]==a){
            aa = j;
        }
    }
    for(j=0; j<v.size(); j++){
        if(v[j]==b){
            bb = j;
        }
    }
    int visited[10000];
    memset(visited, 0, sizeof(visited));
    std::list<int>queue;
    list<int>::iterator ii;
    queue.push_back(aa);
    visited[aa] = 1;
    while(!queue.empty()){
        int s = queue.front();
        queue.pop_front();
        for(ii=adj[s].begin(); ii!=adj[s].end(); ii++){
            if(!visited[*ii]) {
                visited[*ii] = visited[s] + 1;
                queue.push_back(*ii);
            }
            if(*ii==bb){
               cout<<visited[*ii] - 1<<endl;
            }
        }
    }
}