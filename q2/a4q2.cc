import <iostream>;
import AsciiArt;
import Blank;
import Studio;

using std::string, std::cin;

/**
 * Start program: ./executable
 *     ./executable Name of the executable
 * Acceptable inputs:
 *   render         Renders the artwork.
 *   animate <n:int> Renders the next n frames of the artwork
 *   reset          Resets the artwork to its first frame
 *   filledbox <top:int> <bottom:int> <left:int> <right:int> <what:char> Adds
 *                  to the artwork a FilledBox, from [top:left] to 
 *                  [bottom:right], filled with the character what.
 *   blinkingbox <top:int> <bottom:int> <left:int> <right:int> <what:char> Adds
 *                  to the artwork a BlinkingBox, from [top:left] to
 *                  [bottom:right], filled with the character what.
 *   movingbox <top:int> <bottom:int> <left:int> <right:int> <what:char> <dir:[udlr]>
 *                  Adds to the artwork a MovingBox, from [top:left] to
 *                  [bottom:right], filled with the character what, moving into
 *                  the direction dir, where 'u' means up, 'd' down, 'l' left,
 *                  and 'r' right.
 *   maskbox <top:int> <bottom:int> <left:int> <right:int> <what:char> Adds
 *                  to the artwork a MaskBox, from [top:left] to
 *                  [bottom:right], filled with the character what.
 */
int main () {
    AsciiArt *canvas = new Blank;
    Studio s{canvas};

     string command;
    while (cin >> command) {
        if (command == "render" ) {
            s.render();
        } else if (command == "animate") {
            int n;
            cin >> n;
            s.animate(n);
        } else if (command == "reset") {
            s.reset();
        } else if (command == "filledbox") {
            int top, bottom, left, right;
            char what;
            cin >> top >> bottom >> left >> right >> what;
            // s.picture() = // YOUR IMPLEMENTATION GOES HERE
        } else if (command == "blinkingbox") {
            int top, bottom, left, right;
            char what;
            cin >> top >> bottom >> left >> right >> what;
            // s.picture() = // YOUR IMPLEMENTATION GOES HERE
        } else if (command == "movingbox") {
            int top, bottom, left, right;
            char what, dir;
            cin >> top >> bottom >> left >> right >> what >> dir;
            // s.picture() = // YOUR IMPLEMENTATION GOES HERE
        } else if (command == "maskbox") {
            int top, bottom, left, right;
            char what;
            cin >> top >> bottom >> left >> right >> what;
            // s.picture() = // YOUR IMPLEMENTATION GOES HEREs
        }
    }
}
