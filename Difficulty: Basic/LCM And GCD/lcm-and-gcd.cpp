//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> result;
        long long gc = gcd(A, B);  // Compute GCD
        long long lc = (A / gc) * B;  // Compute LCM safely to avoid overflow
        result.push_back(lc);  // Store LCM
        result.push_back(gc);  // Store GCD
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends