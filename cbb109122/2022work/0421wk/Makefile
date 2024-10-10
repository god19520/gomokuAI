all: Score.cpp Student.o
	g++ Score.cpp Student.cpp -o Score 


Student.o: Student.cpp Student.h
	g++ Student.cpp -c


clean:
	rm *.o Score

