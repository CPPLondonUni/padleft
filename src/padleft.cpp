
#include <padleft.hpp>

namespace pl {


std::string pad_left(const std::string& str, int num_spaces)
{
    std::string out = str;
    if (num_spaces > 0) {
        out.insert(out.begin(), num_spaces, ' ');
    }
    return out;
}

}
