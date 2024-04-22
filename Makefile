FLAGS = -pedantic-errors -std=c++11

print.o: print.cpp print.h
	g++ $(FLAGS) -c $<

main.o: main.cpp print.h
	g++ $(FLAGS) -c $<

main: print.o main.o
	g++ $(FLAGS) $^ -o $@
	
clean:
	rm -f main main.o print.o

.PHONY: clean