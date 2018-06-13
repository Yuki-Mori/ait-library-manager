CXXOBJ := main.o Parser.o Command.o Init.o
CXX := g++
CXXFLAGS := -g -Wall -std=c++14
TARGET := aitl
MAKEFILE_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
BIN_DIR := $(MAKEFILE_DIR)../bin/
OBJ_DIR := $(MAKEFILE_DIR)obj/
INSTALL_DIR := /usr/local/bin/
INCLUDE := -I$(MAKEFILE_DIR)include/

%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(INCLUDE)
	mv $@ $(OBJ_DIR)

main: src/$(CXXOBJ)
	mv src/*.o $(OBJ_DIR)
	cd $(OBJ_DIR) && \
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(CXXOBJ) $(INCLUDE) && \
	mv $(TARGET) $(BIN_DIR)
	#cp $(TARGET) $(INSTALL_DIR) && \

install: src/$(CXXOBJ)
	mv src/*.o $(OBJ_DIR)
	cd $(OBJ_DIR) && \
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(CXXOBJ) $(INCLUDE) \
		&& cp $(TARGET) $(INSTALL_DIR) \
		&& mv $(TARGET) $(BIN_DIR)

clean:
	rm -rf $(OBJ_DIR)*.o $(BIN_DIR)$(TARGET)

uninstall:
	rm -rf $(INSTALL_DIR)$(TARGET)
