class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // size of new string should be equal to the size of string s 
        // and number of spaces to be inserted
        int l = s.length() + spaces.size();
        // Declare a new string of size l
        // Declaring the string initially with the fixed size
        // will reduce the time complexity 
        string ans(l, ' ');
        // count represents the current position in new string.
        int count = 0;
        // temp represents the point from where we begin copying from string s. 
        int temp = 0;
        for(int i=0;i<spaces.size();i++){
            for(int j= temp; j< spaces[i] ; j++){
                ans[count++] =  s[j];
            }
            temp = spaces[i];
            ans[count++] = ' ';
        }
        for(int i= temp; i<s.length();i++){
         ans[count++] =  s[i];   
        }
        return ans;
    }
};