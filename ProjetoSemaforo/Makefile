TARGET = semaforo

CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Arquivos fonte
SRC = $(wildcard source/*.cpp)

# Arquivos objeto
OBJ = $(SRC:.cpp=.o)

# Regra Principal
all: $(TARGET)

# Linkagem
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# complicação dos .cpp
source/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean all

run: all
	./$(TARGET)