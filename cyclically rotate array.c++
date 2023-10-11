#include <bits/stdc++.h>
using namespace std;
 
/* Driver program to test above functions */
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    
    int temp_arr[k];
    for(int i=0; i<k; i++)
      temp_arr[i] = arr[i];
    
    int x = k;
    for(int i=0; x < n; i++){
        arr[i] = arr[x++];
    }
    x = 0;
    
    for(int i=n-k; i<n; i++)
       arr[i] = temp_arr[x++];
    for (int i = 0; i < n; i++)
        cout<< arr[i]<<" ";

    return 0;
