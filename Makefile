


CXX ?= g++
#BIN_DIR :=bin 
#EXECUTABLE :=$(BIN_DIR)/a
check.out: check.cpp
	$(CXX) check.cpp -o check.out
