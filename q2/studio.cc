export module Studio;

import <iostream>;
import AsciiArt;

export class Studio {
    // width and height of the artwork
    int rows = 10, cols = 10, ticks = 0;
    // stream for output
    std::ostream &out = std::cout;
    // the stored picture
    AsciiArt *thePicture;
  public:
    /**
     * Creates a new artwork from a given picture.
     */
    explicit Studio(AsciiArt *pi);
    /**
     * Returns a pointer to the stored picture.
     */
    AsciiArt *&picture();
    /**
     * Resets the artwork to its first frame.
     */
    void reset();
    /**
     * Renders the artwork.
     */
    void render();
    /**
     * Renders the next numTick frames of the artwork.
     * @param numTicks Number of frames to render
     */
    void animate(int numTicks);
    ~Studio();
};
