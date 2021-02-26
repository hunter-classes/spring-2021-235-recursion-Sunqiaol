main: main.o knight.o
	g++ -o main main.o knight.o

knight.o: knight.cpp knight.h

main.o: main.cpp knight.h

clean:
	rm -f main.o knight.o