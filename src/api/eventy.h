#ifndef API_EVENTY_H_
#define API_EVENTY_H_

#include <functional>
#include <string>

#include "api/observer.h"

namespace eventy
{

class eventy
{
protected:
  ~eventy() {}

public:
  void add_observer(const observer& observer);
  void remove_observer(const std::string& observer_name);
  void notify() const;
};

} // namespace eventy

#endif // API_EVENTY_H_