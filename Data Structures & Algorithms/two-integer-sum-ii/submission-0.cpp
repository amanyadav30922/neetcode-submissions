class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();

        int l=0;int r=n-1;
        while(numbers[l]+numbers[r]!=target){
           numbers[l]+numbers[r]<target?l++:r--;


            
        }
        return {l+1,r+1};
    }
};
