CC=g++
NAME = integrador
DEPS = body.h ../vector2/vector2.h
OBJS = main.o body.o




%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $^

$(NAME): $(OBJS)
	$(CC) -o $@ $^
#$(CC) -o $(NAME) $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: exe
exe:
	make
	make clean
	echo
	./$(NAME)
