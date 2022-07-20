CC = clang
CFLAGS = -c
APPSRC = ..\appsrc
CMOCKSRC = ..\CMock-master\src
CMOCKINC = $(CMOCKSRC)
UNITYSRC = ..\Unity-master\src
UNITYINC = $(UNITYSRC)
CMOCKOBJ = cmock.o
UNITYOBJ = unity.o

FUNCOBJ = function1.o function2.o function3.o main.o


func.exe : $(FUNCOBJ)
	@echo Linking $@
	$(CC) -o$@ $**


{$(APPSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(CFLAGS) $<



all:
	func.exe
clean:
	-del *.exe *.o
run: all
	-func.exe