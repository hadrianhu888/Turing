/**
 * @file cpp_challenge.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

// Include Files

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>
#include <set> 
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iterator>
#include <functional>
#include <utility>
#include <limits>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <complex>
#include <valarray>
#include <bitset>
#include <array>
#include <tuple>
#include <initializer_list>
#include <memory>
#include <scoped_allocator>
#include <new>
#include <type_traits>
#include <cstdlib> 
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

// Function Prototypes
int max(int x[], int n);
int min(int x[], int n);
int sum(int x[], int n);
double mean(int x[], int n);
double median(int x[], int n);
int mode(int x[], int n);
int range(int x[], int n);
void print(int x[], int n);

// Main Function

int main()
{
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(x) / sizeof(x[0]);
    print(x, n);
    cout << "Max: " << max(x, n) << endl;
    cout << "Min: " << min(x, n) << endl;
    cout << "Sum: " << sum(x, n) << endl;
    cout << "Mean: " << mean(x, n) << endl;
    cout << "Median: " << median(x, n) << endl;
    cout << "Mode: " << mode(x, n) << endl;
    cout << "Range: " << range(x, n) << endl;
    return 0;
}

// Function Definitions

int max(int x[], int n)
{
    int mx = *max_element(x, x + n);
    return mx;
}

int min(int x[], int n)
{
    int mn = *min_element(x, x + n);
    return mn;
}

int sum(int x[], int n)
{
    int sm = accumulate(x, x + n, 0);
    return sm;
}

double mean(int x[], int n)
{
    double mn = accumulate(x, x + n, 0.0) / n;
    return mn;
}

double median(int x[], int n)
{
    sort(x, x + n);
    if (n % 2 != 0)
    {
        return (double)x[n / 2];
    }
    return (double)(x[(n - 1) / 2] + x[n / 2]) / 2.0;
}

int mode(int x[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[x[i]]++;
    }
    int mx = 0, res = -1;
    for (auto i : m)
    {
        if (mx < i.second)
        {
            res = i.first;
            mx = i.second;
        }
    }
    return res;
}

int range(int x[], int n)
{
    int mx = *max_element(x, x + n);
    int mn = *min_element(x, x + n);
    return mx - mn;
}

void print(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}



