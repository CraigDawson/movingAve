// C/C++ File
// AUTHOR:   cxd
// FILE:     movingAve.h
// ROLE:     TODO (some explanation)
// CREATED:  2014-06-27 10:46:12
// MODIFIED: 2014-10-09 17:51:14

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class MovingAve
{
    public:
        MovingAve() {}
        ~MovingAve() {}

        double out() const 
        {
            double ave { 0.0 };

            if (sample_.size() == SAMPLE_SZ)
            {
                ave = accumulate(begin(sample_), end(sample_), 0.0);
                ave /= double(SAMPLE_SZ);
            }

            return ave;
        }

        void   in(double d)
        {
            sample_.push_back(d);
            if (sample_.size() > SAMPLE_SZ) sample_.erase(begin(sample_));
        }

        friend ostream& operator<<(ostream& os, const MovingAve& ma);
        friend istream& operator>>(istream& is, MovingAve& ma);

    private:
        const int SAMPLE_SZ = 50;
        vector<double> sample_;
};

ostream& operator<<(ostream& os, const MovingAve& ma)
{
    os << ma.out() << endl;
    return os;
}

istream& operator>>(istream& is, MovingAve& ma)
{
    double d;

    is >> d;
    ma.in(d);

    return is;
}
