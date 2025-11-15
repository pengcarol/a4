module ISubject; 

using namespace std; 

void ISubject::subscribe(IObserver* investor) {
  subscribers.emplace_back(investor);
}

void ISubject::unsubscribe(IObserver* investor) {
  subcribers.erase(investor);
}
