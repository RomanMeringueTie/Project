all: bin/app

bin/app: game.cpp gamelib/player.cpp gamelib/background.cpp gamelib/text.cpp
	g++ -I gamelib -Wall -o bin/app game.cpp gamelib/player.cpp gamelib/background.cpp gamelib/text.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

.PHONY: run

run: bin/app
	./bin/app

.PHONY: clean

clean: bin/app
	rm bin/app