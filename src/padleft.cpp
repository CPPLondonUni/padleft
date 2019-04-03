

#include <padleft.hpp>

namespace pl {

    std::string pad_left(const std::string &str, int num_spaces) {

        std::string out = str;
        std::string app = str;

        for (int i = 0; i < num_spaces; ++i) {
            app = " ";
            out = app.append(out);
        }
        return out;
    }

}