SEFOS Symbolic Execution For Original SystemC
=============================================

`SEFOS` is an extension of `KLEE` which focuses on hardware models written in SystemC.
It includes two main modifications:
1. A domain-specific threading support based on the PThread SystemC implementation.
2. A technique for minimising the arrays in SMT queries, to support the large object sizes of SystemC modules.

---------------------

KLEE Symbolic Virtual Machine
=============================

`KLEE` is a symbolic virtual machine built on top of the LLVM compiler
infrastructure. Currently, there are two primary components:

  1. The core symbolic virtual machine engine; this is responsible for
     executing LLVM bitcode modules with support for symbolic
     values. This is comprised of the code in lib/.

  2. A POSIX/Linux emulation layer oriented towards supporting uClibc,
     with additional support for making parts of the operating system
     environment symbolic.

Additionally, there is a simple library for replaying computed inputs
on native code (for closed programs). There is also a more complicated
infrastructure for replaying the inputs generated for the POSIX/Linux
emulation layer, which handles running native programs in an
environment that matches a computed test input, including setting up
files, pipes, environment variables, and passing command line
arguments.

For further information, see the [webpage](https://klee-se.org/).
