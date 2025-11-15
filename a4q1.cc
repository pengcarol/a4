import <iostream>;
import <sstream>;
import <string>;
import Market;
import Investor;
import Reckless;
import Conservative;

using std::string, std::cin, std::cout, std::endl, std::istringstream;

/**
 * Start program: ./executable
 *     ./executable Name of the executable
 * Acceptable inputs:
 *   MARKET <symbol:string> <price:int> Adds a new Stocl to the Market or
 *                  updates the price of an existing one. Stocks are uniquely
 *                  identifer by their ticker symbol; their price must be
 *                  positive.
 *   BUY <investor:[01]> <symbol:string> <amount:int> Lets investor at index
 *                  [0] (Conservative) or [1] (Reckless) buy amount stock
 *                  given by its ticker symbol. Amount must be positive; the
 *                  ticker symbol must exist in the Market.
 *   SELL <investor:[01]> <symbol:string> <amount:int> Lets investor at index
 *                  [0] (Conservative) or [1] (Reckless) sell amount stock
 *                  given by its ticker symbol. Amount must be positive and
 *                  smaller or equal to the amount of this stock currently
 *                  held; the ticker symbol must exist in the Market.
 */
int main() {
    Market *mrkt {new Market()};
    Investor *investors[2] = {
        new Conservative{"Joe", *mrkt},
        new Reckless {"Gordon", *mrkt} };
    string line;
    while (getline(cin, line)) {
        istringstream iss {line};
        string cmd;
        iss >> cmd;
        if (cmd == "MARKET") {
            string symbol;
            int price;
            iss >> symbol >> price;
            mrkt->updateStock(symbol, price);
            cout << *mrkt << endl;
            cout << *investors[0] << endl;
            cout << *investors[1] << endl;
        } else if (cmd == "BUY") {
            int id, amount;
            string symbol;
            iss >> id >> symbol >> amount;
            investors[id]->buyStock(symbol, amount);
            cout << *investors[id] << endl;
        } else if (cmd == "SELL") {
            int id, amount;
            string symbol;
            iss >> id >> symbol >> amount;
            investors[id]->sellStock(symbol, amount);
            cout << *investors[id] << endl;
        }
    };
    delete investors[0];
    delete investors[1];
    delete mrkt;
}
