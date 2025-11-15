export module Blank;

import <iostream>;
import AsciiArt;

export class Blank : public AsciiArt {
  public:
    char charAt(int row, int col, int tick);
};
