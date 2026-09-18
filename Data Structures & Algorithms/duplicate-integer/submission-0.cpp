class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int flag=0;
        for(auto it:mpp){
            if(it.second>1) {flag=1;
            break;}
        }
        if(flag==1) return true;
        else return false;
        
    }
};