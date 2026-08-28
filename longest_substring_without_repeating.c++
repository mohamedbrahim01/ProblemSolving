class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;
        int left = 0;
        int ans = 0;
        for(int right = 0 ; right < s.size();right++){
            while(chars.find(s[right])!=chars.end()){
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[right]);
            int length = right - left +1;
            ans = max(ans,length);
        }
        return ans;
    }
};