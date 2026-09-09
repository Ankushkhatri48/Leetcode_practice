class Solution {
public:
    bool canConstruct(string r, string m) {
        int freq[26]={};
        for(char x:m){
            freq[x-'a']++;
        }
        for(char x:r){
            freq[x-'a']--;
            if(freq[x-'a']<0){
                return false;
            }
        }
        return true;
    }
};