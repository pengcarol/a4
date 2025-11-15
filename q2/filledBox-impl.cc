module filledBox;

using namespace std; 

filledBox::filledBox(AsciiArt * element, int top, int bottom, int left, int right, char what) : 
  Decorator{element, top, bottom, left, right, what} {}

filledBox::char charAt(int row, int col, int tick) {
  if (row >= this->left && row <= this->right && col >= this->top && col <= this->bottom) return this->what; 
  return ' ';
}
