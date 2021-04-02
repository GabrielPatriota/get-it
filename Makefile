CC = g++ src/main.cpp -o GetIt.appImage

LIBS = -lsfml-graphics -lsfml-system -lsfml-window

Compiler:
	$(CC) $(LIBS)

run:
	./GetIt.appImage