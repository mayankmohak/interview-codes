#include <bits/stdc++.h>
using namespace std;

#define TEST            ll T; cin >> T; while(T--)
#define fin(i,s,e)      for(ll i=s;i<=e;i++)
#define fde(i,s,e)      for(ll i=s;i>=e;i--)
#define pi              3.1415926535897932384626

struct Node {
    int val;
    Node * nxt = NULL;
};

Node * head=NULL;

void pushStack(int temp){
    Node * ptr = new Node();
    ptr->val = temp;
    if(head){
        ptr->nxt = head;
    }
    head = ptr; 
}

void printStack(){
    if(!head){
        cout<<"Empty Stack"<<endl;
        return;
    }

    Node *ptr = head;
    while(ptr){
        cout<<ptr->val<<",";
        ptr = ptr->nxt;
    }cout<<endl;
}

void popStack(){
    if(!head){
        cout<<"Empty Stack"<<endl;
        return;
    }
    cout<<"Pop Value"<<head->val<<endl;
    head = head->nxt;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int temp;
    
    popStack();
    while(n--){
        cin>>temp;
        pushStack(temp);
    }
    popStack();

    printStack();

    return  0;
}