class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    //     int n=temperatures.size();
    //     vector<int>ans(n,0);
    //     stack<int>st;
    //     for(int i=0;i<n;i++){
    //         while(!st.empty() && temperatures[i]>temperatures[st.top()]){
    //             int prev=st.top();
    //             st.pop();
    //             ans[prev]=i-prev;
    //         }
    //         st.push(i);
    //     }
    //     return ans;
    int n=temperatures.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            
            if(temperatures[j]>temperatures[i]){
                ans[i]=j-i;
                break;
            }
        }
    }
   return ans;
     }
};
