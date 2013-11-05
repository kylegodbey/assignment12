sortArray: main.o sortingArray.h
	g++ -o sortArray main.o sortingArray.h

main.o: main.cpp
	g++ -c -g main.cpp

#sortingArray.o: sortingArray.h
#	g++ -c -g sortingArray.h

clean: 
	rm -f *.gch *~ *.o sortArray