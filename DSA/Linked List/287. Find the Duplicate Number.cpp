Method 1 
TC -O(Nlogn)   *Nlogn for sorting (Merge Sort Internally*+N in worse case for searching if "i==i+1 break;" i.e *Nlogn +N=~Nlogn*
SC- Constant O(1)  *No External DS used here* 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a;
        for(int i=0;i<nums.size();i++)
        {
              if(nums[i]==nums[i+1])
                {
                    a=nums[i];
                    break;
                }
            
        }
        
        return a;
    }
};

Method 2
TC -O(N )  *N i.e for iterating in nums vector + 0(logN) in just checking in set (Contains)function and as we Consider the Higher order while considering the asymptotic calculation so O( N+logN)=0(N) we ignore the lower i.e logN*
SC- Constant O(n) *As we took set another Data Structure i.e  SET*
Check every time that if set contains that particular element whichever we are iterating right now in the nums vector ..If YES then return that particular element else add it int the set.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>s;
        for(auto it:nums)
        {
            if(s.count(it)!=0)
            {
                return it;
            }
            s.insert(it);
        }
        return 0;
    }
};
Method 3

TC -O(N )  *N i.e just for iterating in nums vector *

SC- Constant O(1) *As we took Nothing extra here
(NOTE:-Variable are not considered while Calculating  Space Complexity and TC*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
     While islie nhi use kre rhe kyunki turant match hojaega aur *instant fuck hojaega*
        do
        {
            slow=nums[slow];//1 step
            fast=nums[nums[fast]]; //2 step
        }while(slow!=fast);
        
        
        *Ab akhir mein jab match kr gya hoga to tum ek ko shuru mei lejao aur ek ek krke badhao*
        slow=nums[0];
        while(slow!=fast)
        {
         slow=nums[slow];
        fast=nums[fast];
        }
        return slow;
    }
};
Thanks for giving it a read!!Good Luck
```**
