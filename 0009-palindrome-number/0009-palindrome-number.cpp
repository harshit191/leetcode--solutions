class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        long long num2 = 0;

        while (x > 0) {
            num2 = (num2 * 10) + (x % 10);
            x = x / 10;
        }

        return original == num2;
    }
};