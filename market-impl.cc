module Market;

using namespace std; 

Stock* Market::getStock(std::string symbol) {
  for (int i = 0; i < stocks.size(); ++i) {
    if (stocks[i]->getSymbol() == symbol) return vector[i];
  }
}

void Market::updateStock(string symbol, int price) {
  Stock* s = this->getStock(symbol);
  s->setPrice(price);
}

Market::~Market() {
  for (int i = 0; i < stocks.size(); i++) {
    delete stocks[i];
  }
}

ostream &operator<<(ostream & out, const Market & m) {
  for (int i = 0; i < m.stocks.size(); ++i) {
    Stock* s = m.stocks[i];
    out << "[" << s->getSymbol() << "] $" << s->getPrice() <<endl;
  }
  out << " -- " << endl; 

  return out; 
}
