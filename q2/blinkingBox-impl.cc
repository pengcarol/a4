module blinkingBox;

using namespace std; 

blinkingBox::blinkingBox(AsciiArt * element, int top, int bottom, int left, int right, char what) : 
  Decorator{element, top, bottom, left, right, what} {}

blinkingBox::char charAt(int row, int col, int tick) {
  if (row >= this->left && row <= this->right && col >= this->top && col <= this->bottom && tick % 2 == 0) return this->what; 
  return ' ';
}
