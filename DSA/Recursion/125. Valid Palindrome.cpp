class Solution {
    bool isPalrec(string s , int a , int b){
        if(a==b) return true;
        if(s[a]!=s[b]) return false;
        if(a < b+1) return isPalrec(s,a+1,b-1);
        return true;
    }
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
        // Finding the character whose
        // ASCII value fall under this
        // range
            if(isdigit(s[i])!=0) continue ;
        if (s[i] < 'A' || s[i] > 'Z' &&
            s[i] < 'a' || s[i] > 'z'  )
        {  
            // erase function to erase
            // the character
            s.erase(i, 1);
            i--;
        }
    }
        // converting to lower case
        transform(s.begin(), s.end(), s.begin(), ::tolower);
         int n = s.size();
        if(n==0) return true;
        return isPalrec(s , 0, n-1);
        // return true;
    }
};
