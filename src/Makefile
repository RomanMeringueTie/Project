all: app

app: main.cpp
	g++ -g -Wall -o app main.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

.PHONY: run

run: app
	./app

.PHONY: clean

clean: app
	rm app