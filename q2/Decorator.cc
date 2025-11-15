export module Decorator; 

import AsciiArt; 

export class Decorator : public AsciiArt {
  protected:
    AsciiArt * element; 
    int top, bottom, left, right; 
    char what; 

  public:
    Decorator(AsciiArt * element, int top, int bottom, int left, int right, char what) : 
      element{element}, top{top}, bottom{bottom}, left{left}, right{right} {}
    ~Decorator() {delete element;}
}
