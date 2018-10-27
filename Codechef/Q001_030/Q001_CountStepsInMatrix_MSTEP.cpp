#include <bits/stdc++.h>
using namespace std;

const int N=1000000;

long contSteps(int arr[][N],int n){
        int store[n*n+1][2];
        for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int val = arr[i][j];
				store[val][0] = i;
				store[val][1] = j;
			}
		}

		long ans = 0;
		for (int i = 2; i < (n * n) +1; i++) {
			for (int j = 0; j < 2; j++) {
				ans += abs(store[i][j] - store[i - 1][j]);
			}
		}

		return ans;
}

int main(int argc, char const *argv[]){

    int t=0;
    cin>>t;
    
    while(t--> 0){
    	int n=0;
    cin>>n;
	int arr[N][N];
		for (int row = 0; row < n; row++) {
			for (int col = 0; col < n; col++) {
				cin>>arr[row][col];
			}
		}
	
	cout<< contSteps(arr,n)<<endl;
	}

	
	
}
