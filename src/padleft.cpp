
#include <padleft.hpp>


int pos_or_zero( int x){
    if( x> 0) return x;
    return 0;
}

std::string pl::pad_left(const std::string &str, int num_spaces) {

    int j = pos_or_zero(num_spaces);
    std::string ret;
    for( int i =0; i<j; i++){
        ret+=" ";
    }
    ret+= str;
    return ret;

}
