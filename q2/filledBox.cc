export module filledBox; 

import Decorator; 
using namespace std;

export class filledBox : public Decorator {
  public:
    filledBox(AsciiArt * element, int top, int bottom, int left, int right, char what);

    char charAt(int row, int col, int tick) override; 
}
