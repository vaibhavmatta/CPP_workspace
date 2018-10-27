#include <iostream>
#include <vector>

using namespace std;

#define vi vector<int>
#define vii vector<vi>


//util.===================================================

void intialize1(vii &arr,int n,int m){
for(int i=0;i<n;i++){
   vi temp;
	for(int j=0;j<m;j++){
     temp.push_back(0);
	}
     arr.push_back(temp);
  }
}


void input(vii  &arr,int n,int m){
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>arr[i][j];
	}
  }
}

void display(vii &arr,int n,int m){
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cout<<arr[i][j] << " ";
	}

	cout<<endl;
  }
}

//wave.=======================================================

void waveForwardBackward(vii &arr,int n,int m){
	for(int i=0;i<n;i++){
		if((i&1)==0){
			for(int j=0;j<m;j++){
				cout<<arr[i][j];
			}
		}else{
			for(int j=0;j<m;j++){
				cout<<arr[i][j];
			}
		}
	}
}


void waveUpDown(vii &arr,int n,int m){
	for(int j=0;j<m;j++){
		if((j&1)==0){
			for(int i=0;i<m;i++){
				cout<<arr[i][j];
			}
		}else{
			for(int i=0;i<m;i++){
				cout<<arr[i][j];
			}
		}
	}
}

//MatrixOperations.=============================================

vii matrixMultiplications(vii &arr,vii &arr1,int n,int m,int p,int q){
	vii res;
	intialize1(res,n,q);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<p;k++){
				res[i][j]+=arr[i][k] * arr1[k][j];
			}
		}
	}

	return res;
}

void transpose(vii &arr,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=i;j<m;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	
}





void solve(){
	int n,m;
	cin>>n>>m;
	vii arr(n,vi(m,0));
	// intialize1(arr,n,m);
	
	input(arr,n,m);
	display(arr,n,m);
	
	// waveUpDown(arr,int n,int m);


    int p,q;
	cin>>p>>q;
	vii arr1(p,vi(q,0));
	input(arr1,p,q);
	display(arr1,p,q);

//2 3 1 2 3 4 5 6 3 2 1 2 3 4 5 6
	arr=matrixMultiplications(arr,arr1,n,m,p,q);
	display(arr,n,q);
}

int main(){
	solve();
	return 0;
}


