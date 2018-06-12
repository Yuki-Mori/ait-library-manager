CXXOBJ := main.o Parser.o
CXX := g++
CXXFLAGS := -g -Wall -std=c++14
TARGET := aitl 
MAKEFILE_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
BIN_DIR := $(MAKEFILE_DIR)bin/
INSTALL_DIR := /usr/local/bin/
INCLUDE := -I$(MAKEFILE_DIR)include/

%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(INCLUDE)

main: src/$(CXXOBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) src/$(CXXOBJ) $(INCLUDE) \
	&& mv $(TARGET) $(BIN_DIR)
	#cp $(TARGET) $(INSTALL_DIR) && \

install: src/$(CXXOBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) src/$(CXXOBJ) $(INCLUDE) \
		&& cp $(TARGET) $(INSTALL_DIR) \
		&& mv $(TARGET) $(BIN_DIR)

clean:
	rm -rf $(CXXOBJ) $(BIN_DIR)$(TARGET)

uninstall:
	rm -rf $(INSTALL_DIR)$(TARGET)
