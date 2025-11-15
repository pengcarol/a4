module movingBox;

using namespace std; 

movingBox::movingBox(AsciiArt * element, int top, int bottom, int left, int right, char what, char dir) : 
  Decorator{element, top, bottom, left, right, what}, dir{dir} {}

movingBox::char charAt(int row, int col, int tick) {
  for (int i = 0; i < tick; i++) {
    if (dir == 'u') {
      this.top -= 1; 
      this.bottom -= 1;
    } else if (dir == 'd') {
      this.top += 1; 
      this.bottom += 1; 
    } else if (dir == 'l') {
      this.left -= 1; 
      this.right -= 1; 
    } else {
      this.left += 1; 
      this.right += 1; 
    }
  }

  if (row >= this->left && row <= this->right && col >= this->top && col <= this->bottom) return this->what; 
  return ' ';
}
