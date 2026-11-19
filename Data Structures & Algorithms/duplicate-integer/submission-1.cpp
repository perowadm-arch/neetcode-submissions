class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool hdp = false;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int temp = nums[i];
            int count =0;
            for(int j = 0; j < n; j++){
                if(nums[j] == temp){
                    count++;
                    if(count > 1){
                    hdp = true;
                    }
                }

                
            }
            
        }


    return hdp;
    }
};