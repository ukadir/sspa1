# Programming Assignment 1: C++ Review

In this Programming Assignment, you will be reviewing some principles of C++ to ensure that you are ready for the future (more involved) Programming Assignments and Projects.

## Part 0: Setup

Work through the [SETUP.md](SETUP.md) document to configure your development environment.

## Part 1: Hello, World! (10 points)

In the world of programming, a ["Hello, World!" program](https://en.wikipedia.org/wiki/%22Hello,_World!%22_program) is a simple computer program that generally does something simple such as output a short string of text (e.g. ``"Hello, World!"``) in order to test basic functionality of your environment.

### Task: Edit [``HelloWorld.cpp``](HelloWorld.cpp)

In this repository, there is a file called [``HelloWorld.cpp``](HelloWorld.cpp) that is currently essentially blank. In this part of the assignment, you will fill in the code in order to make a program that works as follows:

* It must first prompt the user with the message ``Enter name:``
* Then, the user must type in their name and hit the ``ENTER`` key
* Then, the program must print the message ``Hello, <NAME>!`` on one line followed by ``Welcome to CSE 100!`` on the next line

We will compile your code as follows:

```
g++ -Wall -pedantic -O0 -g -std=c++11 -o HelloWorld HelloWorld.cpp
```

> ### 🛠 Know Your Tools - g++
>
> g++ is the C++ compiler of the [GNU compiler collection (GCC)](https://gcc.gnu.org/)
>
> In the command above we pass the following optional flags to g++:
>  
> * `-Wall`: The flag `-W<warning>` tells g++ which compiler warnings to enable. Please check [this page](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html) to see which compiler warnings are enabled when using `-Wall`.
> * `-pedantic`: Short for `-Wpedantic`. With this flag g++ issues warnings when the program makes use of C++ features that were not adopted into the ISO standard. For example certain GNU extensions and traditional C++ features.
> * `-O0`: The flag `-O<level>` tells g++ which compiler optimization level to use. Please check [this page](https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html) to see what compiler optimization level we enabled and why. Please take a look as well at the other available optimization levels.
> * `-g`: The flag `-g<format>` makes g++ produce debugging information in the specified format. By default the [GDB](https://www.gnu.org/software/gdb/) format is used. Please check [this page](https://gcc.gnu.org/onlinedocs/gcc/Debugging-Options.html) for more information on the available debugging options.
> * `-std=c++11`: The flag `-std=<standard>` specifies which C++ language standard to support during compilation. You can find information about C++ standards [here](https://gcc.gnu.org/onlinedocs/gcc/Standards.html) and information about C++ dialects [here](https://gcc.gnu.org/onlinedocs/gcc/C-Dialect-Options.html).
> * `-o HelloWorld`: The flag `-o file` tells g++ to place its output in file `file`.  This applies to whatever sort of output is being produced, whether it be an executable file, an [object file](https://en.wikipedia.org/wiki/Object_file) or something else. If `-o` is not specified, the default is to put an executable file in `a.out`, the object file for `source.suffix` in `source.o`, its [assembler file](https://en.wikipedia.org/wiki/GNU_Assembler) in `source.s`, a [precompiled header file](https://gcc.gnu.org/onlinedocs/gcc/Precompiled-Headers.html) in `source.suffix.gch`, and all [preprocessed source](https://en.wikipedia.org/wiki/C_preprocessor) on standard output.
>
> To learn more about g++ you can run `man g++` or `g++ --help` in your terminal.

Here's an example of how it should look when it's compiled and run from the command line (assuming I enter the name ``Niema``):

```console
$ g++ -Wall -pedantic -O0 -g -std=c++11 -o HelloWorld HelloWorld.cpp
$ ./HelloWorld
Enter name: Niema
Hello, Niema!
Welcome to CSE 100!
```

> ### 🛠 Know Your Tools - GDB
>
> [GDB](https://www.gnu.org/software/gdb/) is the GNU Project Debugger.
> When your C++ program is compiled by g++ with the `-g` flag, then GDB will be able to help you debug your code.
>
> You can run GDB like so: `gdb ./HelloWorld`
>
> To run the program, run the following while inside gdb: `run <program arguments go here>`
>
> To create a breakpoint, run the following while inside gdb before running the program: `break HelloWorld.cpp:12`
>
> To print a variable's value, run: `print myVariable`  
> To continue to the next breakpoint run: `continue`
>
> For more information about gdb you can run `help` while in gdb or refer to [this page](https://sourceware.org/gdb/current/onlinedocs/gdb/).

## Part 2: Swap (25 points)

In Java, we were unable to write methods to swap the values of two variables because everything in Java is **pass-by-value**: local variables inside of the method are *copies* of the variables that were passed in. In C++, however, we can take advantage of **pass-by-reference** to *finally* implement a swap function!

### Task: Edit [``Swap.cpp``](Swap.cpp)

In this repository, there is a file called [``Swap.cpp``](Swap.cpp) that is currently essentially blank. In this part of the assignment, you will fill in the code in order write a global function called ``swap`` that swaps the values of two ``int`` arguments. We have provided a tester program, [``SwapTest``](SwapTest.cpp), that will help you test your code. You can compile it as follows:

```
g++ -Wall -pedantic -O0 -g -std=c++11 -o SwapTest SwapTest.cpp Swap.cpp
```

Here's an example of how it should look like when it's compiled and run from the command line (assuming I enter the numbers ``21`` and ``42``):

```console
$ g++ -Wall -pedantic -O0 -g -std=c++11 -o SwapTest SwapTest.cpp Swap.cpp
$ ./SwapTest
Enter first number: 21
Enter second number: 42
42 21
```

## Part 3: The Fast Saga (25 points)

Arguably one of the most amazing masterpieces of our time, the [Fast Saga](https://en.wikipedia.org/wiki/Fast_%26_Furious) is a series of movies that will have you yelling "Ejecto seato, cuz!" and living your life a quarter mile at a time. What started as a humble early-2000s film about street racing somehow evolved into the most ambitious cinematic universe in existence (that's right; step aside, [MCU](https://en.wikipedia.org/wiki/Marvel_Cinematic_Universe)). The only problem is that they keep churning out new entries in the [main series](https://en.wikipedia.org/wiki/Fast_%26_Furious#The_Fast_Saga), [spin-off movies](https://en.wikipedia.org/wiki/Fast_%26_Furious#Spin-off_films_2), and... even an [animated Netflix Original TV show](https://en.wikipedia.org/wiki/Fast_%26_Furious_Spy_Racers)?? When did that happen?? Regardless, the frequent releases and largely inconsistent naming schemes ([F9](https://en.wikipedia.org/wiki/F9_(film))? Seriously? How is anybody going to Google that?) make the Fast Saga pretty hard to keep track of. Fortunately for us, we're amazing programmers!

### Task: Edit [``FastSaga.cpp``](FastSaga.cpp)

In this repository, there is a file called [``FastSaga.cpp``](FastSaga.cpp) that contains the initial steps towards writing a custom ``FastSaga`` class to store the Fast Saga movie titles. It essentially wraps around a C++ [``vector``](http://www.cplusplus.com/reference/vector/vector/), with each movie title stored as a [``string``](http://www.cplusplus.com/reference/string/string/). We want to be able to iterate over the elements of a ``FastSaga`` object in-order using an [``iterator``](http://www.cplusplus.com/reference/iterator/) (e.g. using a [for-each](https://www.geeksforgeeks.org/g-fact-40-foreach-in-c-and-java/) loop). All that remains is that you need to fill in the ``begin()`` and ``end()`` functions. Note that you do *not* need to use a for-each loop (or any loop at all!) inside of these methods: implementing these two methods *allows* one to *iterate over* a ``FastSaga`` object using a for-each loop (as we do in the ``main()`` function of [``FastSagaTest.cpp``](FastSagaTest.cpp)).

We have provided a tester program, [``FastSagaTest``](FastSagaTest.cpp), that will help you test your code. You can compile it as follows:

```
g++ -Wall -pedantic -O0 -g -std=c++11 -o FastSagaTest FastSagaTest.cpp FastSaga.cpp
```

Here's an example of how it should look like when it's compiled and run from the command line:

```console
$ g++ -Wall -pedantic -O0 -g -std=c++11 -o FastSagaTest FastSagaTest.cpp FastSaga.cpp
$ ./FastSagaTest
The Fast and the Furious
2 Fast 2 Furious
The Fast and the Furious: Tokyo Drift
Fast & Furious
Fast Five
Fast & Furious 6
Furious 7
The Fate of the Furious
Fast & Furious Presents: Hobbs & Shaw
F9
```

## Part 4: Implementing a Queue (25 points)

This course is an ***Advanced*** Data Structures course, meaning we anticipate that you already have prior experience implementing Data Structures and Abstract Data Types (ADTs). One such Data Structure with which we expect you to be familiar is the [Linked List](https://en.wikipedia.org/wiki/Linked_list), and one such ADT with which we expect you to be familiar is the [Queue](https://en.wikipedia.org/wiki/Queue_(abstract_data_type)).

### Task: Edit [``Queue.cpp``](Queue.cpp)

In this repository, there is a file called [``Queue.cpp``](Queue.cpp) that contains the initial steps towards writing a Queue ADT implementation using a Singly-Linked List. Function headers (with usage details) are included in [``Queue.h``](Queue.h), and you need to fill in the constructor, destructor, and all functions.

We have provided a tester program, [``QueueTest``](QueueTest.cpp), that will help you test your code. You can compile it as follows:

```
g++ -Wall -pedantic -O0 -g -std=c++11 -o QueueTest QueueTest.cpp Queue.cpp
```

Here's an example of how it should look like when it's compiled and run from the command line:

```console
$ g++ -Wall -pedantic -O0 -g -std=c++11 -o QueueTest QueueTest.cpp Queue.cpp
$ ./QueueTest
Success
```

If it prints anything *other* than ``Success``, that means it has bugs. We expect you to be able to debug your code however you feel is best (e.g. print statements, ``gdb``, etc.).

### Checking for Memory Leaks

Remember that you will be dynamically creating ``Node`` objects, so beware of memory leaks! You can use ``valgrind`` to check for memory leaks. For example, you can run it as follows:

```
valgrind --tool=memcheck --leak-check=yes ./QueueTest
```

If it gives you a report like the following, you do not have memory leaks and are good to go (the important part is ``All heap blocks were freed -- no leaks are possible``):

```
==160== Memcheck, a memory error detector
==160== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==160== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==160== Command: ./QueueTest
==160==
==160== error calling PR_SET_PTRACER, vgdb might block
==160==
==160== HEAP SUMMARY:
==160==     in use at exit: 0 bytes in 0 blocks
==160==   total heap usage: 661 allocs, 661 frees, 96,282 bytes allocated
==160==
==160== All heap blocks were freed -- no leaks are possible
==160==
==160== For counts of detected and suppressed errors, rerun with: -v
==160== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

If you *do* have memory leaks, the report will look something like the following:

```
==186== Memcheck, a memory error detector
==186== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==186== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==186== Command: ./QueueTest
==186==
==186== error calling PR_SET_PTRACER, vgdb might block
==186==
==186== HEAP SUMMARY:
==186==     in use at exit: 3,226 bytes in 95 blocks
==186==   total heap usage: 500 allocs, 405 frees, 91,530 bytes allocated
==186==
==186== 3,226 (40 direct, 3,186 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==186==    at 0x4C3017F: operator new(unsigned long) (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==186==    by 0x10AB2E: Queue::push(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) (in /mnt/c/Users/niema/Desktop/PA1-Solution/QueueTest)
==186==    by 0x109B1D: main (in /mnt/c/Users/niema/Desktop/PA1-Solution/QueueTest)
==186==
==186== LEAK SUMMARY:
==186==    definitely lost: 40 bytes in 1 blocks
==186==    indirectly lost: 3,186 bytes in 94 blocks
==186==      possibly lost: 0 bytes in 0 blocks
==186==    still reachable: 0 bytes in 0 blocks
==186==         suppressed: 0 bytes in 0 blocks
==186==
==186== For counts of detected and suppressed errors, rerun with: -v
==186== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
```

> ### 🛠 Know Your Tools - Valgrind
>
> [Valgrind](https://www.valgrind.org/) tools are what is called "dynamic analysis" tools. Valgrind itself is a framework for building dynamic analysis tools. There are also tools which are called "static analysis" tools, examples of those are [cppcheck](http://cppcheck.sourceforge.net/) and [scan-build](https://clang-analyzer.llvm.org/scan-build.html).
> The difference between these two classes of analysis tools is that where static analysis tools purely look at your source code, dynamic analysis tools actually run your compiled program.
> The purpose of analysis tools in general is to help you find hidden bugs in your program.
>
> Static analysis tools can give you hints such as:
>
> * Consider using a reference instead of a value here
> * This code may lead to an infinite loop if variable x has value y
> * This code may lead to a SEGFAULT if variable x has value y
>
> Valgrind's main use case is to detect memory management bugs in your code.
>
> In the valgrind call above we pass the following optional flags:
>  
> * `--tool=memcheck`: The `--tool=<toolname>` [option](https://valgrind.org/docs/manual/manual-core.html#manual-core.options) tells valgrind what kind of analysis to perform on the program.
> * `--leak-check=yes`: The `--leak-check=<value>` option tells valgrind how much information to report about any memory leaks. More information about this option can be found [here](https://valgrind.org/docs/manual/mc-manual.html#mc-manual.leaks).

## General Tips

We have provided a [``Makefile``](Makefile) to make compilation more convenient. Instead of having to type the ``g++ ...`` command each time you want to recompile your code, you can simply type ``make``. Here's an example of how it should look:

```console
$ make
g++ -Wall -pedantic -O0 -g -std=c++11 -o HelloWorld HelloWorld.cpp
g++ -Wall -pedantic -O0 -g -std=c++11 -o SwapTest SwapTest.cpp Swap.cpp
g++ -Wall -pedantic -O0 -g -std=c++11 -o FastSagaTest FastSagaTest.cpp FastSaga.cpp
g++ -Wall -pedantic -O0 -g -std=c++11 -o QueueTest QueueTest.cpp Queue.cpp
```

If you want to clean up your environment by deleting all the compiled executables, you can simply type ``make clean``. Here's an example of how it should look:

```console
$ make clean
rm -f HelloWorld SwapTest FastSagaTest QueueTest *.o
```

Feel free to [read more about what a ``Makefile`` does](https://www.geeksforgeeks.org/makefile-in-c-and-its-applications/) if you're curious!

## Academic Integrity

This Programming Assignment (PA) must be completed 100% independently! You may only discuss the PA with the Tutors, TAs, and Instructors. You are free to use resources from the internet, but you are not allowed to blatantly copy-and-paste code. If you ever find yourself highlighting a code snippet, copying, and pasting into your PA, you are likely violating the Academic Integrity Policy. If you have any concerns or doubts regarding what you are about to do, *please* be sure to post on Piazza first to ask us if it is okay.

## Grading (100 points total)

* **Part 1: Hello, World!**
  * 10 points for a correct solution
  * 0 points for an incorrect solution
* **Part 2: Swap**
  * 25 points for a correct solution
  * 0 points for an incorrect solution
* **Part 3: The Fast Saga**
  * 25 points for a correct solution
  * 0 points for an incorrect solution
* **Part 4: Implementing a Queue**
  * 25 points for a correct solution with no memory leaks
  * 15 points for a correct solution with memory leaks
  * 0 points for an incorrect solution
* **Know Your Tools**
  * up to 15 points for the Know Your Tools assignment on gradescope

## Submission

* Run `./create_submission_zip.sh` in your project root.
* Submit `submission.zip` to the programming assignment auto grader on [Gradescope](https://www.gradescope.com/)
* Submit the Know Your Tools assignment on [Gradescope](https://www.gradescope.com/)
* Late submissions **will not be accepted**, check [Gradescope](https://www.gradescope.com/) for the deadlines.
