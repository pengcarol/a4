module investor;

import <string>;
import <vector>;
import Market;
import investment; 

using namespace std; 

Investor::Investor(string name, Market &market) : name{name}, Market{market} {}

void Investor::buyStock(string symbol, int amount) {
  bool exist = false; 
  int size = investments.size()
  for (int i = 0; i < size; ++i) {
    if (investments[i].stock.getSymbol() == symbol) {
      investments[i].amount += amount; 
      exist = true; 
      break; 
    }
  }

  if (!exist) {
    size = m.stocks.size();
    for (int i = 0; i < size; ++i) {
      if (m.stocks[i].stock.symbol == symbol) {
        investments.emplace_back(Stock(symbol, amount)); 
        break; 
      }
    }
  }

}

void Investor::sellStock(string symbol, int amount) {
  for (int i = 0; i < investments.size(); ++i) {
    if (investments[i].stock.getSymbol() == symbol) {
      if (amount >= investments[i].amount) investments[i].amount = 0; 
      else investments[i].amount -= amount; 
      break; 
    }
  }
}

Investor::~Investor() { } 

ostream &operator<<(ostream &out, const Investor &i) {
  out << i.name() << " | "; 
  for (int i = 0; i < investments.size(); ++i) {
    out << investments[i].stock.getSymbol() << "(" << investments[i].stock.getPrice() << ") ";
  }
  out << endl; 
  return out; 
}
