#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100][100], b[100][100], c[100][100];
	int i,j,k;
	freopen("TICHMATRAN.inp","r",stdin);
	freopen("TICHMATRAN.out","w",stdout );
	int m,n,p;
	cin>>m>>n>>p;
		for (i=0 ; i<m ; i++)
			for ( j=0 ; j < n ; j++)
				cin>>a[i][j];
		for (i=0; i< n ; i++)
			for ( j=0 ; j < p ; j++)
				cin >> b[i][j];
		for (i=0; i < m ; i++)
			for ( j =0 ; j < p ; j++)
				for ( k =0 ; k < n ; k++)
					c[i][j]+=a[i][k]*b[k][j];
		for (i=0; i < m ; i++){
			for (j=0; j< p; j++)
					cout<<c[i][j]<<" ";
			cout<<endl;}
					
	return 0; 				
}
