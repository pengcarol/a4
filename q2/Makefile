CXX =  g++-14 -std=c++20 -fmodules-ts
CXXFLAGS = -Wall -g
HEADERFLAGS = -c -x c++-system-header
SOURCES = asciiart.cc asciiart-impl.cc blank.cc blank-impl.cc blinkingBox.cc blinkingBox-impl.cc filledBox.cc filledBox-impl.cc movingBox.cc movingBox-impl.cc maskBox.cc maskBox-impl.cc studio.cc studio-impl.cc a4q2.cc
HEADERS = iostream   
OBJECTS = asciiart.o asciiart-impl.o blank.o blank-impl.o blinkingBox.o blinkingBox-impl.o filledBox.o filledBox-impl.o movingBox.o movingBox-impl.o maskBox.o maskBox-impl.o studio.o studio-impl.o a4q2.o
EXEC = a3q3


$(EXEC): HEADERS $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

HEADERS:
	$(CXX) $(HEADERFLAGS) $(HEADERS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean 
clean:
	rm -f $(EXEC)
