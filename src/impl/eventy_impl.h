#ifndef API_EVENTY_IMPL_H_
#define API_EVENTY_IMPL_H_

#include <functional>
#include <memory>
#include <string>
#include <map>

#include "api/eventy.h"
#include "helpers/helpers.h"

namespace eventy
{

class eventy_impl : public eventy
{
public:
  virtual void add_observer(const std::shared_ptr<observer>& observer) override;
  virtual void remove_observer(const std::string& observer_name) override;
  virtual void notify() const override;

private:
  std::map<std::string, std::shared_ptr<observer> &, case_insensative_comperator> mObservers;
};

} // namespace eventy

#endif // API_EVENTY_IMPL_H_