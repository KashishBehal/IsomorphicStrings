class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
     if (str1.size() != str2.size())
            return false; 
        
        vector<int> lastSeen1(256, -1); 
        vector<int> lastSeen2(256, -1); 
        
        for (int i = 0; i < str1.size(); ++i) {
            if (lastSeen1[str1[i]] != lastSeen2[str2[i]])
                return false; 
            
            lastSeen1[str1[i]] = i;
            lastSeen2[str2[i]] = i;
        }
        
        return true; }
};
