//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to find the leaders in the array.
    vector<int> leaders(int n, int arr[]) {
        vector<int> ar;
        int max_from_right = arr[n-1];
        
        // The rightmost element is always a leader
        ar.push_back(max_from_right);
        
        // Traverse the array from right to left
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                max_from_right = arr[i];
                ar.push_back(max_from_right);
            }
        }
        
        // The leaders are collected in reverse order, so we need to reverse the result
        reverse(ar.begin(), ar.end());
        return ar;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends