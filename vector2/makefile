CC=g++
NAME = v2
DEPS = vector2.h ../integrador/body.h
OBJS = main.o vector2.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) -o $@ $^



.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: exe
exe:
	make
	make clean
	echo
	./$(NAME)
