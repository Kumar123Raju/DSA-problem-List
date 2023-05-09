class Solution {
    void subset(vector<int> nums,vector<int> output,int index,vector<vector<int> > &ans){
            // base condition
             if(index>=nums.size()){
                 ans.push_back(output);
                 return;
             }

            // exclude
            subset(nums,output,index+1,ans);
            // include
            int element=nums[index];
            output.push_back(element);
            subset(nums,output,index+1,ans);       

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        subset(nums,output,0,ans);
        return ans;
        
    }
};
