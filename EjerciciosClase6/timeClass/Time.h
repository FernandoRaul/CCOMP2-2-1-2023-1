#include <string.h>
using namespace std;

#ifndef TIME_H
#define TIME_H

class Time {
    public:
        void setTime(int, int, int);
        string toUniversalString() const;
        string toStandartString() const;
    private:
        unsigned int hour{0};
        unsigned int minute{0};
        unsigned int second{0};
};

#endif