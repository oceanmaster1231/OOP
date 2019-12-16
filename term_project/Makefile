.SUFFIXES: .cpp .o

OBJECTS = array_2d.o big_block.o

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean : 
	rm -rf $(OBJECTS) $(TARGET)

main.o : main.cpp
vehicle.o : vehicle.cpp
car.o : car.cpp
bike.o : bike.cpp