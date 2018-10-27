#include <iostream>
#include <vector>

using namespace std;
#define N (int)1e5
int arr[N][N];

//util.===================================================

void takeinput(int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
}


void display(int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j] << " ";
		}

		cout<<endl;
	}
}


//wave.=======================================================

void waveForwardBackward(int n,int m){
	for(int i=0;i<n;i++){
		if((i&1)==0){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
		}else{
			for(int j=m-1;j>=0;j--){
				cout<<arr[i][j]<<" ";
			}
		}

	}
}


void waveUpDown(int n,int m){
	for(int j=0;j<m;j++){
		if((j&1)==0){
			for(int i=0;i<m;i++){
				cout<<arr[i][j]<<" ";
			}
		}else{
			for(int i=m-1;i>=0;i--){
				cout<<arr[i][j]<<" ";
			}
		}
	}
}




void solve(){
	int n,m;
	cin>>n>>m;

	takeinput(n,m);
	display(n,m);
	waveUpDown(n,m);



}

int main(){
	solve();
	return 0;
}


