#include <bits/stdc++.h> 

int uniquePaths(int m, int n) {
	int N = n + m - 2;
            int r = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - i +1) / i;
            return (int)res;
}
