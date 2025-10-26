#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int n)
    {
        int res = n *(n + 1) / 2;
        return res*res;
    }

    int sum_of_squares(int n)
    { 
        int res = n * (n + 1) * (2 * n + 1) / 6;
        return res;
    }

    int difference(int n){return  square_of_sum(n) - sum_of_squares(n);}

}  // namespace difference_of_squares
