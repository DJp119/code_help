#include<iostream>
#include <limits.h>
using namespace std;


// void printsum(int arr[][3],  int  row , int col){
//     cout<< " Printing sum ->"<<endl;

//     for (int i = 0; i < 3; i++)
//         {
//             int sum = 0 ;
//             for(int j=0 ; j< 3;j++){
            
//                 sum += arr[row][col];
            
//             }
//             cout<<"sum is"<<sum<<endl;

//             }

//         cout<<endl;
//         }   

int largestrowsum(int arr[][3], int row , int col){
    int maxi  = INT_MIN;
    int rowindex = -1;
            int sum = 0 ;
    for (int i = 0; i < 3; i++)
        {
            for(int j=0 ; j< 3;j++){
            
                sum += arr[row][col];
            }
            if(sum>maxi){
                maxi = sum;
                rowindex = row; 
            }

            }
            cout<<"THe maximum sum is "<<maxi<<endl;
            return rowindex;
}



int main()
{
 
 // create 2-D array 
 int arr[3][3];
cout<<" Enter the elements"<<endl;

// taking input -> row wise 
 for (int i = 0; i < 3; i++)
 {
        for(int j=0 ; j< 3;j++){
            cin >> arr[i][j];
        }
}
 // taking input -> col wise 
//  for (int i = 0; i < 4; i++)
//  {
//         for(int j=0 ; j< 3;j++){
//             cin >> arr[j][i];

//         }
 
//  }
 

 // print output 

// cout<< " Printing the Array"<<endl;

//  for (int i = 0; i < 3; i++)
//  {
//         for(int j=0 ; j< 3;j++){
//             cout << arr[i][j] << " ";   
//         }
//         cout<< endl;
//  }

// printsum(arr,3,3);
 
 cout<<"Max row is at index  "<<largestrowsum(arr,3,3)<<endl;


 return 0;
}
