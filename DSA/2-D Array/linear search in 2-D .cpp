#include<iostream>
using namespace std;

bool ispresent(int arr[][4], int target, int  row , int col){
    for (int i = 0; i < 3; i++)
    {
        for(int j=0 ; j< 4;j++){
            if ( arr[i][j] == target ){
                return 1;

            }
            
        }
 }
 return 0 ;
}
int main()
{
 
 // create 2-D array 
 int arr[3][4];

// taking input -> row wise 
 for (int i = 0; i < 3; i++)
 {
        for(int j=0 ; j< 4;j++){
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

 for (int i = 0; i < 3; i++)
 {
        for(int j=0 ; j< 4;j++){
            cout << arr[i][j] << " ";   
        }
        cout<< endl;
 }

 cout<< " Enter the element to search"<<endl;
 int target ;
 cin>>target;

 if(ispresent(arr,target,3,4)){
    cout<<" Element Found" <<endl;
    }
    else{
        cout<<" Not found"<<endl;

    }

 return 0;
}
