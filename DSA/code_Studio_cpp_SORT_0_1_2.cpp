***********link *********
// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?leftPanelTab=0
************my approach *******
#include <bits/stdc++.h> 
void sort01(int *arr,int n, int k ){
    int left = 0, right = n-k-1;

    while(left < right) {

            while(arr[left] == 0 && left < right )  {
                left++;
            }

            while(arr[right]==1 && left < right){
                right--;
            }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void sort012(int *arr, int n)
{
    int lav  = n ;
    int left = 0  , right = n-1;
    while(left < right){
        while(arr[left] ==  0 || arr[left]== 1 && left<right){
            left ++ ;
//                         while(arr[left] == 0 && left < right )  {
//                         left++;
//                         }

//                         while(arr[right]==1 && left < right){
//                         right--;
//                            }    
            
        }
        while(arr[right] == 2 && left<right){
            right -- ;
        }
        if(left<right){
            swap(arr[left],arr[right]);
                left++;
            right -- ;
        }
        
    }
    int count = 0 ;
    for(int i = 0 ; i<n;i++){
        if (arr[i]==2){
            count ++ ;
        }
    }
    int k = count ;
    
    sort01(arr,lav, count );
   //   Write your code here
}

above one 2 pointer only creating another function to sort for 0 and 1 , 
First sort (0,1)   and 2  , 
then sort 0 , 1 
  
***********another approach *******8
  #include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int left = 0, right = n-1, mid = 0;
    //initialize pointers left should cover 0, right 2 and mid = 1 ideally speaking, now code it out
    while(mid<=right){
        //check for mid value, we are going to play on that, comparing mid with the target value
        if(arr[mid]==1){
            //ideal condition coz mid element needs to be 1, so move ptr
            mid++;
        }
        else if (arr[mid]<1){
            //means the value is 0
            swap(arr[mid], arr[left]);
            left++;
            mid++;
        }
        else{
            // if (a[mid]>1) that is the value equal to 2
            swap(arr[mid], arr[right]);
            right--;    //coz we need to bring right ptr closer and not change anything else
        }
    }
}

above using three point as refernce then sorted 
*******
