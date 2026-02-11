long long fastPower(long long a, long long n)
{
    long long ans = 1;

    while (n > 0)
    {
        if (n & 1)
            ans = ans * a;

        a = a * a;
        n = n >> 1;
    }

    return ans;
}
