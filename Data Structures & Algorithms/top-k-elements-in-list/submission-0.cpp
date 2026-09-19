class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> p;
        vector<int > result;
    
            for(auto it:mpp){
               p.push_back({it.second,it.first});
            }
            sort(p.rbegin(),p.rend());
            for(int i=0;i<k;i++){
                result.push_back(p[i].second);
            }
            return result;

       
       
        
        
    }
};