#include <iostream>
using namespace std;
void add(int arr[], int &size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i]++;
            return;
        }
        // cuurent agr 9 usko zero kar daga then loop phrsa
        arr[i] = 0;
        // agar sbb 999 ha
    }
    for (int i = size; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = 1;
    size++;
}
int main()
{
    int arr[] = {9, 9, 9, 9, 9};
    int size = 5;
    add(arr, size);
    for (int j = 0; j < size; j++)
    {

        cout << arr[j] << " ";
    }
}