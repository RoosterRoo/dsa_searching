#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int majorityElement(int a[], int size)
    {
        
        // your code here
        int majority = a[0];
        int count = 1;
        
        for(int i=0;i<size;i++) {
            if(a[i] == majority) {
                count++;
            }
            else count--;
            
            if(count == 0) {
                majority = a[i];
                count = 1;
            }
        }
        
        count = 0;
        
        for(int i=0;i<size;i++) {
            if(a[i] == majority) {
                count++;
            }
        }
        
        if(count > (size >> 1)) return majority;
        return -1;
        
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}