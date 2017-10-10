#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

void solve1() {
	int n;
	while(scanf("%d", &n) == 1) {
		printf("\\begin{table}[!htp]\n");
		printf("\\centering\n");
		printf("\\caption{$Z_{%d}$}\n", n);
		printf("\\begin{tabular}{c|*{%d}{c}}\n", n);
		printf("\\toprule\n");
		printf("$n$ ");
		for(int i = 0; i < n; i++) {
			printf("& $%d$ ", i);
		}
		printf("\\\\ \\midrule\n");
		printf("$ord$ ");
		for(int i = 0; i < n; i++) {
			printf("& $%d$ ", n / gcd(i,n));
		}
		printf("\\\\ \\bottomrule\n");
		printf("\\end{tabular}\n");
		printf("\\end{table}\n");
	}
}

void solve2() {
	int n;
	while(scanf("%d", &n) == 1) {
		printf("\\item $%d$:", n);
		for(int i = 0; i < n; i++) {
			if(gcd(i,n) == 1) {
				printf("$e^{2\\pi i\\frac{%d}{%d}}$, ", i, n);
			}
		}
		printf("\n");
	}
}
int main() {
	solve2();
}
