class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i,j;
       i=0;
       for(j=1;j<nums.size();j++){
           if(nums[i]!=nums[j]){
               i++;
               nums[i]=nums[j];

           }
           
       } 
       return i+1;
    }
};