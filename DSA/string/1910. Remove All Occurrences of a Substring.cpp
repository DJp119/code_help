class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size() != 0 && s.find(part) <s.length() ){
            s.erase(s.find(part),part.length());
            
        }
        return s;
      // int k = part.length();
      //   for(int i = 0 ; i<s.length();i=i+k){
      //       if(s[i,i+k]=='abc'){
      //           s.erase(i,i+k);
      //           // i= i + k;
      //       }
      //   }
      //   return s;
    }
};
