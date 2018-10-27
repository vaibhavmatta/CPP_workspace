#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;



//util.===================================================

int** Intialize2D(int n,int m){
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[m];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arr[i][j]=0;
		}
	}
	
	return arr;
	
}


void takeinput(int** arr,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
}


void display(int** arr,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j] << " ";
		}

		cout<<endl;
	}
}

//wave.=======================================================

void waveForwardBackward(int** arr,int n,int m){
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


void waveUpDown(int** arr,int n,int m){
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

//MatrixOperations.=============================================

int** matrixMultiplications(int** arr,int** arr1,int n,int m,int p,int q){
	int** res=Intialize2D(n,q);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<p;k++){
				res[i][j]+=arr[i][k] * arr1[k][j];
			}
		}
	}

	return res;
}

void transpose(int** arr,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=i;j<m;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	
}

//spiralDisplay.===============================================

void spiralDisplay(int** arr,int n,int m){

	int rmin=0;
	int cmin=0;
    int rmax=n-1;
    int cmax=m-1;
    int tel=n*m;

    while(tel>0){

    	for(int r=rmin;r<=rmax && tel>0;r++){
    		cout<<arr[r][cmin]<<" ";
    	    tel--;
		}
    	cmin++;

    	for(int c=cmin;c<=cmax && tel>0;c++){
    		cout<<arr[rmax][c]<<" ";
    	tel--;
		}
    	rmax--;

    	for(int r=rmax;r>=rmin && tel>0;r--){
    		cout<<arr[r][cmax]<<" ";
    	tel--;
		}
    	cmax--;

    	for(int c=cmax;c>=cmin && tel>0;c--){
    		cout<<arr[rmin][c]<<" ";
    	tel--;
		}
    	rmin++;

    }



}


//ExitPoint.======================================================

void exitPoint(int** arr,int n,int m){

	int dir=0;
	int row=0;
	int col=0;
	while(true){
		dir=(dir+arr[row][col])%4;
		if(dir==0){
			col++;
			if(col==m){
				cout<<"("<<row<<","<<col-1<<")"<<endl;
				break;
			}
		}else if(dir==1){
			row++;
			if(row==n){
				cout<<"("<<row-1<<","<<col<<")"<<endl;
				break;
			}
		}else if(dir==2){
			col--;
			if(col==-1){
				cout<<"("<<row<<","<<col+1<<")"<<endl;
				break;
			}
		}else{ 
			row--;
			if(row==-1){
				cout<<"("<<row+1<<","<<col<<")"<<endl;
				break;
			}
		}
		
	}
}

//rotate By 90degree.=============================================

void rotate90(int** arr,int n,int m){
	transpose(arr,n,m);

	for(int le=0,ri=n-1;le<ri;le++,ri--){
		for(int i=0;i<m;i++){
			swap(arr[le][i],arr[ri][i]);
		}
	}

}








void solve(){
	int n,m;
	cin>>n>>m;
	int** arr=Intialize2D(n,m);
	takeinput(arr,n,m);
	// display(arr,n,m);
	
	// int p,q;
	// cin>>p>>q;
	// int** arr1=Intialize2D(p,q);
	// takeinput(arr1,p,q);
	// display(arr1,p,q);

	// waveUpDown(arr,n,m);
	// waveForwardBackward(arr,n,m);
	
	// 2 3 1 2 3 4 5 6 3 2 1 2 3 4 5 6
    // arr=matrixMultiplications(arr,arr1,n,m,p,q);
    // display(arr,n,q);

    // 3 3 1 2 3 4 5 6 7 8 9
    // 3 5 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    spiralDisplay(arr,n,m);

    // 5 4 0 0 0 1 1 0 1 0 0 0 0 0 0 0 1 0 1 0 0 0 1
	// exitPoint(arr,n,m);

	// 3 3 1 2 3 4 5 6 7 8 9
    // transpose(arr,n,m);
	// rotate90(arr,n,m);
	// display(arr,n,m);



}


int main(int argc, char const *argv[])
{

		// 1. Lecture 5
		// 1.1 2D Arrays demo and memory
		// 1.2 2D Arrays questions
		// 1.2.1 takeinput
		// 1.2.2 display
		// 1.2.3 matrixMultiplication
		// 1.2.4 waveDisplay
		// 1.2.5 spiralDisplay
		// 1.2.6 exitPoint
		// 1.2.7 90 rotate



	freopen("C:/Users/Rijnesh/Cpp/input.txt","r",stdin);
	// freopen("C:/Users/Rijnesh/Cpp/output.txt","w",stdout);

	solve();
	return 0;
}
