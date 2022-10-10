#include <iostream>
#include <vector>
using namespace std;
#include "func.cpp"
#include "sort.cpp"

int main()
{
    vector<int> data;

    for (int n = 3; n <= 18; n += 3)
    {
        input(n, data);

        cout << data.size() << endl;

        clock_t start, end;
        start = clock();
        mergeSort(data, 0, data.size() - 1);
        end = clock();
        cout << "times: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

        output('q', n, data);
        data.clear();
    }
    return 0;
}