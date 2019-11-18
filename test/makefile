
export CFLAGS += -I$(CURDIR)

default:

clean: .always
	rm -f test.exe
	rm -f compiled/main.o
	rm -f compiled/test-mac-bool.o
	rm -f compiled/test-mac-inc.o
	rm -f compiled/test-mac-dec.o
	rm -f compiled/test-mac-if.o
	rm -f compiled/test-mac-not.o
	rm -f compiled/test-mac-and.o
	rm -f compiled/test-mac-or.o
	rm -f compiled/test-mac-add.o
	rm -f compiled/test-mac-sub.o 
	rm -f compiled/test-mac-mul.o
	rm -f compiled/test-mac-equal.o
	rm -f compiled/test-mac-unequal.o
	rm -f compiled/test-mac-lesser.o
	rm -f compiled/test-mac-lesser-or-equal.o
	rm -f compiled/test-mac-greater.o
	rm -f compiled/test-mac-greater-or-equal.o
	rm -f compiled/test-mac-div.o
	rm -f compiled/test-mac-mod.o
	rm -f compiled/test-mac-to-int.o
	rm -f compiled/test-mac-lognot.o
	rm -f compiled/test-mac-logand.o
	rm -f compiled/test-mac-logor.o
	rm -f compiled/test-mac-logxor.o
	rm -f compiled/test-mac-while.o
	rm -f compiled/test-mac-until.o
	rm -f compiled/test-mac-lshift.o
	rm -f compiled/test-mac-rshift.o
	rm -f compiled/test-mac-dotimes.o

test: .always
	make test.exe
	./test.exe

mac.h: $(DISTDIR)/mac.h
	cp $(DISTDIR)/mac.h mac.h

test.exe: test.h mac.h compiled/main.o compiled/test-mac-bool.o compiled/test-mac-inc.o compiled/test-mac-dec.o compiled/test-mac-if.o compiled/test-mac-not.o compiled/test-mac-and.o compiled/test-mac-or.o compiled/test-mac-add.o compiled/test-mac-sub.o compiled/test-mac-mul.o compiled/test-mac-equal.o compiled/test-mac-unequal.o compiled/test-mac-lesser.o compiled/test-mac-lesser-or-equal.o compiled/test-mac-greater.o compiled/test-mac-greater-or-equal.o compiled/test-mac-div.o compiled/test-mac-mod.o compiled/test-mac-to-int.o compiled/test-mac-lognot.o compiled/test-mac-logand.o compiled/test-mac-logor.o compiled/test-mac-logxor.o compiled/test-mac-while.o compiled/test-mac-until.o compiled/test-mac-lshift.o compiled/test-mac-rshift.o compiled/test-mac-dotimes.o
	gcc $(CFLAGS) compiled/main.o compiled/test-mac-bool.o compiled/test-mac-inc.o compiled/test-mac-dec.o compiled/test-mac-if.o compiled/test-mac-not.o compiled/test-mac-and.o compiled/test-mac-or.o compiled/test-mac-add.o compiled/test-mac-sub.o compiled/test-mac-mul.o compiled/test-mac-equal.o compiled/test-mac-unequal.o compiled/test-mac-lesser.o compiled/test-mac-lesser-or-equal.o compiled/test-mac-greater.o compiled/test-mac-greater-or-equal.o compiled/test-mac-div.o compiled/test-mac-mod.o compiled/test-mac-to-int.o compiled/test-mac-lognot.o compiled/test-mac-logand.o compiled/test-mac-logor.o compiled/test-mac-logxor.o compiled/test-mac-while.o compiled/test-mac-until.o compiled/test-mac-lshift.o compiled/test-mac-rshift.o compiled/test-mac-dotimes.o -o test.exe

compiled/main.o: test.h mac.h src/main.c 
	gcc $(CFLAGS) -c src/main.c -o compiled/main.o

compiled/test-mac-bool.o: test.h mac.h src/test-mac-bool.c 
	gcc $(CFLAGS) -c src/test-mac-bool.c -o compiled/test-mac-bool.o

compiled/test-mac-inc.o: test.h mac.h src/test-mac-inc.c 
	gcc $(CFLAGS) -c src/test-mac-inc.c -o compiled/test-mac-inc.o

compiled/test-mac-dec.o: test.h mac.h src/test-mac-dec.c 
	gcc $(CFLAGS) -c src/test-mac-dec.c -o compiled/test-mac-dec.o

compiled/test-mac-if.o: test.h mac.h src/test-mac-if.c 
	gcc $(CFLAGS) -c src/test-mac-if.c -o compiled/test-mac-if.o

compiled/test-mac-not.o: test.h mac.h src/test-mac-not.c 
	gcc $(CFLAGS) -c src/test-mac-not.c -o compiled/test-mac-not.o

compiled/test-mac-and.o: test.h mac.h src/test-mac-and.c 
	gcc $(CFLAGS) -c src/test-mac-and.c -o compiled/test-mac-and.o

compiled/test-mac-or.o: test.h mac.h src/test-mac-or.c 
	gcc $(CFLAGS) -c src/test-mac-or.c -o compiled/test-mac-or.o

compiled/test-mac-add.o: test.h mac.h src/test-mac-add.c 
	gcc $(CFLAGS) -c src/test-mac-add.c -o compiled/test-mac-add.o

compiled/test-mac-sub.o: test.h mac.h src/test-mac-sub.c 
	gcc $(CFLAGS) -c src/test-mac-sub.c -o compiled/test-mac-sub.o

compiled/test-mac-mul.o: test.h mac.h src/test-mac-mul.c 
	gcc $(CFLAGS) -c src/test-mac-mul.c -o compiled/test-mac-mul.o

compiled/test-mac-equal.o: test.h mac.h src/test-mac-equal.c 
	gcc $(CFLAGS) -c src/test-mac-equal.c -o compiled/test-mac-equal.o

compiled/test-mac-unequal.o: test.h mac.h src/test-mac-unequal.c 
	gcc $(CFLAGS) -c src/test-mac-unequal.c -o compiled/test-mac-unequal.o

compiled/test-mac-lesser.o: test.h mac.h src/test-mac-lesser.c 
	gcc $(CFLAGS) -c src/test-mac-lesser.c -o compiled/test-mac-lesser.o

compiled/test-mac-lesser-or-equal.o: test.h mac.h src/test-mac-lesser-or-equal.c 
	gcc $(CFLAGS) -c src/test-mac-lesser-or-equal.c -o compiled/test-mac-lesser-or-equal.o

compiled/test-mac-greater.o: test.h mac.h src/test-mac-greater.c 
	gcc $(CFLAGS) -c src/test-mac-greater.c -o compiled/test-mac-greater.o

compiled/test-mac-greater-or-equal.o: test.h mac.h src/test-mac-greater-or-equal.c 
	gcc $(CFLAGS) -c src/test-mac-greater-or-equal.c -o compiled/test-mac-greater-or-equal.o

compiled/test-mac-div.o: test.h mac.h src/test-mac-div.c 
	gcc $(CFLAGS) -c src/test-mac-div.c -o compiled/test-mac-div.o

compiled/test-mac-mod.o: test.h mac.h src/test-mac-mod.c 
	gcc $(CFLAGS) -c src/test-mac-mod.c -o compiled/test-mac-mod.o

compiled/test-mac-to-int.o: test.h mac.h src/test-mac-to-int.c 
	gcc $(CFLAGS) -c src/test-mac-to-int.c -o compiled/test-mac-to-int.o

compiled/test-mac-lognot.o: test.h mac.h src/test-mac-lognot.c 
	gcc $(CFLAGS) -c src/test-mac-lognot.c -o compiled/test-mac-lognot.o

compiled/test-mac-logand.o: test.h mac.h src/test-mac-logand.c 
	gcc $(CFLAGS) -c src/test-mac-logand.c -o compiled/test-mac-logand.o

compiled/test-mac-logor.o: test.h mac.h src/test-mac-logor.c 
	gcc $(CFLAGS) -c src/test-mac-logor.c -o compiled/test-mac-logor.o

compiled/test-mac-logxor.o: test.h mac.h src/test-mac-logxor.c 
	gcc $(CFLAGS) -c src/test-mac-logxor.c -o compiled/test-mac-logxor.o

compiled/test-mac-while.o: test.h mac.h src/test-mac-while.c 
	gcc $(CFLAGS) -c src/test-mac-while.c -o compiled/test-mac-while.o

compiled/test-mac-until.o: test.h mac.h src/test-mac-until.c 
	gcc $(CFLAGS) -c src/test-mac-until.c -o compiled/test-mac-until.o

compiled/test-mac-lshift.o: test.h mac.h src/test-mac-lshift.c 
	gcc $(CFLAGS) -c src/test-mac-lshift.c -o compiled/test-mac-lshift.o

compiled/test-mac-rshift.o: test.h mac.h src/test-mac-rshift.c 
	gcc $(CFLAGS) -c src/test-mac-rshift.c -o compiled/test-mac-rshift.o

compiled/test-mac-dotimes.o: test.h mac.h src/test-mac-dotimes.c 
	gcc $(CFLAGS) -c src/test-mac-dotimes.c -o compiled/test-mac-dotimes.o

.always:
