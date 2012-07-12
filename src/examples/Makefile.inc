CC=sdcc
TOHEX=packihx
LIBDIR=../../lib
BUILDDIR=bin
SRCDIR=src
TOOLDIR=../../tools
CFLAGS+=-I$(LIBDIR)

SOURCES =  $(wildcard $(SRCDIR)/*.c)
SOURCES += $(wildcard $(LIBDIR)/*.c)
HEADERS =  $(wildcard $(SRCDIR)/*.h)
HEADERS += $(wildcard $(LIBDIR)/*.h)
 
%.hex: %.ihx
	$(TOHEX) $(BUILDDIR)/$< > $@
 
%.ihx: $(HEADERS) $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o "$(BUILDDIR)//"

.PHONY: clean upload

upload: $(APP)
	$(TOOLDIR)/upload.py upload $<
 
clean: 
	cd $(BUILDDIR); rm -f *.ihx *.hex *.lst *.rst *.sym *.rel *.map *.mem *.adb *.cdb *.asm *.lnk
	rm -f $(APP)
