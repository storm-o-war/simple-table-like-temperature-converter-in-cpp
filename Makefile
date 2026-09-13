CXX = g++
CXXFLAGS = -Wall -Wextra -O2
DEBUG_FLAGS = -g

# SRC = $(wildcard *.cpp)
SRC = convTemp.cpp

TARGET = main.out
TERGET_DEBUG = mainD.out

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)
debug:
	$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $(SRC) -o $(TARGET)
# clean:
# 	rm	-f $(TERGET)

