#include <stdio.h>
#include <string.h>
typedef long long ll;
char s[5000];
int c;
const char base[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int Check(char s[], double *n){
	int before= 1, is = 0;
	double c  = 1;
	for(int i = 0 ; i < strlen(s) ; ++i)
		if (s[i] == '-') is = 1;
		else if (s[i] == '.') before = 0;
			else if (before)	*n = (*n) * 10 + s[i] - '0';
				else {	c /= 10;	*n += (s[i] - '0') * c;	}
	if (is) *n = -(*n);
	return !before;
}

void nguyen(double n, int c){
	int isNeg = 0;
	if (n < 0) isNeg = 1, n = -n;

	int x = (int) n;
	int cnt = 0;
	int a[200];

	memset(a, 0, sizeof(a));
	do{
		a[++cnt] = x % c;
		x /= c;
	} while(x);

	if (isNeg) {
		for(int i = 1 ; i <= cnt ; ++i) {
			a[i] = (c - a[i] - 1) % c;
		}

		for(int i = 1 ; i <= cnt ; ++i)
			if (a[i] == c - 1) a[i] = 0;
			else {
				++a[i];
				break;
			}

		++cnt;
		a[cnt] = c - 1;
	}

	for(int i = cnt ; i >= 1 ; --i) printf("%c", base[a[i]]);
}

void thapphan(double x, int c){
	printf(".");
	if (x < 0) x = -x;
	for(int i = 1 ; i <= 100 ; ++i) 
	{
		printf("%c", base[(int) (x * c)]);
		x *= c;
		x -= (int) x;
		if (x == 0) break;
	}
}
int main(){
	scanf("%s%d", s, &c);
	if (c < 2) 
		{
			printf("nhap lai ");
			return 0;
		}
	int is = 1;
	double n;
	if (Check(s, &n)) is = 0;

	nguyen(n, c);
	if (!is) thapphan(n - (ll)n, 2);
	return 0;
}
