// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// binGenesC
NumericMatrix binGenesC(NumericMatrix ge, CharacterVector bins);
RcppExport SEXP _scCNAutils_binGenesC(SEXP geSEXP, SEXP binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ge(geSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type bins(binsSEXP);
    rcpp_result_gen = Rcpp::wrap(binGenesC(ge, bins));
    return rcpp_result_gen;
END_RCPP
}
// tmmNormC
NumericMatrix tmmNormC(NumericMatrix ge, int cont);
RcppExport SEXP _scCNAutils_tmmNormC(SEXP geSEXP, SEXP contSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ge(geSEXP);
    Rcpp::traits::input_parameter< int >::type cont(contSEXP);
    rcpp_result_gen = Rcpp::wrap(tmmNormC(ge, cont));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scCNAutils_binGenesC", (DL_FUNC) &_scCNAutils_binGenesC, 2},
    {"_scCNAutils_tmmNormC", (DL_FUNC) &_scCNAutils_tmmNormC, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_scCNAutils(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
