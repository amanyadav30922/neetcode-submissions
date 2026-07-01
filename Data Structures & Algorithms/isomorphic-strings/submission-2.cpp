// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         int m=s.size(),n=t.size();
//         if(m!=n) return false;
//         for(int i=0;i<m;i++){
//             for(int j=i+1;j<n;j++){
//                 if(s[i]==s[j] && t[i]!=t[j]) return false;
//                 if(t[i]==t[j] && s[i]!=s[j]) return false;
//             }
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map1[256] = {0};
        int map2[256] = {0};

        for(int i=0;i<s.size();i++){
            if(map1[s[i]] != map2[t[i]])
                return false;

            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        return true;
    }
};