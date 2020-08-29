#include <bits/stdc++.h>

using namespace std;



void quicksort(vector<int>& nums,int start,int end)
{
    if (start>=end)
    {
        /* code */
        return;
    }
    int temp;
    int i = start;
    int j = end;
    int key = nums[i];
    while (i < j)
    {
        while (i < j && nums[j] >= key)
        {
            j--;
        }
        nums[i] = nums[j];
        while (i < j && nums[i] <= key)
        {
            i++;
        }
        nums[j] = nums[i];
    }
    nums[i] = key;
    quicksort(nums, start, i - 1);
    quicksort(nums, i + 1, end);
}


/*
快速排序 

 */
int main(){


    vector<int> nums;
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(0);

    // quicksort(nums,0,nums.size()-1);
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        cout<<nums[i]<<endl;
    }
    

    return 0;
}
