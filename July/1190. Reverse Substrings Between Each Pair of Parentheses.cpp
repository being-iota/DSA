class Solution {
public:
    string reverseParentheses(string s) {
      stack<int> SkipLength;

      string result;

      for(char &ch : s){
        if(ch == '(') {
            SkipLength.push( result.length());
        } else if(ch == ')'){
            int l = SkipLength.top();
            SkipLength.pop();
            reverse(begin(result)+l, end(result));
        } else{
            result.push_back(ch);
        }
        
      }
      return result;  
    }
};