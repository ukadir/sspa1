# use g++ with C++11 support
CXX=g++
CXXFLAGS=-Wall -pedantic -O0 -g -std=c++11
OUTFILES=HelloWorld SwapTest FastSagaTest QueueTest

all: $(OUTFILES)

HelloWorld: HelloWorld.cpp
	$(CXX) $(CXXFLAGS) -o HelloWorld HelloWorld.cpp

SwapTest: SwapTest.cpp Swap.cpp Swap.h
	$(CXX) $(CXXFLAGS) -o SwapTest SwapTest.cpp Swap.cpp

FastSagaTest: FastSagaTest.cpp FastSaga.cpp FastSaga.h
	$(CXX) $(CXXFLAGS) -o FastSagaTest FastSagaTest.cpp FastSaga.cpp

QueueTest: QueueTest.cpp Queue.cpp Queue.h
	$(CXX) $(CXXFLAGS) -o QueueTest QueueTest.cpp Queue.cpp

clean:
	$(RM) $(OUTFILES) *.o
