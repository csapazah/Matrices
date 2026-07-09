#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,A[100][100],B[100][100];
    cin >> m >> n;
	cout << "\n Primera matriz"<< endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	cout << "\n Segunda matriz" << endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> B[i][j];
		}
	}
    int suma[100][100],resta[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			suma[i][j] = A[i][j] + B[i][j]; 
			resta[i][j] = A[i][j] - B[i][j];
		}
	}
    return 0;
}