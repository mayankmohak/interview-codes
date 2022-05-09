#include <bits/stdc++.h>
using namespace std;

#define TEST            ll T; cin >> T; while(T--)
#define fin(i,s,e)      for(ll i=s;i<=e;i++)
#define fde(i,s,e)      for(ll i=s;i>=e;i--)
#define pi              3.1415926535897932384626

stack<int> q,q1;

void enQueue(int temp){
    q.push(temp);
}

void deQueue(){
    if(q.size()==0){
        cout<<"Empty QUEUE !!!\n";
        return ;
    }else{
        int n=q.size(),temp;
        for(int i=0;i<n-1;i++){
            temp = q.top();
            q1.push(temp);
            q.pop();
        }
        cout<<"Deleted Element : "<<q.top()<<endl;
        q.pop();
        for(int i=0;i<n-1;i++){
            temp = q1.top();
            q.push(temp);
            q1.pop();
        }
    }
}

void Front(){
    if(q.size()==0){
        cout<<"Empty QUEUE !!!\n";
        return ;
    }
    int n=q.size(),temp;
    for(int i=0;i<n-1;i++){
        temp = q.top();
        q1.push(temp);
        q.pop();
    }
    cout<<q.top()<<endl;
    for(int i=0;i<n-1;i++){
        temp = q1.top();
        q.push(temp);
        q1.pop();
    }
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
        enQueue(temp);
    }

    for(int i=0;i<n+1;i++){
        Front();
        deQueue();
    }
    
    return  0;
}