class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int current=0;
        int fastest=0;

        for(int i=0;i<nums.size()-1;i++){
              fastest=max(fastest,nums[i]+i);
        if(i==current){
            current=fastest;
      
        jumps++;
        }
        }
        return jumps;
    }
};
