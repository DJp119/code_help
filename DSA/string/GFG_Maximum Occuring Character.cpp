//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int arr[26] = {0};

// create an array count of charcter 
    for(int i  = 0 ;i<s.length();i++){
        char ch = s[i];
        // defines lower case 
        int number = 0 ;
        
            number = ch - 'a';
            /* code */
        arr[number]++;
    }
    // find maximum occ charcter 
    int maxi = -1 , ans = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(maxi < arr[i]){
            ans = i ;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
