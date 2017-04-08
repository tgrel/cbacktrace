/*
 * author: tomasz.grel@gmail.com
 * date 2017-04-08
 */

#include <Python.h>
#include <stdio.h>
#include <stdio.h>
#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
 
static PyMethodDef Methods[] = {
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

/*
 * handler for the SEGFAULT signal
 */
void handler(int sig) {
  const int frames = 100;
  void* buffer[frames];
  size_t size = backtrace(buffer, frames);
  fprintf(stderr, "Received signal %d:\n", sig);
  backtrace_symbols_fd(buffer, size, STDERR_FILENO);
  exit(1);
}

/*
 * initialization function installing the handler
 */ 
PyMODINIT_FUNC
initcbacktrace(void) {
  (void) Py_InitModule("cbacktrace", Methods);
  signal(SIGSEGV, handler);   // install our handler
}


