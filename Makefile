# Nombre del ejecutable
TARGET = bin/main

# Buscar todos los .cpp excepto los que inician con test
SOURCES := $(filter-out test%.cpp, $(filter-out tests/*.cpp, $(wildcard src/*.cpp)))

# Regla principal
$(TARGET):
	$(CXX) $(SOURCES) -o $(TARGET)

# Limpieza
clean:
	$(RM) $(TARGET)
