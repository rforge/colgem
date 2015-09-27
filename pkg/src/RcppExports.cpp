// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;


// simulateTreeCpp2
List simulateTreeCpp2(const NumericVector times, const List Fs, const List Gs, const List Ys, const List As, NumericVector sortedCoHeights, const NumericVector sortedSampleHeights, const NumericMatrix sortedSampleStates, double maxSampleTime, const int m, bool finiteSizeCorrection);
RcppExport SEXP sourceCpp_2_simulateTreeCpp2(SEXP timesSEXP, SEXP FsSEXP, SEXP GsSEXP, SEXP YsSEXP, SEXP AsSEXP, SEXP sortedCoHeightsSEXP, SEXP sortedSampleHeightsSEXP, SEXP sortedSampleStatesSEXP, SEXP maxSampleTimeSEXP, SEXP mSEXP, SEXP finiteSizeCorrectionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< const List >::type Fs(FsSEXP);
    Rcpp::traits::input_parameter< const List >::type Gs(GsSEXP);
    Rcpp::traits::input_parameter< const List >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< const List >::type As(AsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sortedCoHeights(sortedCoHeightsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sortedSampleHeights(sortedSampleHeightsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type sortedSampleStates(sortedSampleStatesSEXP);
    Rcpp::traits::input_parameter< double >::type maxSampleTime(maxSampleTimeSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type finiteSizeCorrection(finiteSizeCorrectionSEXP);
    __result = Rcpp::wrap(simulateTreeCpp2(times, Fs, Gs, Ys, As, sortedCoHeights, sortedSampleHeights, sortedSampleStates, maxSampleTime, m, finiteSizeCorrection));
    return __result;
END_RCPP
}

// dAL
List dAL(double t, NumericVector y, List parms);
RcppExport SEXP sourceCpp_0_dAL(SEXP tSEXP, SEXP ySEXP, SEXP parmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type parms(parmsSEXP);
    __result = Rcpp::wrap(dAL(t, y, parms));
    return __result;
END_RCPP
}

// updateWCpp
NumericMatrix updateWCpp(NumericMatrix W, NumericVector psi_a, IntegerVector utips, IntegerVector vtips, IntegerVector utips_Wcoords, IntegerVector vtips_Wcoords);
RcppExport SEXP sourceCpp_0_updateWCpp(SEXP WSEXP, SEXP psi_aSEXP, SEXP utipsSEXP, SEXP vtipsSEXP, SEXP utips_WcoordsSEXP, SEXP vtips_WcoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type psi_a(psi_aSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type utips(utipsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type vtips(vtipsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type utips_Wcoords(utips_WcoordsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type vtips_Wcoords(vtips_WcoordsSEXP);
    __result = Rcpp::wrap(updateWCpp(W, psi_a, utips, vtips, utips_Wcoords, vtips_Wcoords));
    return __result;
END_RCPP
}
