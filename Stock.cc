export module Stock;

import <string>;
import <vector>;
import ISubject; 

using namespace std; 

export class Stock : public ISubject{
  string symbol; 
  int price; 

  public:
    Stock(string symbol, int price);

    bool operator==(const string & symbol) const; 

    const string & getSymbol() const; 

    int getPrice() const; 

    void setPrice(int newPrice);
};

