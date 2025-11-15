export module blinkingBox; 

import Decorator; 
using namespace std;

export class blinkingBox : public Decorator {
  public:
    filledBox(AsciiArt * element, int top, int bottom, int left, int right, char what);

    char charAt(int row, int col, int tick) override; 
}
