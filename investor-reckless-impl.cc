module Reckless; 

import <string>;
import Investor;
import Market;

using namespace std; 

Reckless::Reckless(string name, Market &market) : Investor{name, market} {}

void Reckless::notify(string symbol, int priceChange) {
  if (priceChange == 50) {
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
  } else if (priceChange == -20) {
    for (int i = 0; i < investments.size(); i++) {
      if (investments[i].stock.getSymbol == symbol) {
        buyStock(symbol, investments[i].amount * 2);
        break;
      }
    }
  }
}
