class Solution {
public:
vector<string> result;

    unordered_map<char, string> phone = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    void BackTrack(string& digits, string& current , int index){
        // Base case 
        if(index == digits.size()){
            result.push_back(current);
            return ;
        }
        // get letter for current digit
        string letters = phone[digits[index]];
        // try every possible letter 
        for(char c : letters){
            //choose
             current.push_back(c);
             //explore
             BackTrack( digits,  current ,  index +1);
             current.pop_back();
        }  

    }
    vector<string> letterCombinations(string digits) {
          if (digits.empty()) {
            return {};
        }
         string current;
         BackTrack(digits, current, 0);
         return result;
        
    }
};