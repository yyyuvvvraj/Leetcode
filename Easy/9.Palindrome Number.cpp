class Solution {
public:
    bool isPalindrome(int x) {
        int lastDigit = 0;
        int revNum = 0;
        int temp = x;
        if (x < 0) {
            return false;
        }
        while (temp != 0) {
            lastDigit = temp % 10;
            temp = temp / 10;
            if (revNum > INT_MAX / 10 ||
                (revNum == INT_MAX / 10 && lastDigit > 7))
                return false;

            if (revNum < INT_MIN / 10 ||
                (revNum == INT_MIN / 10 && lastDigit < -8))
                return false;
            revNum = revNum * 10 + lastDigit;
        }
        if (revNum == x) {
            return true;
        } else {
            return false;
        }
    }
};