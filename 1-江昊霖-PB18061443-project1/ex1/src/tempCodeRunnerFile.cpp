        clock_t start, end;
        start = clock();
        countingSort(data);
        end = clock();
        cout << "times: " << (double)(end - start) / CLOCKS_PER_SEC << endl;