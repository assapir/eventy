#ifndef API_EVENTY_H_
#define API_EVENTY_H_

#include <functional>
#include <memory>
#include <string>

#include "api/observer.h"

namespace eventy
{

class eventy
{
protected:
  ~eventy() {}

public:
  virtual void add_observer(const std::shared_ptr<observer>& observer) = 0;
  virtual void remove_observer(const std::string& observer_name) = 0;
  virtual void notify() const = 0;
};

} // namespace eventy

#endif // API_EVENTY_H_