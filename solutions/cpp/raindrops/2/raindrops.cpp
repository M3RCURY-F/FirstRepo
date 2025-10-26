#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    std::string convert(int n)
    {
        std::string result {""};
        if (!(n % 3))
            result += "Pling";
        if (!(n % 5))
            result += "Plang";
        if (!(n % 7))
            result += "Plong";
        return result.size() ? result : std::to_string(n); 
    }

}  // namespace raindrops
