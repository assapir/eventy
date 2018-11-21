#include "helpers.h"

#include <algorithm>
#include <string>

namespace eventy
{

bool are_equal_ignore_case(const std::string &lhs, const std::string &rhs)
{
    if (lhs.size() != rhs.size())
        return false;

    return std::equal(lhs.begin(), lhs.end(), rhs.begin(),
                      [](char a, char b) {
                          return tolower(a) == tolower(b);
                      });
}

bool case_insensative_comperator::operator()(const std::string& lhs, const std::string& rhs) const
{
    return are_equal_ignore_case(lhs, rhs);
}

} // namespace eventy
