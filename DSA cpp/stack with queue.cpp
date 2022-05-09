#include <bits/stdc++.h>
using namespace std;

#define TEST            ll T; cin >> T; while(T--)
#define fin(i,s,e)      for(ll i=s;i<=e;i++)
#define fde(i,s,e)      for(ll i=s;i>=e;i--)
#define pi              3.1415926535897932384626

queue<int> stk;

void Push(int temp){
    int size = stk.size();
    stk.push(temp);

    for(int i=0;i<size;i++){
        temp = stk.front();
        stk.pop();
        stk.push(temp);
    }
}

void Pop(){
    if(stk.size()==0){
        cout<<"Empty stk!!\n";
    }else{
        stk.pop();
    }
}

int Top(){
    if(stk.size()==0){
        cout<<"Empty stack!!\n";
    }else{
        return stk.front();
    }
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int temp;

    for(int i=0;i<n;i++){
        cin>>temp;
        Push(temp);
    }

    for(int i=0;i<n+1;i++){
        cout<<Top()<<",";
        Pop();
    }
    
    return  0;
}
