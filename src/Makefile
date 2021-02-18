main: tokenExecutable 

tokenExecutable: tokenizer.o gui.o
	cc -o tokenExecutable tokenizer.o gui.o

gui.o: gui.c tokenizer.h tokenizer.c 
	gcc -c gui.c tokenizer.c

clean:
	rm -f test *.o *~ *# tokenExecutable 

tokenizer.o: tokenizer.h tokenizer.c
	gcc -c tokenizer.c tokenizer.h

