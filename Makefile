sortArray: main.o sortingArray.o
	gcc -o sortArray main.o sortingArray.o
	
main.o: main.cpp
	gcc -c -g main.cpp

sortingArray.o: sortingArray.cpp
	gcc -c -g sortingArray.cpp
	
clean: 
	rm -f *~ *.o sortArray