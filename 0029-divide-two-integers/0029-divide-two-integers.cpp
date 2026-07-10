class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = !((dividend < 0) ^ (divisor < 0));

        long long divi = llabs((long long)dividend);
        long long div = llabs((long long)divisor);

        long ans = 0;

        while (divi >= div) {
            int cnt = 0;

            while (divi >= (div << (cnt + 1)))
                cnt++;

            ans += (1 << cnt);
            divi -= (div << cnt);
        }

        return sign ? ans : -ans;
    }
};