// C/C++ File
// AUTHOR:   cxd
// FILE:     movingAve.cpp
// ROLE:     TODO (some explanation)
// CREATED:  2014-06-27 10:50:15
// MODIFIED: 2014-10-09 17:49:38

#include <iostream>

#include "movingAve.h"

using namespace std;

int main()
{
    try
    {
        MovingAve ma;

        while( cin >> ma )
        {
            cout << ma;
        }
    }
    catch (...)
    {
        cerr << "unknown movingAve exception" << endl;
    }

    return 0;
}
