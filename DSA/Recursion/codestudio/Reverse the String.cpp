#include <bits/stdc++.h> 
void reverse(string& s,int i , int j){
    // base case 
    if(i>j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    //  Recursive call 
    reverse(s,i,j);

}
string reverseString(string str)
{
    reverse(str,0,str.size()-1);
    return str;
}
