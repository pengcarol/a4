export module Market;

import <iostream>;
import <string>;
import <vector>; 
import Stock; 

export class Market final {
  vector<Stock *> stocks; 

  public:
    /**
     * Attempts to update the price of a Stock for a given ticker symbol to
     * price. If the Stock does not exist, a new Stock with the given ticker
     * symbol is added to the Market. If the Stock exists, its price is
     * updated.
     * @param symbol The ticker symbol of the Stock
     * @param price The new price of the Stock
     */
    void updateStock(std::string symbol, int price);

    Stock* getStock(std::string symbol);

    ~Market();

    friend std::ostream &operator<<(std::ostream &, const Market &);
};
