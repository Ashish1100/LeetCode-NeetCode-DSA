// function: Naive Approach

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        
     sort(nums.begin(), nums.end()); 
     int n = nums.size();

    for (int i =0; i < n-1; i++)
     {
        if(nums[i] == nums[i+1])
        {
          return true;
        }
     }
  return false;
    }
};

// TC: O(nlogn)
// SC: O(1)

Link: https://youtu.be/0LIctkgJ2hQ?si=g9q3gxMvGXPnLxbk


