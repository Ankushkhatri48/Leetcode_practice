class Solution {
public:
    int ab(char s){

        if(s=='I') return 1;
        if(s=='V') return 5;
        if(s == 'X') return 10;
        if(s=='L') return 50;
        if(s=='C') return 100;
        if(s=='D') return 500;
        if(s=='M') return 1000;
        
        return 0;
    } 
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(i+1 <s.length() && ab(s[i])<ab(s[i+1])){
                ans-=ab(s[i]);
            }else{
            ans+= ab(s[i]);
            }
        }
        return ans;
    }
};