CXX = g++
CXXFLAGS = -std=c++11 -Wall


SRCS = check.cpp


OBJS = $(SRCS:.cpp=.o)


TARGET = bin/check
all:$(TARGET)	
$(TARGET): $(OBJS)
	 $(CXX) $(CXXFLAGS) -o $@ $^


%.o: %.cpp
	 $(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	 rm -f $(OBJS)


.PHONY: clean
