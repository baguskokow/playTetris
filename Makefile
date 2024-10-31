CXX := g++
CXX_FLAGS := -std=c++17
OBJECT := builds/objects
BIN := builds/bin

all: 
	$(CXX) $(CXX_FLAGS) $(OBJECT)/playtetris.o $(OBJECT)/main.o -o $(BIN)/playtetris

build:
	if [ ! -d builds/objects ] && [ ! -d builds/bin ]; then \
	  mkdir -p builds/objects; \
	  mkdir -p builds/bin; \
	fi 

main.o:
	$(CXX) -c src/main.cpp $(CXX_FLAGS) -o $(OBJECT)/main.o

playtetris.o:
	$(CXX) -c src/playtetris.cpp $(CXX_FLAGS) -o $(OBJECT)/playtetris.o

clean:
	@echo "Clearing..."
	@rm -rf build`
