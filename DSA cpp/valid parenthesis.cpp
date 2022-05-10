gfg problem link: https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1/#
vector<long long> nextLargerElement(vector<long long> arr, int n){

    vector<long long> ans(n,-1);
    stack<long long> stk;
    for(int i=n-1;i>=0;--i){
        if(stk.size()>0){
            if(stk.top()>arr[i]){
                ans[i]=stk.top();
                stk.push(arr[i]);
            }
            else{
                while(stk.size()>0 and stk.top()<=arr[i]){
                    stk.pop();
                }
                i++;
            }
        }else{
            ans[i]=-1;
            stk.push(arr[i]);
        }
    }
    
    return ans;
}