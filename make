OPTIONS = Wall -Wpedantic -Wno-unused-result -oO -g
LIBRARIES = -lm

First : First.c
	gcc $(STD) $(OPTIONS) First.c
-o First $(LIBRARIES)

./First


