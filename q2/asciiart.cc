export module AsciiArt;

export class AsciiArt {
  public:
   virtual ~AsciiArt();
   virtual char charAt(int row, int col, int tick) = 0;
};
