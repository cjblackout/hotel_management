CXX = g++
CXXFLAGS = -Iinclude -Wall -std=c++11
LDFLAGS =

SRC = src/Guest.cpp src/Inventory.cpp src/Employee.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = bin/HotelManagement

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
