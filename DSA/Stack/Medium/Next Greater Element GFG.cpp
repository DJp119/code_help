//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> ans; // initialize an empty vector to hold the results
    stack<long long> s; // initialize an empty stack to hold elements from the input array
    // loop through the input array backwards
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        if(s.size()==0) // if the stack is empty, there is no larger element to the right
        {
            ans.push_back(-1); // add -1 to the result vector
        }
        else if(s.size()>0 && s.top() > arr[i]) // if the top element of the stack is greater than the current element
        {
            ans.push_back(s.top()); // add the top element to the result vector
        }
        else if(s.size()>0 && s.top() <= arr[i] ) // if the top element of the stack is less than or equal to the current element
        {
            while(s.size() > 0 && s.top() <= arr[i]) // pop elements from the stack until a larger element is found
            {
                s.pop();
            }
            if(s.size()==0) // if the stack is now empty, there is no larger element to the right
            {
                ans.push_back(-1); // add -1 to the result vector
            }
            else
            {
                ans.push_back(s.top()); // add the top element to the result vector
            }
        }
        s.push(arr[i]); // push the current element onto the stack
    }
    reverse(ans.begin(),ans.end()); // reverse the result vector to get the elements in the correct order
    return ans; // return the result vector

}
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
