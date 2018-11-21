#ifndef HELPERS_HELPERS_H_
#define HELPERS_HELPERS_H_

#include <string>

namespace eventy
{

bool are_equal_ignore_case(const std::string &lhs, const std::string &rhs);

class case_insensative_comperator
{
  public:
    bool operator()(const std::string &lhs, const std::string &rhs) const;
};

} // namespace eventy

#endif // HELPERS_HELPERS_H_