#include <bits/stdc++.h>
using namespace std;

#define TEST            ll T; cin >> T; while(T--)
#define fin(i,s,e)      for(ll i=s;i<=e;i++)
#define fde(i,s,e)      for(ll i=s;i>=e;i--)
#define pi              3.1415926535897932384626

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    
    string str;
    cin>>str;
    int n=str.size();

    stack<char> stk;
    for(int i=0;i<n;i++){
        if(str[i]=='{' or str[i]=='(' or str[i]=='[')
            stk.push(str[i]);
        else{
            if((str[i]==']' and stk.top()=='[')
            or (str[i]=='}' and stk.top()=='{')
            or (str[i]==')' and stk.top()=='('))
                stk.pop();
            else
                break;
        }
    }
    if(stk.size()>0)
        cout<<"FALSE";
    else
        cout<<"TRUE";

    return  0;
}
