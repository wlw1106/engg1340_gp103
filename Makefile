FLAGS = -pedantic-errors -std=c++11
main: main.cpp
	g++ $(FLAGS) $< -o $@