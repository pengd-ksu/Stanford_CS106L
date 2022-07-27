#ifndef VECCOMPARE_H
#define VECCOMPARE_H

#include <iostream>
#include <vector>

using std::vector;

template<class valueType> class heap {
    public:
        heap(size_t n, valueType ini);
        heap(size_t n, const vector<valueType>& val);
        vector<valueType> elems;
        int size() const;

        bool operator== (const heap& rhs) const;
        // friend bool operator!= (const heap& lhs, const heap& rhs);
};

#include "vecCompare.cpp"
#include "vecCompare.h"
#endif