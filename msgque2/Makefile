all: Server1 Client1

Server1: msqserver1.c msgque2.h
	gcc -o msqserver1.out msqserver1.c -lrt
	
Client1: msqclient1.c msgque2.h
	gcc -o msqclient1.out msqclient1.c -lrt
	
runClient1:
	./msqclient1.out

runServer1:
	./msqserver1.out

clean:
	rm -rf *.out *.o
