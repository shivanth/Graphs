CC=gcc
INCDIR="./include"
CCFLAGS=-c -Wall -I$(INCDIR)
DEBUG= -g
SOURCES=vertex.c edge.c test.c util.c
OBJECTS=$(SOURCES:.c=.o)

EXECUTABLE=test

all:$(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	       $(CC) $(DEBUG) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) -c $(DEBUG) $(CCFLAGS) $< -o $@
.PHONY: clean
clean:
	-rm -f  $(OBJECTS)
