#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int Arr[], int N)
{
    for(int i=1; i<N; i++)
    {
        int Value = Arr[i];
        int Hole = i;

        while(Hole > 0 && Arr[Hole-1] > Value)
        {
            Arr[Hole] = Arr[Hole-1];
            Hole--;
        }

        Arr[Hole] = Value;
    }
}

int main()
{
    int Arr[] = {10,1,8,7,2,3,9,5,4,6};
    InsertionSort(Arr, 10);

    for(int i=0; i<10; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
