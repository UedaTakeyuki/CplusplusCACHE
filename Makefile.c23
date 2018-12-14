CC=g++
TARGET=c23_2
OBJECTS=c23_2.o Square.o
INCFLAG = -lstdc++ -std=c++17

$(TARGET): $(OBJECTS)
	@echo "** Linking Executable"
	$(CC) $(OBJECTS) -o $(TARGET)

clean:
	@rm -f *.o *~

veryclean: clean
	@rm -f $(TARGET)

%.o: %.cpp
	@echo "** Compiling C++ Source"
	$(CC) -c $(INCFLAG) $< 
