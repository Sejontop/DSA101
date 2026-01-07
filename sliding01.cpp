#include<bits/stdc++.h>
using namespace std;
//find subarray of length 2 with the max sum from the array
int main(){
int arr[6]={34,2,85,23,29,38};
int low=0;
int high=1;
int sum=0;
int res=0;

    sum=arr[low]+arr[high];
    res= max(res,sum);

    
for(int i=2;i<6;i++){
    low++;
    high++;
    if(high==6) 
    break;
    sum=sum-arr[low-1]+arr[high];
    res=max(sum,res);  
}
cout<<res<<endl;
}
