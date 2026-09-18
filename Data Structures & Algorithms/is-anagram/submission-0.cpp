class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp;
        int n=s.length(),m=t.length();
        if(n!=m) return false;
        else {
            for(int i=0;i<n;i++){
                mpp[s[i]]++;
                mpp[t[i]]--;
            }
            int flag=0;
            for(auto it:mpp){
                if(it.second!=0) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) return true;
            else return false;
        }
        
    
    }
};
