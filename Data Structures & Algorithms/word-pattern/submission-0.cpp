class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string temp;

        stringstream ss(s);

        while(ss >> temp){
            words.push_back(temp);
        }

        if(pattern.size() != words.size())
            return false;


        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;


        for(int i=0; i<pattern.size(); i++){

            char ch = pattern[i];
            string word = words[i];


            // character -> word check
            if(mp1.find(ch) != mp1.end()){

                if(mp1[ch] != word)
                    return false;
            }


            // word -> character check
            if(mp2.find(word) != mp2.end()){

                if(mp2[word] != ch)
                    return false;
            }


            // store mapping
            mp1[ch] = word;
            mp2[word] = ch;
        }


        return true;
    }
};