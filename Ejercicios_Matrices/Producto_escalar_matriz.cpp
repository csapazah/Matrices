#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,A[100][100];
	float K;
    cin >> m >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
    cout << endl;
	cin >> K;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << A[i][j]*K << " ";
		}
		cout << endl;
	}
    return 0;
}