# Makefile for linking kernel modules
MYMODULE = netatop
KERNDIR  = /lib/modules/$(shell uname -r)/build
THISDIR  = $(shell pwd)

all:		netatopd

netatopd:	netatopd.o Makefile
		$(CC) netatopd.o -o netatopd -lz

clean:
		rm -f *.o netatopd

netatopd.o:	../netatop.h	../netatopd.h	../netatopversion.h
