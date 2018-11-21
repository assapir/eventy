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
    const std::string& get_name() const;
    void update() const;
};

} // namespace eventy

#endif // API_OBSERVER_H_
