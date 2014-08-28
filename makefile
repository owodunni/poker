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
BUILDDIR := build
TARGET := bin

#Compiler options.
CC = g++
CCFLAGS = -std=c++11 -Wall -Wextra -Werror

SRCEXT := cc
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

INC := -I include


$(TARGET): $(OBJECTS) makefile
	@echo " Linking..."
	@mkdir -p $(TARGET)
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $(CCFLAGS) -o $(TARGET)/poker.exe $(OBJECTS) 

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CCFLAGS)  -c -o $@ $<

clean:
	@echo " Cleaning..."; 
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR)

zap:
	@echo " Zaping...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)


# Tests
tester: $(OBJECTS) makefile
	@echo " Linking tester..."
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $(CCFLAGS) test/tester.cc -o $(TARGET)/tester.exe  

# Spikes
ticket:
	$(CC) $(CFLAGS) spikes/ticket.cpp $(INC) $(LIB) -o bin/ticket

.PHONY: clean
