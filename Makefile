
INCLUDE_DIRS = -Isrc -Iinclude

SOURCE_DIR = src
SOURCES += ${SOURCE_DIR}/node.cpp
SOURCES += ${SOURCE_DIR}/children_list.cpp
SOURCES += ${SOURCE_DIR}/list_node.cpp



TEST_LIB_DIRS = -Ltest/lib
TEST_LIBS = -lgtest -lgmock -lpthread

TEST_INCLUDE_DIRS = -Itest/include -Itest/src

TEST_SOURCE_DIR = test/src
TEST_SOURCES += ${TEST_SOURCE_DIR}/gtest_main.cc
TEST_SOURCES += ${TEST_SOURCE_DIR}/node_ut.cpp
TEST_SOURCES += ${TEST_SOURCE_DIR}/children_list_ut.cpp
TEST_SOURCES += ${TEST_SOURCE_DIR}/list_node_ut.cpp


.PHONY : tests build clean tools clean_tools

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

clean_tools :
	make -C ./tools/ clean
