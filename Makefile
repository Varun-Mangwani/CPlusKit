CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -I.

all: test str maths

str:
	$(CXX) $(CXXFLAGS) CPlusKit/Example/str.cpp -o CPlusKit/Example/str

maths:
	$(CXX) $(CXXFLAGS) CPlusKit/Example/Maths.cpp -o CPlusKit/Example/Maths

test:
	$(CXX) $(CXXFLAGS) CPlusKit/Example/Test.cpp -o CPlusKit/Example/Test

run-test: test
	./CPlusKit/Example/Test

run-str: str
	./CPlusKit/Example/str

run-maths: maths
	./CPlusKit/Example/Maths

clean:
	rm -f CPlusKit/Example/str CPlusKit/Example/Maths CPlusKit/Example/Test

.PHONY: all str maths test run-test run-str run-maths clean
