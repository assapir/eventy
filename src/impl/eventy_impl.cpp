#include "eventy_impl.h"

using std::shared_ptr;
using std::string;

namespace eventy
{

void eventy_impl::add_observer(const shared_ptr<observer>& observer)
{
    mObservers.emplace(observer->get_name(), observer);
}

void eventy_impl::remove_observer(const string& observer_name) 
{
    mObservers.erase(observer_name);
}

void eventy_impl::notify() const
{
    for (const auto &observer : mObservers)
    {
        observer.second->update();
    }
}

} // namespace eventy
