export investment; 

import <string>
import Stock; 

using namespace std; 

struct investment {
  Stock stock; 
  int amount; 

  bool operator==(string symbol) {
    return stock.getSymbol() == symbol; 
  } 
};
