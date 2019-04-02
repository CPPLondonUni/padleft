
PadLeft is a useful C++ library which prepends spaces to strings.

It is very definitely a serious project.

## Usage ##

```cpp
std::string hello = "Hello world"

auto hello_with_spaces = pl::pad_left(hello, 3);

assert(hello_with_spaces == "   Hello world");
```
