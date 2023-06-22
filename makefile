filename=algstruct

all:
	g++ $(filename).cpp -o $(filename)
asm:
	g++ -S -masm=intel $(filename).cpp -o $(filename).s
windows:
	x86_64-w64-mingw32-g++ $(filename).cpp -o $(filename).exe -static-libgcc -static-libstdc++