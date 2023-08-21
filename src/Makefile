all: app

app: game.cpp player.cpp background.cpp text.cpp
	g++ -Wall -o app game.cpp player.cpp background.cpp text.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

.PHONY: run

run: app
	./app

.PHONY: clean

clean: app
	rm app