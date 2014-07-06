// C/C++ File
// AUTHOR:   cxd
// FILE:     genW.cpp
// ROLE:     TODO (some explanation)
// CREATED:  2014-06-30 14:05:48
// MODIFIED: 2014-07-06 14:24:39

#include <iostream>
#include <random>

using namespace std;

int main()
{
    const int MAX = 50;

    for (int i = 0; i < MAX; ++i)
    {
	cout << 25.0 << endl;
    }

    for (int i = 0; i < MAX; ++i)
    {
	cout << double(i+1) << endl;
    }

    for (int i = MAX; i > 0; --i)
    {
	cout << double(i) << endl;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(1, MAX);
    for (int i = 0; i < MAX; ++i)
    {
        std::cout << dis(gen) << endl;
    }

    return 0;
}

