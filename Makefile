prog: main.cpp
	g++ main.cpp -o prog

.PHONY: clean
clean:
	rm -f prog
