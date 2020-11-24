name = Parallel_ML_lab_1_1
src = $(wildcard *.c)
obj = $(src:/c=.o)

CC = gcc
CFLAGS = -std=c17

compile: $(name)
$(name): $(obj)
	$(CC) $(CFLAGS) -o $@ $^

run:
	./$(name)

clean:
	rm -f $(name)