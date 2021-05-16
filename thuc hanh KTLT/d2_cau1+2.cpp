#include <iostream>
using namespace std;

void nhapmang(float a[], int n) {
	for (int i=0; i<n; i++) {
		cout << "nhap a[" << i << "]= ";
		cin >> a[i];}}

void xuatmang(float a[], int n) {
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
		}}
		
int sohoanhao(float n) {
	int s=0;
	if (n== (int) n) {
	for (int i=1; i< (int) n; i++) {
		
		if ((int)n%i==0) s+=i; }
	//	printf("%d\t",s);
	if (s==(int)n) return 1; }  
	return 0;
	}
	
void Sohoanhao (float a[], int n) {
	cout << "\n";
	for (int i=0; i < n; i++) {
		if ( !sohoanhao(a[i]) ) cout << a[i] << " "; }}
		
int main() {
	float a[50]; float n;
	cout << "nhap so phan tu n: ";
	cin >> n;
	if ( n != (int) n) 
		{
			printf("Nhap lai ");
			return 0;
		}
	nhapmang(a,n);
	xuatmang(a,n);
	cout << "sau khi xoa so hoan hao";
	Sohoanhao(a,n);
	}
