main: tokenExecutable 

tokenExecutable: tokenizer.o gui.o history.o
	cc -o tokenExecutable tokenizer.o gui.o history.o

gui.o: gui.c tokenizer.h tokenizer.c 
	gcc -c gui.c tokenizer.c

clean:
	rm -f test *.o *~ *# tokenExecutable tokenizer.h.gch history.h.gch 

tokenizer.o: tokenizer.h tokenizer.c
	gcc -c tokenizer.c tokenizer.h

history.o: history.h history.c
	gcc -c history.c history.h
