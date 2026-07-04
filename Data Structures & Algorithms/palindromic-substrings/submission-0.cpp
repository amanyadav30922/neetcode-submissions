class Solution {
public:
bool ispalindrome(string s){
    int l=0,r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;r--;
    }
    return true;
}
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                 string sub = s.substr(i, j - i + 1);
                 if(ispalindrome(sub)){
                    count++;
                 }
            }
        }
        return count;
    }
};