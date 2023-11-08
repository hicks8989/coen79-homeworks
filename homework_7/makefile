STD=-std=c++11
OPT=-g
FLAGS=
CXXFLAGS=${STD} ${OPT} $(FLAGS)
CFLAGS=${OPT}

%.o: %.c
	$(CC) -c $(CFLAGS) $<

%.o: %.cxx
	$(CXX) -c $(CXXFLAGS) $<

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $<

%: %.c
	$(CC) -o $@ $(CFLAGS) $<

%: %.cxx
	$(CXX) -o $@ $(CXXFLAGS) $<

%: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $<

TMPMAKE=tmpMake

HEADERS=scuorg.h scuperson.h
LLSRCS=scuorg.cpp scuperson.cpp scuorgtest.cpp scuorgmain.cpp
LLOBJS=$(LLSRCS:.cxx=.o)

ALLSRCS= $(LLSRCS)
ALLOBJS= $(ALLSRCS:.cxx=.o)
ALL= scuorg

all:	$(ALL)	

scuorg:	$(LLOBJS)
	$(CXX) -o $@ $(CXXFLAGS) $+

tar:
	tar cf scuorg.tar $(LLSRCS) scuorg.h scuperson.h scuclass.test Makefile
clean:
	/bin/rm -f $(ALL) $(ALLOBJS) linkedlist.tar

depend: $(ALLSRCS)
	/bin/rm -f $(TMPMAKE)
	sed -e '/^# DEPENDENTS/,$$d' Makefile > $(TMPMAKE)
	echo '# DEPENDENTS' >> $(TMPMAKE)
	$(CXX) -MM $+ >> $(TMPMAKE)
	/bin/mv -f $(TMPMAKE) Makefile

# DEPENDENTS
scuorg.o: scuorg.cpp scuorg.h
scuperson.o: scuperson.cpp scuperson.h
scuorgtest.o: scuorgtest.cpp scuorg.h
scuorgmain.o: scumain.cpp scuorg.h
