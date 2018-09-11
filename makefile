all: bin/program bin/test

bin/program: build/main.o build/project.o
	mkdir -p  bin
	g++ -Wall build/main.o build/project.o -o bin/program

build/main.o: src/main.cpp
	mkdir -p build
	g++ -Wall -c src/main.cpp -o build/main.o

build/project.o: src/project.cpp
	mkdir -p build
	g++ -Wall -c src/project.cpp -o build/project.o

bin/test: build/main.o build/project.o build/test.o build/project_test.o
	mkdir -p bin
	g++ -I src -I lib -Wall build/main.o build/project.o build/test.o build/project_test.o -o bin/test

build/test.o: test/main.cpp
	mkdir -p build
	g++ -I src -I lib -Wall -c test/main.cpp -o build/test.o  

build/project_test.o: test/project_test.cpp
	mkdir -p build
	g++ -I src -I lib -Wall -c test/project_test.cpp -o build/project_test.o 

test: bin/test
	./bin/test




.PHONY: clean
clean: 
	rm -rf build bin
