#include "vecCompare.h"
#include <vector>

using std::vector;

template<class valueType>
heap<valueType>::heap(size_t n, valueType ini) {
    elems = vector<valueType>(n, ini);
}

template<class valueType>
heap<valueType>::heap(size_t n, const vector<valueType>& val) {
    elems = vector<valueType>(n, 1);
    for(size_t i = 0; i < n; i++){
        elems[i] = val[i];
    }
}

template<class valueType>
int heap<valueType>::size() const{
    return elems.size();
}

template<class valueType>
bool heap<valueType>::operator== (const heap& rhs) const {
    return elems == rhs.elems;
}
/*
template<class valueType>
bool heap<valueType>::operator== (const heap& rhs) const {
    if (size() != rhs.size()) {
        return false;
    } else {
        for (size_t i = 0; i < elems.size(); i++) {
            if (elems[i] != rhs.elems[i]) {
                return false;
            }
        }
        return true;
    }
}*/

