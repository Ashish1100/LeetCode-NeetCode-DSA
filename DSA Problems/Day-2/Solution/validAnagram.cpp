bool isAnagram(string s, string t) 
    {
        vector<int> counts(26);

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(t.begin(), t.end(), t.begin(), ::tolower);

        for(int i = 0; i < s.size(); i++)
        {
            counts[s[i] - 'a']++;
        }

        for(int i = 0; i < t.size(); i++)
        {
            counts[t[i] - 'a']--;
        }
        
        for(int count : counts) // Changed count to counts, and removed the extra for loop
        {
            if(count != 0)
            {
                return false;
            }
        }
        return true;
    }
// TC: O(n)
