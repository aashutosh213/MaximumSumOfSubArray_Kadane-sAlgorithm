#include <iostream>
#include <climits>

using namespace std;
int maxSum(const int* const a,int n){
    int ans {0}, sum{0};
    for(int i{0}; i<n; i++)
    {

        if(sum + a[i] >= a[i])
            sum+=a[i];
        else
            sum = a[i];
        
        ans = max(ans, sum);
        cout<< ans << "   ,sum:" <<sum<< endl;
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
