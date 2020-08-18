#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1], span[n+1];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    std::stack<int>st;
    
    st.push(0);
    cout<<1<<" ";
    for(int i=1; i<n; i++){
        while(!st.empty() && a[st.top()]<=a[i]) st.pop();
        
        if(st.empty()) span[i] = i+1;
        
        else   span[i] = i - st.top();
        
        st.push(i);
        cout<<span[i]<<" ";
    }

   // cout<< *max_element(span, span+n);
}
