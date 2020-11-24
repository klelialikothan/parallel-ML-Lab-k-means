name = Parallel_ML_lab_1_5
src = $(wildcard *.c)
obj = $(src:/c=.o)

CC = gcc
CFLAGS = -std=c17 -O2
LIBFLAGS = -lm

compile: $(name)
$(name): $(obj)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFLAGS)

run:
	./$(name)

clean:
	rm -f $(name)