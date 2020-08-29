#include<bits/stdc++.h>
using namespace std;

/* 
比较相邻的元素。如果第一个比第二个大，就交换他们两个；
对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数；
针对所有的元素重复以上的步骤，除了最后一个；
持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
 */
// 冒泡排序
void bubblesort(vector<int> &arr)
{
    int len  = arr.size();
    int temp;
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len - j; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    
}


/* 
在未排序序列中找到最小（大）元素，存放到排序序列的起始位置；
然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾；
以此类推，直到所有元素均排序完毕
 */
void selectsort(vector<int> &arr)
{

    int len = arr.size();
    int temp;
    for (int i = 0,minIndex; i < len-1; i++)
    {
        /* code */
        minIndex = i;
        for (int j = i+1; j < len; j++)
        {
            /* code */
            if (arr[j]<arr[minIndex])
            {
                /* code */
                minIndex = j;

            }
            
        }
        temp = arr[i];
        arr[i]= arr[minIndex];
        arr[minIndex] = temp;
        
    }
    

    

}

/* 
从第一个元素开始，该元素可以认为已经被排序；
取出下一个元素，在已经排序的元素序列中从后向前扫描；
如果该元素（已排序）大于新元素，将该元素移到下一位置；
重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
将新元素插入到该位置后；
重复步骤2~5。

 */
void insertsort(vector<int> &arr)
{
    int len = arr.size();
    if (len<=1)
    {
        /* code */
        return;
    }

    for (int i = 0,j,temp; i < len-1; i++)
    {
        /* code */
        j=i;
        temp = arr[i+1];
        while (j>=0&&arr[j]>temp)
        {
            /* code */
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp; 
    }

}



void shellsort(vector<int>&a)
{
    // 空和一个元素判断
    int len = a.size();
    for (int gap = len / 2; gap > 0; gap /= 2)
    {
        for (int i = 0; i < gap; i++)
        {
            for (int j = i + gap, temp, preIndex; j < len; j = j + gap) //依旧需要temp作为哨兵
            {
                temp = a[j];        //保存哨兵
                preIndex = j - gap; //将要对比的编号
                while (preIndex >= 0 && a[preIndex] > temp)
                {
                    a[preIndex + gap] = a[preIndex]; //被替换
                    preIndex -= gap;                 //向下走一步
                }
                a[preIndex + gap] = temp; //恢复被替换的值
            }
        }
    }
}

/*
快速排序 
挑选基准值：从数列中挑出一个元素，称为 “基准”（pivot） ；
分割：重新排序序列，所有比基准值小的元素摆放在基准前面，所有比基准值大的元素摆在基准后面
（与基准值相等的数可以到任何一边）。在这个分割结束之后，对基准值的排序就已经完成；
递归排序子序列：递归地将小于基准值元素的子序列和大于基准值元素的子序列排序。
 */
void quicksort(vector<int> &nums, int start, int end)
{
    if (start >= end)
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

// Function to Merge Arrays L and R into A.
// lefCount = number of elements in L
// rightCount = number of elements in R.
void Merge(int *A, int *L, int leftCount, int *R, int rightCount)
{
    int i, j, k;

    // i - to mark the index of left aubarray (L)
    // j - to mark the index of right sub-raay (R)
    // k - to mark the index of merged subarray (A)
    i = 0;
    j = 0;
    k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (L[i] < R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    while (i < leftCount)
        A[k++] = L[i++];
    while (j < rightCount)
        A[k++] = R[j++];
}

// Recursive function to sort an array of integers.
void MergeSort(int *A, int n)
{
    int mid, i, *L, *R;
    if (n < 2)
        return; // base condition. If the array has less than two element, do nothing.

    mid = n / 2; // find the mid index.

    // create left and right subarrays
    // mid elements (from index 0 till mid-1) should be part of left sub-array
    // and (n-mid) elements (from mid to n-1) will be part of right sub-array
    L = new int[mid];
    R = new int[n - mid];

    for (i = 0; i < mid; i++)
        L[i] = A[i]; // creating left subarray
    for (i = mid; i < n; i++)
        R[i - mid] = A[i]; // creating right subarray

    MergeSort(L, mid);            // sorting the left subarray
    MergeSort(R, n - mid);        // sorting the right subarray
    Merge(A, L, mid, R, n - mid); // Merging L and R into A as sorted list.
    // the delete operations is very important
    delete[] R;
    delete[] L;
}

/* 
堆排序
把无序数列构建成二叉堆；
循环删除堆顶元素，替换到二叉堆的末尾，调整堆产生新的堆顶。
 */
void adjustHeap(vector<int> &a, int i, int len)
{
    int maxIndex = i;
    //如果有左子树，且左子树大于父节点，则将最大指针指向左子树
    if (i * 2 + 1 < len && a[i * 2 + 1] > a[maxIndex])
        maxIndex = i * 2 + 1;
    //如果有右子树，且右子树大于父节点和左节点，则将最大指针指向右子树
    if (i * 2 + 2 < len && a[i * 2 + 2] > a[maxIndex])
        maxIndex = i * 2 + 2;
    //如果父节点不是最大值，则将父节点与最大值交换，并且递归调整与父节点交换的位置。
    if (maxIndex != i)
    {
        swap(a[maxIndex], a[i]);
        adjustHeap(a, maxIndex, len);
    }
}

void Sort(vector<int> &a)
{
    int len = a.size();
    //1.构建一个最大堆
    for (int i = len / 2 - 1; i >= 0; i--) //从最后一个非叶子节点开始
    {
        adjustHeap(a, i, len);
    }
    //2.循环将堆首位（最大值）与末位交换，然后在重新调整最大堆

    for (int i = len - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        adjustHeap(a, 0, i);
    }
}

/* 计数排序
找出待排序的数组中最大和最小的元素；
统计数组中每个值为 i 的元素出现的次数，存入数组 C 的第 i 项；
对所有的计数累加（从数组 C 中的第一个元素开始，每一项和前一项相加）；
反向填充目标数组：将每个元素 i 放在新数组的第 C[i] 项，每放一个元素就将 C[i] 减去1。

 */
void CountingSort(vector<int> &a)
{
    int len = a.size();
    if (len == 0)
        return;
    int Min = a[0], Max = a[0];
    for (int i = 1; i < len; i++)
    {
        Max = max(Max, a[i]);
        Min = min(Min, a[i]);
    }
    int bias = 0 - Min;
    vector<int> bucket(Max - Min + 1, 0);
    for (int i = 0; i < len; i++)
    {
        bucket[a[i] + bias]++;
    }
    int index = 0, i = 0;
    while (index < len)
    {
        if (bucket[i])
        {
            a[index] = i - bias;
            bucket[i]--;
            index++;
        }
        else
            i++;
    }
}


/* 
桶排序 */
void bucketSort(vector<int> &a, int bucketSize)
{
    int len = a.size();
    if (len < 2)
        return;
    int Min = a[0], Max = a[0];
    for (int i = 1; i < len; i++)
    {
        Max = max(Max, a[i]);
        Min = min(Min, a[i]);
    }
    int bucketCount = (Max - Min) / bucketSize + 1;
    //这个区间是max-min+1，但是我们要向上取整，就是+bucketSize-1，和上面的形式是一样的
    vector<int> bucketArr[bucketCount];
    for (int i = 0; i < len; i++)
    {
        bucketArr[(a[i] - Min) / bucketSize].push_back(a[i]);
    }
    a.clear();
    for (int i = 0; i < bucketCount; i++)
    {
        int tlen = bucketArr[i].size();
        sort(bucketArr[i].begin(), bucketArr[i].end());
        for (int j = 0; j < tlen; j++)
            a.push_back(bucketArr[i][j]);
    }
}

/* 
基数排序
 */
void RadixSortSort(vector<int> &a)
{
    int len = a.size();
    if (len < 2)
        return;
    int Max = a[0];
    for (int i = 1; i < len; i++)
    {
        Max = max(Max, a[i]);
    }
    int maxDigit = log10(Max) + 1;
    //直接使用log10函数获取位数，这样的话就不用循环了，这里被强制转换是向下取整
    int mod = 10, div = 1;
    vector<int> bucketList[10];
    for (int i = 0; i < maxDigit; i++, mod *= 10, div *= 10)
    {
        for (int j = 0; j < len; j++)
        {
            int num = (a[j] % mod) / div;
            bucketList[num].push_back(a[j]);
        }
        int index = 0;
        for (int j = 0; j < 10; j++)
        {
            int tlen = bucketList[j].size();
            for (int k = 0; k < tlen; k++)
                a[index++] = bucketList[j][k];
            bucketList[j].clear();
        }
    }
}
/* 
十大排序算法
冒泡排序
选择排序
插入排序
希尔排序
快速排序
归并排序
堆排序
计数排序
桶排序
基数排序
 */
int main(){

    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(9);
    nums.push_back(7);
    nums.push_back(1);

    // sort(nums.begin(), nums.end());
    // bubblesort(nums);
    
    // selectsort(nums);
    // insertsort(nums);
    shellsort(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        cout << nums[i] << endl;
    }

    return 0;
}
