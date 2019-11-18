
export CFLAGS += -g
export ROOTDIR := $(CURDIR)
export DISTDIR := $(CURDIR)/dist

ifndef
	bits := 8
endif

all: .always
	make dist/mac.h

test: .always
	make dist/mac.h
	make test -C test

clean: .always
	rm -f dist/mac.h
	rm -f src/mac-bool.h
	rm -f src/mac-incn.h
	rm -f src/mac-decn.h
	rm -f src/mac-add.h
	rm -f src/mac-sub.h
	rm -f src/mac-mul.h
	rm -f src/mac-div.h
	rm -f src/mac-mod.h
	rm -f src/mac-to-int.h
	rm -f src/mac-lognot.h
	rm -f src/mac-logand.h
	rm -f src/mac-logor.h
	rm -f src/mac-logxor.h
	rm -f src/mac-while.h
	rm -f src/mac-until.h
	rm -f src/mac-lshift.h
	rm -f src/mac-rshift.h
	rm -f src/mac-dotimes.h
	make clean -C test

dist/mac.h: src/mac-concat.h src/mac-bool.h src/mac-incn.h src/mac-decn.h src/mac-if.h src/mac-not.h src/mac-and.h src/mac-or.h src/mac-add.h src/mac-sub.h src/mac-mul.h src/mac-equal.h src/mac-unequal.h src/mac-lesser.h src/mac-lesser-or-equal.h src/mac-greater.h src/mac-greater-or-equal.h src/mac-div.h src/mac-mod.h src/mac-to-int.h src/mac-lognot.h src/mac-logand.h src/mac-logor.h src/mac-logxor.h src/mac-while.h src/mac-until.h src/mac-lshift.h src/mac-rshift.h src/mac-dotimes.h
	cat src/mac-concat.h src/mac-bool.h src/mac-incn.h src/mac-decn.h src/mac-if.h src/mac-not.h src/mac-and.h src/mac-or.h src/mac-add.h src/mac-sub.h src/mac-mul.h src/mac-equal.h src/mac-unequal.h src/mac-lesser.h src/mac-lesser-or-equal.h src/mac-greater.h src/mac-greater-or-equal.h src/mac-div.h src/mac-mod.h src/mac-to-int.h src/mac-lognot.h src/mac-logand.h src/mac-logor.h src/mac-logxor.h src/mac-while.h src/mac-until.h src/mac-lshift.h src/mac-rshift.h src/mac-dotimes.h > dist/mac.h

src/mac-bool.h: src/mac-bool.bash
	bash src/mac-bool.bash $(bits) > src/mac-bool.h

src/mac-incn.h: src/mac-incn.bash
	bash src/mac-incn.bash $(bits) > src/mac-incn.h

src/mac-decn.h: src/mac-decn.bash
	bash src/mac-decn.bash $(bits) > src/mac-decn.h

src/mac-add.h: src/mac-add.bash
	bash src/mac-add.bash $(bits) > src/mac-add.h

src/mac-sub.h: src/mac-sub.bash
	bash src/mac-sub.bash $(bits) > src/mac-sub.h

src/mac-mul.h: src/mac-mul.bash
	bash src/mac-mul.bash $(bits) > src/mac-mul.h

src/mac-div.h: src/mac-div.bash
	bash src/mac-div.bash $(bits) > src/mac-div.h

src/mac-mod.h: src/mac-mod.bash
	bash src/mac-mod.bash $(bits) > src/mac-mod.h

src/mac-to-int.h: src/mac-to-int.bash
	bash src/mac-to-int.bash $(bits) > src/mac-to-int.h

src/mac-lognot.h: src/mac-lognot.bash
	bash src/mac-lognot.bash $(bits) > src/mac-lognot.h

src/mac-logand.h: src/mac-logand.bash
	bash src/mac-logand.bash $(bits) > src/mac-logand.h

src/mac-logor.h: src/mac-logor.bash
	bash src/mac-logor.bash $(bits) > src/mac-logor.h

src/mac-logxor.h: src/mac-logxor.bash
	bash src/mac-logxor.bash $(bits) > src/mac-logxor.h

src/mac-while.h: src/mac-while.bash
	bash src/mac-while.bash $(bits) > src/mac-while.h

src/mac-until.h: src/mac-until.bash
	bash src/mac-until.bash $(bits) > src/mac-until.h

src/mac-lshift.h: src/mac-lshift.bash
	bash src/mac-lshift.bash $(bits) > src/mac-lshift.h

src/mac-rshift.h: src/mac-rshift.bash
	bash src/mac-rshift.bash $(bits) > src/mac-rshift.h

src/mac-dotimes.h: src/mac-dotimes.bash
	bash src/mac-dotimes.bash $(bits) > src/mac-dotimes.h

.always:
