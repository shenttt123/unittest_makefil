CC = clang
CFLAGS = -c
APPSRC = ..\appsrc
CMOCKSRC = ..\CMock-master\src
CMOCKINC = $(CMOCKSRC)
UNITYSRC = ..\Unity-master\src
UNITYINC = $(UNITYSRC)
CMOCKOBJ = cmock.o
UNITYOBJ = unity.o

OBJ = func.exe
all: $(OBJ)

func.exe: function1.o function2.o function3.o main.o
		$(CC)  function1.o function2.o function3.o main.o -o $(OBJ)


{$(APPSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(CFLAGS) $<



all:
	func.exe
clean:
	-del *.exe *.o
run: all
	-func.exe