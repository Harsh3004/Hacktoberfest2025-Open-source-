// Array is in the form of (2M+1) and in the array M-number are present twice in the array.find the unique number present in the array.
// Note: There exist various more approach also explore them by your own such as using fast and slow pointer on array, etc..

#include <iostream>
using namespace std;
void getArray(int arr[], int n)
{
    for (int a = 0; a < n; a++)
    {
        cin >> arr[a];
    }
}

// Better approach to solve --> 
// Xor has a property : 
// a ^ a = 0;
// 0 ^ a = a;
// By using this properties we can do that take all the elements from the array and use Xor for all of them

int uniqueNumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int arr[100];
        getArray(arr, n);
        cout << uniqueNumber(arr, n);
    }
    return 0;
}

// My approach --> Do linear search for the elements if they are in the array move to next one if the number is not present in the array then return that number.

// void uniqueNumber(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j = 0;
//         int count = 0;
//         while (j < n)
//         {
//             if (j == i)
//             {
//                 j++;
//                 continue;
//             }

//             if (arr[j] == arr[i])
//                 break;
//             else
//                 count += 1;

//             j++;
//         }
//         if (count == n - 1)
//         {
//             cout << endl << arr[i];
//             break;
//         }
//     }
// }
// ------------------------------------------------------------------------------------------------------
