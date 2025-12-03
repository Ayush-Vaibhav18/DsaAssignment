#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        int minIndex = left;
        int maxIndex = left;

        // Find minimum and maximum in the unsorted part
        for(int i = left; i <= right; i++)
        {
            if(a[i] < a[minIndex])
                minIndex = i;

            if(a[i] > a[maxIndex])
                maxIndex = i;
        }

        // Swap minimum with left position
        int temp = a[left];
        a[left] = a[minIndex];
        a[minIndex] = temp;

        // If max was at the left position, update its index
        if(maxIndex == left)
            maxIndex = minIndex;

        // Swap maximum with right position
        temp = a[right];
        a[right] = a[maxIndex];
        a[maxIndex] = temp;

        left++;
        right--;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
