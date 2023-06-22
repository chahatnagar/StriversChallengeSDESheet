#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int> count(n+1);

	for(int i = 0; i < n; i++) count[arr[i]]++;

	int rep = -1, miss = -1;

	for(int i = 0; i < n+1; i++)
	{
		if(count[i]==2) rep = i;
		else if(count[i]==0) miss = i;
	}

	pair<int, int> ans = {miss, rep};

	return ans;
	
}
