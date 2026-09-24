class Solution {
public:

void merge(vector<int>& arr, int start, int end, int mid)
{
    // formation of a temporary array
    vector<int> temp(end - start + 1);
    // left for array 1 and right for array 2
    int index = 0, left = start, right = mid + 1;
    // comaprison block
    while ((left <= mid) && (right <= end))
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            left++, index++;
        }
        else
        {
            temp[index] = arr[right];
            right++, index++;
        }
    }
    // done because arrays ka size different ho skta hai 
    // right wala pura print kara do
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }
    // left wala pura print kara do
    while (right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }
    // array copy karna original array mein
    index=0;// kyuki index toh already paar kar gaya hai iteration 
    while (start<=end)
    {
        arr[start]=temp[index];
        start++ , index ++ ;
    }
    
}
void mergesort(vector<int>& arr, int start, int end)
{
    int mid = start + (end-start) / 2;
    if (start == end)
    {
        return;
    }

    // left mein divide ho raha hai
    mergesort(arr, start, mid);

    // right mein divide ho raha hai
    mergesort(arr, mid + 1, end);

    // merge karna ka code after dividing the array
    merge ( arr, start, end, mid);
}
    vector<int> sortArray(vector<int>& arr) {
        mergesort(arr,0 ,arr.size()-1);
        return arr;
        
    }
};