# Compiler
CC = g++

# Compiler Flags
CFLAGS = -Iinc -Idep -w -std=c++11 -lboost_system -lboost_filesystem -lpthread

# Folders
BDIR = bin
ODIR = obj
SDIR = src

# Executable Name
PROGRAM = app

################################################################################################################################

SRC_FILES := $(wildcard $(SDIR)/*.cpp)
OBJ := $(patsubst $(SDIR)/%.cpp, $(ODIR)/%.o, $(SRC_FILES))

$(PROGRAM): $(SRC_FILES) 
	$(CC) $^ -o $(BDIR)/$@ $(CFLAGS)

clean:
	$(RM) $(BDIR)/*