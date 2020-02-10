
#[ Project ]
# │
# ├──● Makefile
# │
# ├──┬[ build ]
# │  │
# │  ├───[ objects ]
# │  └───[ apps ]
# │
# ├──┬[ include ]
# │  │
# │  ├──● program.hpp
# │  │
# │  ├──┬[ module1 ]
# │  │  │
# │  │  ├──● mod1c1.hpp
# │  │  └──● mod1c2.hpp
# │  │
# │  └──┬[ module2 ]
# │     │
# │     ├──● mod2c1.hpp
# │     └──● mod2c2.hpp
# │
# └──┬[ src ]
#    │
#    ├──● program.cpp
#    │
#    ├──┬[ module1 ]
#    │  │
#    │  ├──● mod1c1.cpp
#    │  └──● mod1c2.cpp
#    │
#    └──┬[ module2 ]
#       │
#       ├──● mod2c1.cpp
#       └──● mod2c2.cpp
#
#


CXX      := -c++
CXXFLAGS := -pedantic-errors -Wall -Wextra -Werror
LDFLAGS  := -L/usr/lib -lstdc++ -lm
BUILD    := ./build
OBJ_DIR  := $(BUILD)/objects
APP_DIR  := $(BUILD)/apps
TARGET   := program
INCLUDE  := -Iinclude/
SRC      :=                      \
   $(wildcard src/aaa/*.cpp) \
   $(wildcard src/module2/*.cpp) \
   $(wildcard src/module3/*.cpp) \
   $(wildcard src/*.cpp)         \

OBJECTS := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: build $(APP_DIR)/$(TARGET)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

$(APP_DIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(LDFLAGS) -o $(APP_DIR)/$(TARGET) $(OBJECTS)

.PHONY: all build clean debug release

build:
	@mkdir -p $(APP_DIR)
	@mkdir -p $(OBJ_DIR)

debug: CXXFLAGS += -DDEBUG -g
debug: all

release: CXXFLAGS += -O2
release: all

clean:
	-@rm -rvf $(OBJ_DIR)/*
	-@rm -rvf $(APP_DIR)/*


