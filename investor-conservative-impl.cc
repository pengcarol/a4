module Conservative; 

import <string>;
import Investor;
import Market;

using namespace std; 

Conservative::Conservative(string name, Market &market) : Investor{name, market} {}

void Conservative::notify(string symbol, int priceChange) {
  if (priceChange == 10) {
    for (int i = 0; i < investments.size(); i++) {
      if (investments[i].stock.getSymbol() == symbol) {
        sellStock(symbol, investments[i].amount / 2);
        break;
      }
    }
  } else if (priceChange == 25) {
    for (int i = 0; i < investments.size(); i++) {
      if (investments[i].stock.getSymbol() == symbol) {
        sellStock(symbol, investments[i].amount);
        break;
      }
    }
  } else if (priceChange == -10) {
    for (int i = 0; i < investments.size(); i++) {
      if (investments[i].stock.getSymbol() == symbol) {
        buyStock(symbol, investments[i].amount);
        break;
      }
    }
  }
}
