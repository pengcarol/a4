export module movingBox; 

import Decorator; 
using namespace std;

export class movingBox : public Decorator {
  private: 
    char dir; 

  public:
    movingBox(AsciiArt * element, int top, int bottom, int left, int right, char what, char dir);

    char charAt(int row, int col, int tick) override; 
}
