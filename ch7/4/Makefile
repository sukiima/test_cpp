gcc_options = -std=c++17 -Wall --pedantic-error

convert : convert.cpp .all.h .all.h.gch
	g++ $(gcc_options) -include .all.h $< -o $@

all.h.gch : .all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

run : convert
	./convert

clean :
	rm -f ./convert
	rm -f ./.all.h.gch

.PHONY : run clean
