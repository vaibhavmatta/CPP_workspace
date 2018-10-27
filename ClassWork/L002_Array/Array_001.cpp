#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//util.========================================================

void takeinput(int* arr,int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

void display(int* arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
	
	cout<<endl;
}

int Max(int* arr,int n){
	int Max=arr[0];
	for(int i=0;i<n;i++){
       Max=max(Max,arr[i]);
	}

	return Max;

}

//Searching.==================================================


bool find(int* arr,int n,int data){
	for(int i=0;i<n;i++){
		if(arr[i]==data){
			return true;
		}
	}
	return false;
}


bool BinarySearch(int* arr,int n,int data){
	int i=0;
	int j=n-1;

	while(i<j){
        int mid=(i+j)>>1;
		if(arr[mid]==data){
           return true;
		}else if(arr[mid]<data){
			i=mid+1;
		}else{
			j=mid;
		}
	}

	 return false;
}

// Reverse_Inverse_Rotate.================================================

void Reverse(int* arr,int n){

	int i=0;
	int j=n-1;
	while(i < j){
       swap(arr[i],arr[j]);
	   i++;
	   j--;
	}
}

void Reverse(int* arr,int n,int i,int j){
	while(i < j){
       swap(arr[i],arr[j]);
	   i++;
	   j--;
	}
}


void Inverse(int* arr,int n){
	int narr[n];
	for(int i=0;i<n;i++){
		narr[arr[i]]=i;
	}

	copy(narr,narr+n,arr);
}

bool IsMirrorInverse(int* arr,int n){
    for(int i=0;i<n;i++){
		if(arr[arr[i]]!=i){
           return false;
		}
	}

	return true;
}

void rotate(int* arr,int n,int r){
   r=r%n;
	if(r<0){
		r=r+n;
	}

	Reverse(arr,n,0,r-1);
	Reverse(arr,n,r,n-1);
	Reverse(arr,n,0,n-1);

}

void solve(){
	
	// 5 0 1 2 3 4
	
	int n=0;
	cin>>n;
	
	// int arr[n];
	int* arr=new int[n];

	takeinput(arr,n);
	display(arr,n);

//	swap(arr[2],arr[3]);
//    cout<<Max(arr,n)<<endl;
    
//	cout<<(find(arr,n,3)?"true":"false")<<endl;
//  cout<<(BinarySearch(arr,n,3)?"true":"false")<<endl;
    // cout<<(boolalpha)<<(BinarySearch(arr,n,3))<<endl;

//    Reverse(arr,n);
//    display(arr,n);

	// Inverse(arr,n);
 //    display(arr,n);
   
   // cout<<(IsMirrorInverse(arr,n)?"true":"false")<<endl;

   // rotate(arr,n,3);
   // display(arr,n);
	
}

int main(){

	freopen("C:/Users/Rijnesh/Cpp/input.txt","r",stdin);
	freopen("C:/Users/Rijnesh/Cpp/output.txt","w",stdout);
    solve();
	return 0;
}