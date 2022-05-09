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

    while(n--){
        cin>>temp;
        enQueue(temp);
    }

    
    Front();
    deQueue();
    Front();
    deQueue();
    Front();
    deQueue();
    Front();
    deQueue();
    Front();
    deQueue();
    Front();
    deQueue();
    Front();
    deQueue();

    
    return  0;
}




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

    while(n--){
        cin>>temp;
        Push(temp);
    }
    cout<<Top()<<",";
    Pop();
    cout<<Top()<<",";
    Pop();
    cout<<Top()<<",";
    Pop();
    cout<<Top()<<",";
    Pop();
    cout<<Top()<<",";
    Pop();
    cout<<Top()<<",";
    Pop();
    cout<<Top()<<",";
    Pop();
    
    return  0;
}



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
    cout<<"De-Queue"<<head->val<<endl;
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
    while(n--){
        cin>>temp;
        enQueue(temp);
    }
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    return  0;
}






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