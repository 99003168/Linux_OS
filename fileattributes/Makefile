all: Server Client

Server: server.c ServerClient.h
	gcc -o server.out server.c -lrt
	
Client: client.c ServerClient.h
	gcc -o client.out client.c -lrt
	
runClient:
	./client.out

runServer:
	./server.out

clean:
	rm -rf *.out *.o
