#########################################      
#                                       #                     
#       -----BEATING POKER------        # 
#       - ~a Poole production~ -        #
#       ------------------------        #
#                                       #
#########################################
# filename:	makefile                #
# creator:	Alexander Poole         #
# date: 	2014-08-27              #
#                                       #
# The makefile for Beating poker        #
#########################################
#
# TODO:
#

#Paths to diffrent project folders
SRCDIR := src
BUILDIR := build
TARGET := bin/runner

#Compiler options.
CC = g++
CCFLAGS += -std=c++11 -Wall -Wextra -Werror

SRCEXT := cc
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

INC := -I include


poker: $(OBJECTS) makefile
	@echo " Linking..."
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $(CCFLAGS) -o poker.exe $(OBJECTS) 

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	 $(CC) $(CCFLAGS)  -c -o $@ $<

clean:
	@echo " Cleaning..."; 
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

# Tests
tester:
	$(CC) $(CFLAGS) test/tester.cpp $(INC) $(LIB) -o bin/tester

# Spikes
ticket:
	$(CC) $(CFLAGS) spikes/ticket.cpp $(INC) $(LIB) -o bin/ticket

.PHONY: clean
