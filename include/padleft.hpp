#ifndef PADLEFT_HPP
#define PADLEFT_HPP

#include <string>

namespace pl {

/// Returns a new string which is a copy of @str with @num_spaces space
/// characters prepended
std::string pad_left(const std::string& str, int num_spaces);

}

#endif