cc=g++

.PHONY:clean

test:main.o header.o
	$(cc) main.o header.o -o test
	echo completed!!!!
	./test
main.o:main.cpp
	$(cc) -c main.cpp
header.o:header.h header.cpp
	$(cc) -c header.cpp
clean:
	rm main.o header.o test

