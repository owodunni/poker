#
# Makefile för poker,  GNU GCC (g++)
#
# Filkataloger där andra delar av programet finns.
LIB = /lib
SRC = /src

# Diagnosmeddelanden från kompilatorn (g++) filtreras av gccfilter.
CCC = gccfilter -c -a g++ 

# Kompilatorflaggor, lägg till '-g' om kompilering för avlusning ska göras.
CCFLAGS += -std=c++11 -Wpedantic -Wall -Wextra -Werror

# Preprocessorflaggor, -I lägger till en filkatalog i inkluderingssökvägen.
CPPFLAGS += -I$(LIB)

# Preprocessorflaggor, -I lägger till en filkatalog i inkluderingssökvägen.
CPPFLAGS += -I$(SRC)

# Länkflaggor - Fix för att lösa lokala problem med C++ länkbibliotek.
LDFLAGS  += -L/sw/gcc-$(GCC4_V)/lib -static-libstdc++

# Objektkodsmoduler som ingår i den kompletta kalkylatorn.
OBJECTS = poker.o card.o 

# Huvudmål - skapas med kommandot 'make' eller 'make poker'.
poker: $(OBJECTS) Makefile
	$(CCC) $(CPPFLAGS) $(CCFLAGS) $(LDFLAGS) -o poker $(OBJECTS)

# Delmål (flaggan -c avbryter innan länkning, objektkodsfil erhålls)
poker.o: $(SRC)/main.cc
	$(CCC) $(CPPFLAGS) $(CCFLAGS) -c $(SRC)/main.cc

card.o: $(LIB)/card.h $(SRC)/card.cc
	$(CCC) $(CPPFLAGS) $(CCFLAGS) -c $(SRC)/card.cc

# 'make clean' tar bort objektkodsfiler och 'core' (minnesdump).
clean:
	@ \rm -rf *.o *.gch core

# 'make zap' tar även bort det körbara programmet och reservkopior (filer
# som slutar med tecknet '~').
zap: clean
	@ \rm -rf poker *~

# Se upp vid eventuell ändring, '*' får absolut inte finnas för sig!!!
#
# '@' medför att kommandot inte skrivs ut på skärmen då det utförs av make.
# 'rm' är ett alias för 'rm -i' på IDA:s system, '\rm' innebär att "original-
# versionen", utan flaggan '-i', används. 

