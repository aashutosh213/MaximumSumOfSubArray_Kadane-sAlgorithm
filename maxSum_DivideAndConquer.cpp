//time complexity is n*logn
#include <iostream>
#include <climits>

using namespace std;
int maxSum(const int* const a,int n){
    if(n == 1) return a[0];

    int m = n/2;
    int leftMSS = maxSum(a, m);
    int rightMSS = maxSum(a+m, n-m);
    int leftSum{INT_MIN}, rightSum{INT_MIN}, sum{0};
    
    for(int i = m; i < n; i++){
        sum+=a[i];
        rightSum = max(sum, rightSum);
    }
    sum =0;

    for(int i = m-1; i >= 0; i--){
        sum+= a[i];
        leftSum = max(sum, leftSum);
    }

    int ans = max(leftMSS, rightMSS);
    return max(ans, rightSum+leftSum);
     
}

int main(){
    int arr[]{2,-3,5,-9,7,4,1,-4};
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< ",";
    }
    cout <<endl;

    cout << maxSum(arr,n) << endl;
    
    return 0;
}