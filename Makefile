CXX =  g++-14 -std=c++20 -fmodules-ts
CXXFLAGS = -Wall -g
HEADERFLAGS = -c -x c++-system-header
MODULES = IObserver.cc ISubject.cc Stock.cc Market.cc Investor.cc Conservative.cc Reckless.cc
SOURCES = IObserver.cc ISubject.cc ISubject-impl.cc Stock.cc Stock-impl.cc Market.cc Market-impl.cc investment.cc Investor.cc Investor.impl.cc Conservative.cc Conservative-impl.cc Reckless.cc Reckless-impl.cc a4q1.cc
HEADERS = iostream vector string  
OBJECTS = IObserver.o ISubject.o ISubject-impl.o Stock.o Stock-impl.o Market-impl.o Market.o investment.o Investor.o Investor-impl.o Conservative.o Conservative-impl.o Reckless.o Reckless-impl.o a4q1.o
EXEC = a4q1

$(EXEC): HEADERS $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

HEADERS:
	$(CXX) $(HEADERFLAGS) $(HEADERS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean 
clean:
	rm -f $(EXEC)
