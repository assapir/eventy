#include "helpers.h"

#include <algorithm>
#include <string>

namespace eventy
{

bool case_insensative_comperator::operator()(const std::string& lhs, const std::string& rhs) const
{
    if (lhs.size() != rhs.size())
        return lhs < rhs;

    return std::lexicographical_compare(lhs.begin(), lhs.end(),
                                        rhs.begin(), rhs.end(),
                                        [](char a, char b) {
                                            return tolower(a) < tolower(b);
                                        });
}

} // namespace eventy
