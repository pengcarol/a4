export module Investor;

import <string>;
import <vector>;
import IObserver; 
import Market;
import investment; 

export class Investor : public IObserver {
  protected:
    std::string name; 
    vector<investment> investments;
    Market m; 

  public:
    /**
     * Creates a new Investor with a given name, who operates in a given
     * Market.
     * @param name The name of the Investor
     * @param market The Market in which the Investor operates
     */
    Investor(std::string name, Market &market);
    /**
     * Adds amount Stock for a given ticker symbol to the portfolio. If the 
     * Stock does not exist in the Market, than no Stock are added.
     * @param symbol The ticker symbol of the Stock
     * @param amout The number of Stock to be bought
     */
    virtual void buyStock(std::string symbol, int amount);
    /**
     * Removes up to amount Stock for a given ticker symbol from the portfolio.
     *  If the Stock does not exist in the porfolio, than no Stock are removed.
     * @param symbol The ticker symbol of the Stock
     * @param amout The number of Stock to be sold
     */
    virtual void sellStock(std::string symbol, int amount);

    virtual void notify(std::string symbol, int priceChange) = 0;

    virtual ~Investor() {} 

    friend std::ostream &operator<<(std::ostream &, const Investor &);
};
