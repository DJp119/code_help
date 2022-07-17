bool possible(vector<int> &boards, int k,int e,int mid){
    int painter = 1 ;
    int count = 0 ;
    for(int i=0;i<boards.size();i++){
        
//         count += boards[i];
        if(count + boards[i] <= mid){
            count += boards[i];
//             return true;
        }
        else{
            painter++;
            if(painter>k  || boards[i]>mid){
                return false;
            }
        count = boards[i];
        }
//         count = boards[i];
//         i++;
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0 ;
    int sum = 0 ;
    int n = boards.size();
    for(int i=0;i<boards.size();i++){
        sum += boards[i];
    }
    int  e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(possible(boards,k,e,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
       mid = s + (e-s)/2; 
    }
    return ans;
    //    Write your code here.
}
