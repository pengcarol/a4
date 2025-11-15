export module Conservative;

import <string>;
import Investor;
import Market;

export class Conservative : public Investor {
  public:
    /**
     * Creates a new Conservative investor with a given name, who operates in a
     * given Market.
     * @param name The name of the Conservative investor
     * @param market The Market in which the Conservative investor operates
     */
    Conservative(std::string name, Market &market);
    notify(std::string symbol, int priceChange) override;

};
