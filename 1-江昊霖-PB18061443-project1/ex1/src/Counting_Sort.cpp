#include <iostream>
#include <vector>
using namespace std;
#include "func.cpp"
#include "sort.cpp"
#include <time.h>

int main()
{
    vector<int> data;
    for (int n = 3; n <= 18; n += 3)
    {
        input(n, data);

        clock_t start, end;
        start = clock();
        countingSort(data);
        end = clock();
        cout << "n = 2^" << n << endl;
        cout << "times: " << (double)(end - start) / CLOCKS_PER_SEC << "s" << endl;

        output('c', n, data);
        // for (int i = 0; i < data.size(); i++)
        // {
        //     cout << data[i] << endl;
        // }

        data.clear();
    }
    return 0;
}