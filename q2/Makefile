name = Parallel_ML_lab_1_2
src = $(wildcard *.c)
obj = $(src:/c=.o)

CC = gcc
CFLAGS = -std=c17
#CFLAGS = -std=c17 -pg
#CFLAGS = -std=c17 -O2
LIBFLAGS = -lm

compile: $(name)
$(name): $(obj)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFLAGS)

run:
	./$(name)

clean:
	rm -f $(name)