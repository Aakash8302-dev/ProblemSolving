#include <iostream>
using namespace std;

class Solution
{
public:
    int min, max, sum;

    int findSum(int A[], int n)
    {

        if (n == 1)
        {
            max = A[0];
            min = A[0];
        }

        if (A[0] > A[1])
        {
            max = A[0];
            min = A[1];
        }
        else if (A[0] < A[1])
        {
            min = A[0];
            max = A[1];
        }

        for (int i = 2; i < n; i++)
        {
            if (A[i] > max)
                max = A[i];
            else if (A[i] < min)
                min = A[i];
        }

        sum = min + max;

        return sum;
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution ob;
    int ans = ob.findSum(arr, n);
    cout << ans;

    return 0;
}