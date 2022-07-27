#ifndef MyPair_H
#define MyPair_H

template<typename First, typename Second> class MyPair {
    public:
        // Constructor
        MyPair(First first, Second second);

        First getFirst();
        Second getSecond();

        void setFirst(First first);
        void setSecond(Second second);
    private:
        First first;
        Second second;
};

#include "MyPair.cpp"
//#include "MyPair.h"

#endif // MyPair_H