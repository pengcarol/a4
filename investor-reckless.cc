export module Reckless;

import <string>;
import Investor;
import Market;

export class Reckless : public Investor {
  public:
    /**
     * Creates a new Reckless investor with a given name, who operates in a
     * given Market.
     * @param name The name of the Reckless investor
     * @param market The Market in which the Reckless investor operates
     */
    Reckless(std::string name, Market &market);
    notify(std::string symbol, int priceChange) override;
};
