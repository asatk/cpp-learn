# C/C++ Compiler
CXX = g++
# Use the C++11 standard libraries and syntax
CXXFLAGS = -std=c++11

all:
	$(CXX) $(CXXFLAGS) strshuffle.cpp -o strshuffle
	$(CXX) $(CXXFLAGS) io.cpp -o io
	$(CXX) $(CXXFLAGS) rand.cpp -o rand

shuffle: strshuffle.cpp
	$(CXX) $(CXXFLAGS) strshuffle.cpp -o strshuffle

# uses automatic variable "$^" which means "all pre-requisites"
io: io.cpp
	$(CXX) $(CXXFLAGS) $^ -o io

# uses automatic variable "$@" which means "target"
rand: rand.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f strshuffle
	rm -f io
	rm -f rand
