name = Parallel_ML_lab_1_3
src = $(wildcard *.c)
obj = $(src:/c=.o)

CC = gcc
CFLAGS = -std=c17
LIBFLAGS = -lm

compile: $(name)
$(name): $(obj)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFLAGS)

run:
	./$(name)

clean:
	rm -f $(name)