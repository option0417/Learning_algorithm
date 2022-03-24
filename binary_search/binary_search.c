/*
 * =====================================================================================
 *       Filename:  binary_search.c
 *    Description:  C Sample recursive
 *        Created:  03/24/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

int search(int* nums, int numsSize, int target) {
    if (numsSize == 1) {
        return nums[0] == target ? 0 : -1;
    } else {
        if (target < nums[numsSize/2]) {
            return search(nums, numsSize/2, target);
        } else if (target > nums[numsSize/2]) {
            int shift = numsSize/2;
            int idx = search(nums += shift, numsSize - shift, target);
            return idx != -1 ? numsSize/2 + idx : idx;
        } else {
            return target == nums[numsSize/2] ? numsSize/2 : -1;
        }
    }
}
