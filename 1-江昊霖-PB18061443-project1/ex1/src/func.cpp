#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

void input(int n, vector<int> &data)
{
    ifstream infile;
    string path = "../input/input.txt";
    infile.open(path, ios::in);
    if (!infile.is_open())
    {
        cout << "file input error" << endl;
        return;
    }
    string temp;
    int t;
    int counter = 0;
    while (getline(infile, temp))
    {
        counter++;

        t = stoi(temp);
        data.push_back(t);
        if (counter == pow(2, n))
            break;
    }
    infile.close();
    return;
}

void output(char c, int n, vector<int> &data)
{
    ofstream outfile;
    string sort;
    switch (c)
    {
    case 'c':
        sort = "counting_sort";
        break;
    case 'h':
        sort = "heap_sort";
        break;
    case 'm':
        sort = "merg_sort";
        break;
    case 'q':
        sort = "quick_sort";
        break;
    default:
        cout << "error" << endl;
        break;
    }
    string path = "../output/" + sort + "/" + to_string(n) + ".txt";
    outfile.open(path, ios::out);
    for (int i = 0; i < data.size(); i++)
    {
        outfile << data[i] << endl;
    }
    outfile.close();
    cout << "output successful" << endl;
}

void makeRandom()
{
    ofstream initRand;

    string path = "../input/input.txt";
    initRand.open(path, ios::out);
    for (int i = 0; i < pow(2, 18); i++)
        initRand << rand() << endl;

    initRand.close();
}
