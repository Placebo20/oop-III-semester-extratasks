#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int y = 0;
        int N;
        while (x != 0) {
            N = x % 10;
            if (y > INT_MAX / 10 || y < INT_MIN / 10) {
                return 0;
            }
            y = y * 10 + N;
            x /= 10;
        }
        return y;
    }
};

int main() {
    int x = 123;
    Solution obj;
    obj.reverse(x);
    return 0;
}