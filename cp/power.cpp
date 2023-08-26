#include <bits/stdc++.h>
using namespace std;

long long int power(long long int x, long long int y, long long int p)
{
    long long int res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x % p;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
int main() {
    int x = 71045970, n = 41535484, d = 64735492;
    long long int k = power(x, n, d);
    if (k < 0) {
        cout << (k % d + d) % d;
    } else {
        cout << k % d;
    }
}