// class Solution {
// public:
//     int fib(int n) {
//         if(n==0   || n==1){
//             return n;
//         }
//         int k[n+1];
//         k[0]=0;
//         k[1]=1;
//         for(int i = 2  ; i <= n;i++){
//             k[i]=k[i-1]+k[i-2];
//         }
//         return k[n];
//         // return fib(n-1)+fib(n-2);
//     }
// };
class Solution{
    public:
      int fib(int N) {
        if(N < 2) 
            return N;
    	int a = 0, b = 1, c = 0;
        for(int i = 1; i < N; i++)
        {   c = a + b;
            a = b;
            b = c;
            
        }
        return c;
    }
};
