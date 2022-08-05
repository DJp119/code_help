class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0 ;
        int ansindex = 0 ;
        int n = chars.size();
        
        while(i<n){
            int j = i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
                
            }
//              yaha Kab aaoge
//              ya to vector pura travese kar kardiya
//              ya fhir new/different charcter encounter kia hai
            
            
            // oldChar store karlo 
            chars[ansindex++] = chars[i];
            
            int count = j-i;
            if(count > 1){
                // converting counting into single digit and saving  in answer 
               string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansindex++] = ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
};
