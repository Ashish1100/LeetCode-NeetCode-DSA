// Function 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
     unordered_set<int> intSet;

     for(int x : nums)
      {
        if (intSet.find(x) != intSet.end())
            return true;
        
        intSet.insert(x); 
      }
    return false;
    }
};

// TC: O(n)
// SC: O(n)
