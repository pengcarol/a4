export module ISubject;

import <string>;
import <vector>;
import IObserver; 

using namespace std; 

export class ISubject {
  protected:
    vector<IObserver *> subscribers; 
  
  public:
    void subscribe(IObserver* investor);
    void unsubscribe(IObserver* investor);
};
