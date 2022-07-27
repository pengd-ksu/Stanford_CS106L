//#include "MyPair.h"
// Constructor
template<class First, typename Second>
MyPair<First, Second>::MyPair(First first, Second second)
{
    this->first = first;
    this->second = second;
}

template<class First, typename Second>
First MyPair<First, Second>::getFirst() {
    return first;
}

template<class First, typename Second>
Second MyPair<First, Second>::getSecond() {
    return second;
}

template<class First, typename Second>
void MyPair<First, Second>::setFirst(First first) {
    this->first = first;
}

template<class First, typename Second>
void MyPair<First, Second>::setSecond(Second second) {
    this->second = second;
}