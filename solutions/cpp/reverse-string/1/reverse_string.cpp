#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string str)
    {
        std::string text = str;

        reverse(text.begin(), text.end());
        return text;
    }

}  
