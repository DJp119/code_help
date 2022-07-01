#include<iostream>
using namespace std ;
int main(){
    int n = 5;

    int row = 1;
    while (row<=n)
    {
        //  printing 1 st triangle 
        int col = 1 ;
        while (col <= n - row +1 )
        {
            // int k = row + col - 1;
            // cout<< k  ;
            // k   = k   + 1;
            cout<<col ;
            col = col+ 1;
            /* code */
        }

        // printing 2 nd traingle 
        while (col <= row+4)
        {
            cout<<"*";
            col = col + 1;
            /* code */
        }
        
        // printing 3 rd traingle 
        int k = n-row+1;
        while(k){
            cout<<k;
            k  = k - 1 ;
        }
        /* code */
        cout<<endl;
        row = row +1 ;
    }
    
    return 0 ;
}
