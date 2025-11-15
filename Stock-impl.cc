module Stock; 

using namespace std; 

Stock::Stock(string symbol, int price) : symbol{symbol}, price{price} {}

bool Stock::operator==(const string & symbol) const {
  return this->symbol == symbol;
}

const string & Stock::getSymbol() const {
  return this->symbol; 
}

int Stock::getPrice() const {
  return this->price; 
}

void Stock::setPrice(int newPrice) {
  int priceChange = (newPrice / this->price + 1) * 100; 
  this->price = newPrice; 

  for (int i = 0; i < this->subscribers.size(); ++i) {
    this->subscribers[i]->notify(this->symbol, priceChange);
  }
}
