class Solution {
public:
    vector<int> orArray(vector<int>& nums) {
        vector<int>res;
       // int sum =nums[0];
        //res.push_back(sum);
        for(int i=0; i<nums.size()-1; i++)
        {    int sum=0;
             sum = nums[i]|nums[i+1];
            res.push_back(sum);
        }


        return res;
        
    }
};
