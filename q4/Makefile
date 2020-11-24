name = Parallel_ML_lab_1_4
src = $(wildcard *.c)
obj = $(src:/c=.o)

CC = gcc
CFLAGS = -std=c17 -pg
LIBFLAGS = -lm

compile: $(name)
$(name): $(obj)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFLAGS)

run:
	./$(name)

clean:
	rm -f $(name)