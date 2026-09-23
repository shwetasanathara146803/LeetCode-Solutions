class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long origional = x;
        long rev = 0;

        while (x != 0) {
            long d = x % 10;
            rev = rev * 10 + d;
            x = x / 10;
        }

        if (rev == origional) {
            return true;
        }
        return false;
    }
};