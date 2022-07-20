CC = clang
RUBY = ruby.exe
INCFLAG = -I
NOLINKFLAG = -c
NOEXFLAG = -Wno-implicit-function-declaration
OUTPUT =
APPSRC = ..\appsrc
CMOCKSRC = ..\CMock-master\src
CMOCKINC = $(CMOCKSRC)
UNITYSRC = ..\Unity-master\src
UNITYINC = $(UNITYSRC)
CMOCKOBJ = cmock.o
UNITYOBJ = unity.o

FUNCOBJ = function1.o function2.o function3.o main.o


func.exe : $(FUNCOBJ) $(UNITYOBJ) $(CMOCKOBJ) 
	@echo Linking $@
	$(CC) -o$@ $**

{$(CMOCKSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(NOEXFLAG) $(OUTPUT) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC)$<
{$(UNITYSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(NOEXFLAG) $(OUTPUT) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC)$<	
{$(APPSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $<



all: func.exe
clean:
	-del *.exe *.o
run: all
	-func.exe