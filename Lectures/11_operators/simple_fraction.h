#ifndef SIMPLE_FRACTION_H
#define SIMPLE_FRACTION_H

#include <iostream>

// Class to represent fractions with distinct numerators and denominators.
template<typename T1, typename T2> class Fraction {

    public:
        /*
         * constructor to initialize Fraction
         */
        Fraction (T1 num, T2 denom);

        /*
         * return if fraction represented by this is less than rhs
         */
        bool operator< (const Fraction& rhs) const;

        /*
         * return if fraction represented by this is greater than rhs
         */
        bool operator> (const Fraction& rhs) const;

        /*
         * get difference of this and rhs fractions
         */
        Fraction operator- (const Fraction& rhs) const;


    private:
        int num, denom;
        void reduce();
};

#endif
