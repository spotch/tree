
INCLUDE_DIRS = -Isrc -Iinclude

SOURCE_DIR = src
SOURCES += ${SOURCE_DIR}/tree_node.cpp



TEST_LIB_DIRS = -Ltest/lib
TEST_LIBS = -lgtest -lgmock

TEST_INCLUDE_DIRS = -Itest/include

TEST_SOURCE_DIR = test/src
TEST_SOURCES += ${TEST_SOURCE_DIR}/gtest_main.cc


.PHONY : tests build clean tools

default : tests

build :
	g++ ${INCLUDE_DIRS} ${SOURCES} -o tree

tests :
	g++ ${TEST_INCLUDE_DIRS} ${INCLUDE_DIRS} ${SOURCES} ${TEST_SOURCES} ${TEST_LIB_DIRS} ${TEST_LIBS} -o tree.test
	./tree.test

clean :
	rm -rf ./tree
	rm -rf ./tree.test

tools :
	make -C ./tools/
	make -C ./tools/ install
	
