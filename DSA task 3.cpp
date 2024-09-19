#include <iostream>
using namespace std;

int maxProduct(int nums[], int length) {
    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < length; i++) {
        if (nums[i] >= max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }

    return (max1 - 1) * (max2 - 1);
}

int main() {
    int nums[] = {4,7,8,3,2,5,9,1};
    int length = sizeof(nums) / sizeof(nums[0]);
    int result = maxProduct(nums, length);
    cout << result << endl;
    return 0;
}
