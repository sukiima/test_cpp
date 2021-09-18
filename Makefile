all:
	g++ -std=c++17 test.cpp -o test.out

run:
	./test.out

clean:
	- rm *.out
