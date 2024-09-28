//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n) {
        int c = 0;
        int copy = n;
        
        while (copy != 0) {
            int d = copy % 10;
            
            // Check if the digit is not 0 and divides n evenly
            if (d != 0 && n % d == 0) {
                c++;
            }
            
            copy /= 10;
        }
        
        return c;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends