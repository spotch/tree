
.PHONY : gtest gmock install clean

default : gtest gmock

clean :
	rm -rf gtest.o libgtest.a
	rm -rf gmock.o libgmock.a


GTEST_ROOT = gtest-1.6.0
GTEST_SOURCE_DIR = ${GTEST_ROOT}/src
GTEST_SOURCES += ${GTEST_SOURCE_DIR}/gtest-all.cc

GTEST_INCLUDE_DIRS += -I${GTEST_ROOT}
GTEST_INCLUDE_DIRS += -I${GTEST_ROOT}/include

gtest : libgtest.a

libgtest.a :
	g++ ${GTEST_INCLUDE_DIRS} -I${GTEST_ROOT} ${GTEST_SOURCES} -c -o gtest.o
	ar -rv libgtest.a gtest.o



GMOCK_ROOT = gmock-1.6.0
GMOCK_SOURCE_DIR = ${GMOCK_ROOT}/src
GMOCK_SOURCES += ${GMOCK_SOURCE_DIR}/gmock-all.cc

GMOCK_INCLUDE_DIRS += -I${GMOCK_ROOT}
GMOCK_INCLUDE_DIRS += -I${GMOCK_ROOT}/include

GMOCK_LIB_DIR = -L./
GMOCK_LIBS += -lgtest

gmock : gtest libgmock.a

libgmock.a :
	g++ ${GMOCK_LIB_DIR} ${GMOCK_LIBS} ${GTEST_INCLUDE_DIRS} ${GMOCK_INCLUDE_DIRS} -I${GMOCK_ROOT} ${GMOCK_SOURCES} -c -o gmock.o
	ar -rv libgmock.a gmock.o

install :
	mkdir -p ../test/lib
	cp libgtest.a ../test/lib/
	cp libgmock.a ../test/lib/
