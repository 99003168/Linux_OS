all: Read Write

Read: shrdmread.c sharedmem.h
	gcc -o shrdmread.out shrdmread.c -lrt
	
Write: shrdmwrite.c sharedmem.h
	gcc -o shrdmwrite.out shrdmwrite.c -lrt
	
runRead:
	./shrdmread.out

runWrite:
	./shrdmwrite.out

clean:
	rm -rf *.out *.o
