CC = g++
FLAGS = 

TMAIN: hw09
TEC: hw09ec

# COMMANDS
all:	$(TARGET)

clean:
	rm $(TARGET)

run:
	./$(TARGET)

save:
	git add .

val:
	valgrind ./$(TARGET)

tarE:

tarM:
	tar cf $(TARGET).tar $(TARGET).cpp Makefile $(TARGET).scr