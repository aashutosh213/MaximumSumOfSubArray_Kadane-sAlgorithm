#include <iostream>
#include <climits>

using namespace std;
int maxSum(const int* const a,int n){
    int ans = INT_MIN;
    for(int sss = 1; sss <= n; sss++){ //sss = sub array size
        for (int arrayIndex = 0; arrayIndex < n ; arrayIndex++)
        {
            if(arrayIndex + sss > n) break;

            int sum = 0;
            for(int i = arrayIndex; i < (arrayIndex+sss);i++){
                    sum+=a[i];
            }
            ans = max(sum , ans);
        }
        
    }
    return ans;
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