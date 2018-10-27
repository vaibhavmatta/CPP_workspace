#include<bits/stdc++.h>
using namespace std;


typedef vector<int> vi;

vi repeateAndMissing(vi arr){
		int x=0;
		int n = arr.size();
		for (int i = 0; i < arr.size(); i++) {
			int val = arr[i];
			x ^= val;
		}

		for (int i = 1; i <= arr.size(); i++) {
			x ^= i;
		}

		int setbit = x & -x;
		int dupli = 0;
		int miss = 0;

		for (int i = 0; i < n; i++) {
			int val = arr[i];
			if ((val & setbit) != 0) {
				dupli ^= val;
			} else {
				miss ^= val;
			}
		}

		for (int i = 1; i <= n; i++) {
			if ((i & setbit) != 0) {
				dupli ^= i;
			} else {
				miss ^= i;
			}
		}

		vi ans;

		for (int i = 0; i < n; i++) {
			if (dupli == arr[i]) {
				ans.push_back(dupli);
				ans.push_back(miss);
				break;
			} else if (miss == arr[i]) {
				ans.push_back(miss);
				ans.push_back(dupli);
				break;

			}
		}

		return ans;
}

	vi repeatedNumber1(vi arr) {
		int dupli = 0;
		int miss = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[abs(arr[i]) - 1] > 0) {
				arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
			} else {
				dupli = abs(arr[i]);
			}
		}

		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] > 0) {
				miss = i + 1;
			}
		}

		vi ans;
		ans.push_back(dupli);
		ans.push_back(miss);
		return ans;

	}



int main(int argc, char const *argv[])
{
	vi arr;
	
	repeateAndMissing(arr);
	return 0;
}