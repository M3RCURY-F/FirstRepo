#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int n)
    {
        int res = 0;
        for (int i {1}; i <= n; i++)
            {
                res += i;
            }
        return res*res;
    }

    int sum_of_squares(int n)
    { 
        int res = 0;
        for (int i {1}; i <= n; i++)
            {
                res += i * i;
            }
        return res;
    }

    int difference(int n){return  square_of_sum(n) - sum_of_squares(n);}

}  // namespace difference_of_squares
