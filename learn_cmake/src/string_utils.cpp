#include "string_utils.h"

std::string repeat(std::string s, int times)
{
    std::string result = "";
    for (int i = 0; i < times; i++)
    {
        result += s;
    }
    return result;
}
