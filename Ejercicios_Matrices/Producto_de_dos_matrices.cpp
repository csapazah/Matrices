#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a,b,A[100][100],B[100][100],P[100][100];
    cout << "Dimensiones de la primera matriz" << endl;
    cin >> m >> n;
    cout << "Dimensiones de la segunda matriz" << endl;
    cin >> a >> b;
    
    if (n!=a){
    	cout << "Error";
    	return 1;
	}
    cout << "\n Primera matriz"<< endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	
	
	cout << "\n Segunda matriz" << endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >> B[i][j];
		}
	}
    for(int i=0;i<m;i++){
		for(int j=0;j<b;j++){
			P[i][j] = 0;
		}
	}
    for(int i=0;i<m;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<n;k++){
				P[i][j] += A[i][k] * B[k][j];
			}
		}
	}
    for(int i=0;i<m;i++){
		for(int j=0;j<b;j++){
			cout << P[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}