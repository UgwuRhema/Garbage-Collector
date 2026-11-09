CFLAGS := -g -Wall -Wextra -O0 -march=native

SRC := ./main.c ./gc.c
OUT := ./main

all: $(SRC)
	cc $(CFLAGS) -o $(OUT) $(SRC)
run:
	$(OUT)
clean:
	rm -rf $(OUT)

.PHONY: all clean run
