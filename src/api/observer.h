#ifndef API_OBSERVER_H_
#define API_OBSERVER_H_

#include <string>

namespace eventy
{

class observer
{
  protected:
    ~observer();

  public:
    virtual const std::string& get_name() const = 0;
    virtual void invoke() const = 0;
};

} // namespace eventy

#endif // API_OBSERVER_H_
