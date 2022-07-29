// I used binary search algorithm to solve the problem
// The complexity will be O(t*nlogn)

#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    int n, x;
    long long ans=0;
    cin>>n>>x;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    long long sum[n+1];
    sum[0] = 0;
    for(int i=1; i<=n; i++){

        sum[i] = sum[i - 1]+ arr[i];
    }

    for (int i = 1; i <= n; ++i){
            int start = i, end = n;
            int k = i - 1;
            while (start <= end)
                {
                    int mid = (start + end) / 2;
                    if (sum[mid] - sum[i - 1] < x)
                        {
                            k = mid;
                            start = mid + 1;
                        }
                    else
                        end = mid - 1;
                }
            ans += k - i + 1;
        }
    cout << ans << endl;

}
return 0;
}


