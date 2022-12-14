class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        if (num < 0) return "-" + convertToBase7(-num);
        return (num >= 7 ? convertToBase7(num / 7) : "") + (char)(48 + num % 7);
    }
};