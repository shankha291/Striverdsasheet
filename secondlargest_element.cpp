
#include <bits/stdc++.h>
class Solution {
	public:
	int getSecondLargest(vector <int> &arr) {
		// Bruteforce --> TC:O(nlogn),SC:O(1)
		int n = arr.size();
		// sort(arr.begin(), arr.end());
		// 		int largest=arr[n-1];
		// 		int slargest=-1;
		// 		for(int i=n-2;i>=0;i--)
		// 		{
		// 		    if(arr[i]!=largest)
		// 		    {
		// 		        slargest=arr[i];
		// 		        break;
		// 		    }
		// 		}
		
		// 		return slargest;
		
		// *****Better********* TC:O(2n),SC:O(1)
		
		
		// 		int slargest=-1;
		// 		int largest=INT_MIN;
		// 		for(int i=0;i<n;i++)
		// 		{
		// 		    if(arr[i]>largest)
		// 		        largest=arr[i];
		// 		}
		// 		for(int i=0;i<n;i++)
		// 		{
		// 		    if(arr[i]>slargest && arr[i]!=largest )
		// 		        slargest=arr[i];
		// 		}
		// 		return slargest;
		
		
		// ********Optimal******* TC:O(n), SC:O(1)
		int largest=INT_MIN,slargest=INT_MIN;
		for(int i=0;i<n;i++)
		{
		    if(arr[i]>largest)
		    {
		        slargest=largest;
		        largest=arr[i];
		    }
		    else if(arr[i]<largest && arr[i]>slargest)
		        slargest=arr[i];
		}
		if(slargest==INT_MIN)
		    return -1;
		return slargest;
		
		
		
		
	}
};
