class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
           int k=p.size();
        vector<int>res;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
     
        for(int i=0;i<p.size();i++)
            mp2[p[i]]++;
        
        int i=0,j=0;
        while(j<s.size()){
            mp1[s[j]]++;
            if(j-i+1<k){
                j++;
                continue;
            }
            else if(j-i+1==k){
                if(check(mp1,mp2)){
                    res.push_back(i);
                    mp1[s[i]]--;
                    i++;
                    j++;
                }
                else{
                    mp1[s[i]]--;
                    i++;
                    j++;
                }
            }
        }
        return res;
    }
    bool check(unordered_map<char,int> &mp1, unordered_map<char,int> &mp2){
        for(auto x:mp1){
            if(mp2[x.first]!=x.second)
                return false;
        }
        return true;
        
        
    }
};
