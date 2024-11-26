PKGS=sdl2
CC = clang
CFLAGS=-Wall -ggdb -std=c11 -pedantic `pkg-config --cflags $(PKGS)`
LIBS=`pkg-config --libs $(PKGS)`

gp: main.c 
	$(CC) $(CFLAGS) -o gp main.c $(LIBS)