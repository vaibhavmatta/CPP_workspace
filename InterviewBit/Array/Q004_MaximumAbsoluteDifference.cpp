#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define MAX INT_MAX
#define MIN INT_MIN 


int maxDiff(vi arr){

	int maxplus = MIN, maxminus = MIN, minplus = MAX, minminus = MAX;

	for (int i = 1; i <= arr.size(); i++) {
		int val = arr[i-1];
		maxplus = max(maxplus, val + i);
		maxminus =max(maxminus, val - i);
		minplus = min(minplus, val + i);
		minminus =min(minminus, val - i);
	}

	return max(maxplus - minplus, maxminus - minminus);
}

int main(){

	return 0;
}