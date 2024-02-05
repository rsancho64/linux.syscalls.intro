all: parent son 

parent: parent.c
	gcc parent.c -o parent
	chmod +x parent

son: son.c
	gcc son.c -o son
	chmod +x son

clean:
	rm parent son