CXX = g++
CXXFLAGS = -std=c++11

all: insertionsort.cpp selectionsort.cpp args.cpp binary.cpp linear.cpp
	$(CXX) $(CXXFLAGS) insertionsort.cpp -o insertionsort
	$(CXX) $(CXXFLAGS) selectionsort.cpp -o insertionsort
	$(CXX) $(CXXFLAGS) args.cpp -o args
	$(CXX) $(CXXFLAGS) binary.cpp -o binary
	$(CXX) $(CXXFLAGS) linear.cpp -o linear

insert: insertionsort.cpp
	$(CXX) $(CXXFLAGS) $^ -o insertionsort

select: selectionsort.cpp
	$(CXX) $(CXXFLAGS) $^ -o selectionsort

args: args.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

binary: binary.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

linear: linear.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f insertionsort
	rm -f selectionsort
	rm -f args
	rm -f binary
	rm -f linear
