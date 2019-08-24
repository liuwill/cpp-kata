CXXFLAGS = -g -Wall -Wfatal-errors -std=c++14

ALL = kata

all: $(ALL)

kata: kata.cc Makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cc

clean:
	$(RM) $(ALL) *.o

test: all
	bash test