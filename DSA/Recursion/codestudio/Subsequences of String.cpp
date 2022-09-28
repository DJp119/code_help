#include <bits/stdc++.h> 
void solve(string str,string output,int index,vector<string> &ans){
//      base case 
    if(index >= str.size()){
        if(output.length()>0)   ans.push_back(output);
        return; }
//         exculde
        solve(str,output,index+1,ans);
//         inculde
        char element = str[index];
        output.push_back(element);
        solve(str,output,index+1,ans);
    
}
vector<string> subsequences(string str){
    vector<string> ans;
    int index = 0;
    string output = "";
    solve(str,output,index,ans);
    return ans;
}
