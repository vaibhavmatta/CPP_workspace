#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int maxsum(vi arr){
	int omax=0,cmax=0;
	for(int i=0;i<arr.size();i++){
		cmax=max(arr[i],cmax+arr[i]);
		omax=max(omax,cmax);
	}
	return omax;
}



int main(){
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vi vect(arr,arr+n);

    int ans=maxsum(vect);
	cout<<ans<<endl;
	return 0;
}