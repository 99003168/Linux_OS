all: Send Receiver

Send: msqsend.c msg.h
	gcc -o msqsend.out msqsend.c -lrt
	
Receiver: msqrcvr.c msg.h
	gcc -o msqrcvr.out msqrcvr.c -lrt
	
runSend:
	./msqsend.out

runReceiver:
	./msqrcvr.out

clean:
	rm -rf *.out *.o
