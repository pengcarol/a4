export module IObserver;

import <string>;

export class IObserver {
  public:
    virtual void notify(std::string symbol, int priceChange) = 0; 
};
