OPTIONS = Wall -Wpedantic -Wno-unused-result -oO -g
LIBRARIES = -lm

Main : Main.c
	gcc $(STD) $(OPTIONS) Main.c
-o Main $(LIBRARIES)

./Main
