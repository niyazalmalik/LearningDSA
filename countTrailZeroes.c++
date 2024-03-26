#include <iostream>

using namespace std;

int trailZeroes(int n)
{

    // Number of trailing zeroes is equal to number of 5's appearing in the factorial.
    // 1. calculate number of 5's
    // 2. That will be n/5 + n/5*5 + n/5*5*5 + .....
    // 3. add all of them to get number of trailing zeroes.

    int ans = 0;
    int powOf5 = 5;

    while (n >= powOf5)
    {
        ans += n / powOf5;
        powOf5 *= 5;
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;
    cout << trailZeroes(n) << endl;
    return 0;
}