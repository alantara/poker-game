all:
	g++ -o poker-game main.cpp **/*.cpp -lSDL2

run:
	./poker-game