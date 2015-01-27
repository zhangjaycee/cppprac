cc=g++
.PHONY:clean
test:time.o main.o
	$(cc) -o test time.o main.o
	echo mission completed!!!
	echo starting!!************
	./test
time.o:time.cpp time.h
	$(cc) -c time.cpp
main.o:main.cpp
	$(cc) -c main.cpp
clean:
	rm test time.o main.o
