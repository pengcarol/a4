module maskBox;

using namespace std; 

maskBox::maskBox(AsciiArt * element, int top, int bottom, int left, int right, char what) : 
  Decorator{element, top, bottom, left, right, what} {}

maskBox::char charAt(int row, int col, int tick) {
  if (row >= this->left && row <= this->right && col >= this->top && col <= this->bottom && this.element->charAt(row, col, tick) != ' ') return this->what; 
  return ' ';
}
