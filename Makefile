# Nombre del ejecutable
TARGET = bin/main

# Directorio de headers
INCLUDES = -Iinclude

# Buscar todos los .cpp excepto los que inician con test
SOURCES := $(filter-out test%.cpp, $(filter-out tests/*.cpp, $(wildcard src/*.cpp)))

# Regla principal
$(TARGET): $(SOURCES)
	@mkdir -p $(dir $(TARGET))
	$(CXX) $(INCLUDES) $(SOURCES) -o $(TARGET)

# Limpieza
clean:
	$(RM) $(TARGET)
