#ifndef QT_CALC_FUNCTION_HPP
#define QT_CALC_FUNCTION_HPP

#include <string>
#include <vector>

#include "extern/json.hpp"

struct Function {
    std::string name;
    std::string expression;
    std::vector<std::string> argumentNames;
};

#endif //QT_CALC_FUNCTION_HPP