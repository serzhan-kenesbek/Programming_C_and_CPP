# Macros

# gcc can be referred to as $(CC)
CC = gcc
# -Wall can be reffered to as $(CFLAGS)
CFLAGS = -Wall
# .o files can be reffered to as $(OBJ)
OBJ = linked_list.o use_linked_list.o

all: use_linked_list
# generating executable code
use_linked_list: $(OBJ)
	$(CC) $(CFLAGS) -o use_linked_list $(OBJ)
# generating object files
use_linked_list.o: linked_list.h use_linked_list.c
	$(CC) -c use_linked_list.c

linked_list.o: linked_list.h linked_list.c
	$(CC) -c linked_list.c

# deleting all generated object files
clean: 
	rm -f *.o use_linked_list	
