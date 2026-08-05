class Solution {
	public:
	int majorityElement(vector<int>& arr) {
		// Bruteforce TC:O(n^2) SC:O(1)
		int n = arr.size();
		// for(int i=0;i<n;i++)
		// {
		//     int freq=0;
		//     for(int j=0;j<n;j++)
		//     {
		//         if(arr[i]==arr[j])
		//             freq++;
		//     }
		//     if(freq>n/2)
		//     return arr[i];
		// }
		// return -1;
		
		// *****************Better*********TC:O(nlogn) SC:O(1)
		sort(arr.begin(), arr.end());
		int freq = 1, ans = arr[0];
		if (n == 1)
			{
			return arr[0];
			}
		for (int i = 1; i<n; i++)
			{
			if (arr[i] == arr[i - 1])
				{
				freq++;
			}
			else
				{
				freq = 1;
			}
			if (freq>n/2)
				return arr[i];
		}
		return - 1;
	}
};
