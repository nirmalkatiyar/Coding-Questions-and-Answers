#include <bits/stdc++.h>
using namespace std;
//calculating max power of from n 
int powerof2(int a)
{
    int pw = 0;
    while ((1 << pw) <= a)
    {
        pw++;
    }
    return pw - 1;
}

int countSetBits(int n)
{
    //base case 
    if (n == 0)
    {
        return 0;
    }

    int x = powerof2(n);
    //set bits upto 2**x 
    int setbitupto2x = x * (1 << (x - 1));
    //msb from remaing numbers.
    int msbupton = (n - (1 << x) + 1);
    //calcluating all the bits of n
    int ans = setbitupto2x + msbupton + countSetBits(n - (1 << x));
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n);
    return 0;
}