#include <bits/stdc++.h>
using namespace std;

#define TEST            ll T; cin >> T; while(T--)
#define fin(i,s,e)      for(ll i=s;i<=e;i++)
#define fde(i,s,e)      for(ll i=s;i>=e;i--)
#define pi              3.1415926535897932384626

struct Node {
    int val;
    Node * nxt= NULL;
};
Node * head = NULL;
Node * tail = NULL;

void enQueue(int temp){
    Node * ptr = new Node();
    ptr->val = temp;
    cout<<"Pushed into Queue : "<<ptr->val<<endl;
    if(!head and !tail){
        head = ptr;
        tail = ptr;
    }else{
        tail->nxt = ptr;
        tail = ptr;
    }
}

void deQueue(){
    if(!head and !tail){
        cout<<"Queue is Empty."<<endl;
        return ;
    }
    cout<<"De-Queue : "<<head->val<<endl;
    head = head->nxt;
    if(head == NULL){
        tail=NULL;
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

    for(int i=0;i<n;i++)
        deQueue();
    
    return  0;
}