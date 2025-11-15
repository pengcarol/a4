export module maskBox; 

import Decorator; 
using namespace std;

export class maskBox : public Decorator {
  public:
    maskBox(AsciiArt * element, int top, int bottom, int left, int right, char what);

    char charAt(int row, int col, int tick) override; 
}
