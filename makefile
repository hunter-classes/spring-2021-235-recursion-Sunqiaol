main: main.o knight.o
	g++ -o main main.o knight.o


main.o: main.cpp knight.h

knight.o: knight.cpp knight.h

	
clean:
		rm -f main.o knight.o