CC = clang
RUBY = ruby.exe
INCFLAG = -I
NOLINKFLAG = -c
NOEXFLAG = -Wno-implicit-function-declaration
OUTPUT =
TESTSRC = ..\testsrc
APPSRC = ..\appsrc
MOCKSRC = ..\mocks
MOCKINC = $(MOCKSRC)
CMOCKSRC = ..\CMock-master\src
CMOCKINC = $(CMOCKSRC)
UNITYSRC = ..\Unity-master\src
UNITYINC = $(UNITYSRC)
CMOCKOBJ = cmock.o
UNITYOBJ = unity.o

FUNC1TESTOBJ = function1.o testfun1.o testfun1_runner.o
FUNC2MOCKOBJ = mockfunction2.o

func.exe : $(FUNC1TESTOBJ) $(UNITYOBJ) $(CMOCKOBJ) $(FUNC2MOCKOBJ)
	@echo Linking $@
	$(CC) -o$@ $**

{$(CMOCKSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(NOEXFLAG) $(OUTPUT) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC) $<

{$(UNITYSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(NOEXFLAG) $(OUTPUT) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC) $<
	
{$(APPSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC) $(INCFLAG)$(APPSRC) $<

{$(MOCKSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(NOEXFLAG) $(OUTPUT) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC) $(INCFLAG)$(APPSRC) $<

{$(TESTSRC)}.c.o ::
	@echo Compiling $<
	$(CC) $(NOLINKFLAG) $(INCFLAG)$(CMOCKINC) $(INCFLAG)$(UNITYINC) $(INCFLAG)$(APPSRC) $<

$(TESTSRC)\testfun1_runner.c: $(TESTSRC)\testfun1.c
	@echo Creating test runner $@
	$(RUBY) ..\Unity-master\auto\generate_test_runner.rb $?

$(MOCKSRC)\mockfunction2.c:	$(APPSRC)\function2.h
	@echo Generating Mock $@
	$(RUBY) ..\CMock-master\lib\cmock.rb -o..\avelle.yml $?


all: func.exe

clean:
	-del *.exe *.o
	-del $(TESTSRC)\*_Runner.c
	-del $(MOCKSRC)\*.c $(MOCKSRC)\*.h

run: all
	-func.exe


