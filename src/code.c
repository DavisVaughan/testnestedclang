#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

SEXP test_code(SEXP x) {
  return ATTRIB(x);
}
