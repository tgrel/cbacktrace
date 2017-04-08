# cbacktrace
Extension module for python that allows you to print a **C-level backtrace** from the interpreter **after receiving a SEGFAULT** signal. This may come in handy when your program crashes and you want to print a lowlevel backtrace to pinpoint the problem.

# Installation

To install issue the following commands:
```
git clone https://github.com/tgrel/cbacktrace
cd cbacktrace
python setup.py build
python setup.py install
```

# Example
In order to activate the functionality you need to import the module:
```python
import cbacktrace
````

Should the python process receive a SEGFAULT signal it'll print a nice C-backtrace like this one:
```
/home/tgrel/cbacktrace/cbacktrace.so(handler+0x18)[0x7f]
/lib/x86_64-linux-gnu/libc.so.6(+0x36d40)[0x7f14cf3b7d40]
/lib/x86_64-linux-gnu/libc.so.6(__select+0x33)[0x7f14cf472da3]
/usr/bin/python[0x4a09fd]
/usr/bin/python(PyEval_EvalFrameEx+0x5ed)[0x55431d]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6824)[0x55a554]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6824)[0x55a554]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6824)[0x55a554]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6824)[0x55a554]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6057)[0x559d87]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6824)[0x55a554]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6057)[0x559d87]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6057)[0x559d87]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6824)[0x55a554]
/usr/bin/python[0x56aa8a]
/usr/bin/python(PyObject_Call+0x36)[0x4fb216]
/usr/bin/python(PyEval_EvalFrameEx+0x7713)[0x55b443]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalFrameEx+0x6057)[0x559d87]
/usr/bin/python(PyEval_EvalCodeEx+0x251)[0x574821]
/usr/bin/python(PyEval_EvalCode+0x32)[0x5c0132]
```
