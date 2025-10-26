#include "trinary.h"

namespace trinary {

// TODO: add your solution here
    int to_decimal(std::string n)
    {
        int result = 0;
        
        for (size_t i = 0; i < n.size(); i++ )
            {
               if (std::isdigit(n[i]))
                   result += (n[i] - '0') * pow(3, (n.size() - 1) - i);
            }
        return result;
    }

}  // namespace trinary
