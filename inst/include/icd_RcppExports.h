// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __icd_RcppExports_h__
#define __icd_RcppExports_h__

#include <Rcpp.h>

namespace icd {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("icd", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("icd", "icd_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in icd");
            }
        }
    }

    inline SEXP icd9ComorbidShortCpp(const SEXP& icd9df, const Rcpp::List& icd9Mapping, const std::string visitId, const std::string icd9Field, const int threads = 8, const int chunk_size = 256, const int omp_chunk_size = 1, bool aggregate = true) {
        typedef SEXP(*Ptr_icd9ComorbidShortCpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_icd9ComorbidShortCpp p_icd9ComorbidShortCpp = NULL;
        if (p_icd9ComorbidShortCpp == NULL) {
            validateSignature("SEXP(*icd9ComorbidShortCpp)(const SEXP&,const Rcpp::List&,const std::string,const std::string,const int,const int,const int,bool)");
            p_icd9ComorbidShortCpp = (Ptr_icd9ComorbidShortCpp)R_GetCCallable("icd", "icd_icd9ComorbidShortCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ComorbidShortCpp(Rcpp::wrap(icd9df), Rcpp::wrap(icd9Mapping), Rcpp::wrap(visitId), Rcpp::wrap(icd9Field), Rcpp::wrap(threads), Rcpp::wrap(chunk_size), Rcpp::wrap(omp_chunk_size), Rcpp::wrap(aggregate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<SEXP >(__result);
    }

    inline Rcpp::CharacterVector icd9MajMinToCode(const Rcpp::CharacterVector major, const Rcpp::CharacterVector minor, bool isShort) {
        typedef SEXP(*Ptr_icd9MajMinToCode)(SEXP,SEXP,SEXP);
        static Ptr_icd9MajMinToCode p_icd9MajMinToCode = NULL;
        if (p_icd9MajMinToCode == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9MajMinToCode)(const Rcpp::CharacterVector,const Rcpp::CharacterVector,bool)");
            p_icd9MajMinToCode = (Ptr_icd9MajMinToCode)R_GetCCallable("icd", "icd_icd9MajMinToCode");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToCode(Rcpp::wrap(major), Rcpp::wrap(minor), Rcpp::wrap(isShort));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9MajMinToShort(const Rcpp::CharacterVector major, const Rcpp::CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToShort)(SEXP,SEXP);
        static Ptr_icd9MajMinToShort p_icd9MajMinToShort = NULL;
        if (p_icd9MajMinToShort == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9MajMinToShort)(const Rcpp::CharacterVector,const Rcpp::CharacterVector)");
            p_icd9MajMinToShort = (Ptr_icd9MajMinToShort)R_GetCCallable("icd", "icd_icd9MajMinToShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToShort(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9MajMinToDecimal(const Rcpp::CharacterVector major, const Rcpp::CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToDecimal)(SEXP,SEXP);
        static Ptr_icd9MajMinToDecimal p_icd9MajMinToDecimal = NULL;
        if (p_icd9MajMinToDecimal == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9MajMinToDecimal)(const Rcpp::CharacterVector,const Rcpp::CharacterVector)");
            p_icd9MajMinToDecimal = (Ptr_icd9MajMinToDecimal)R_GetCCallable("icd", "icd_icd9MajMinToDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToDecimal(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9PartsToShort(const Rcpp::List parts) {
        typedef SEXP(*Ptr_icd9PartsToShort)(SEXP);
        static Ptr_icd9PartsToShort p_icd9PartsToShort = NULL;
        if (p_icd9PartsToShort == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9PartsToShort)(const Rcpp::List)");
            p_icd9PartsToShort = (Ptr_icd9PartsToShort)R_GetCCallable("icd", "icd_icd9PartsToShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9PartsToShort(Rcpp::wrap(parts));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9PartsToDecimal(const Rcpp::List parts) {
        typedef SEXP(*Ptr_icd9PartsToDecimal)(SEXP);
        static Ptr_icd9PartsToDecimal p_icd9PartsToDecimal = NULL;
        if (p_icd9PartsToDecimal == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9PartsToDecimal)(const Rcpp::List)");
            p_icd9PartsToDecimal = (Ptr_icd9PartsToDecimal)R_GetCCallable("icd", "icd_icd9PartsToDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9PartsToDecimal(Rcpp::wrap(parts));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::List icd9MajMinToParts(const Rcpp::CharacterVector major, const Rcpp::CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToParts)(SEXP,SEXP);
        static Ptr_icd9MajMinToParts p_icd9MajMinToParts = NULL;
        if (p_icd9MajMinToParts == NULL) {
            validateSignature("Rcpp::List(*icd9MajMinToParts)(const Rcpp::CharacterVector,const Rcpp::CharacterVector)");
            p_icd9MajMinToParts = (Ptr_icd9MajMinToParts)R_GetCCallable("icd", "icd_icd9MajMinToParts");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToParts(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline Rcpp::List icd9ShortToPartsCpp(const Rcpp::CharacterVector icd9Short, const Rcpp::String minorEmpty) {
        typedef SEXP(*Ptr_icd9ShortToPartsCpp)(SEXP,SEXP);
        static Ptr_icd9ShortToPartsCpp p_icd9ShortToPartsCpp = NULL;
        if (p_icd9ShortToPartsCpp == NULL) {
            validateSignature("Rcpp::List(*icd9ShortToPartsCpp)(const Rcpp::CharacterVector,const Rcpp::String)");
            p_icd9ShortToPartsCpp = (Ptr_icd9ShortToPartsCpp)R_GetCCallable("icd", "icd_icd9ShortToPartsCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ShortToPartsCpp(Rcpp::wrap(icd9Short), Rcpp::wrap(minorEmpty));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline Rcpp::List icd9DecimalToPartsCpp(const Rcpp::CharacterVector icd9Decimal, const Rcpp::String minorEmpty) {
        typedef SEXP(*Ptr_icd9DecimalToPartsCpp)(SEXP,SEXP);
        static Ptr_icd9DecimalToPartsCpp p_icd9DecimalToPartsCpp = NULL;
        if (p_icd9DecimalToPartsCpp == NULL) {
            validateSignature("Rcpp::List(*icd9DecimalToPartsCpp)(const Rcpp::CharacterVector,const Rcpp::String)");
            p_icd9DecimalToPartsCpp = (Ptr_icd9DecimalToPartsCpp)R_GetCCallable("icd", "icd_icd9DecimalToPartsCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9DecimalToPartsCpp(Rcpp::wrap(icd9Decimal), Rcpp::wrap(minorEmpty));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::List >(__result);
    }

    inline Rcpp::CharacterVector icd9ShortToDecimalCpp(const Rcpp::CharacterVector x) {
        typedef SEXP(*Ptr_icd9ShortToDecimalCpp)(SEXP);
        static Ptr_icd9ShortToDecimalCpp p_icd9ShortToDecimalCpp = NULL;
        if (p_icd9ShortToDecimalCpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9ShortToDecimalCpp)(const Rcpp::CharacterVector)");
            p_icd9ShortToDecimalCpp = (Ptr_icd9ShortToDecimalCpp)R_GetCCallable("icd", "icd_icd9ShortToDecimalCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ShortToDecimalCpp(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9DecimalToShortCpp(const Rcpp::CharacterVector x) {
        typedef SEXP(*Ptr_icd9DecimalToShortCpp)(SEXP);
        static Ptr_icd9DecimalToShortCpp p_icd9DecimalToShortCpp = NULL;
        if (p_icd9DecimalToShortCpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9DecimalToShortCpp)(const Rcpp::CharacterVector)");
            p_icd9DecimalToShortCpp = (Ptr_icd9DecimalToShortCpp)R_GetCCallable("icd", "icd_icd9DecimalToShortCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9DecimalToShortCpp(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd_get_major_icd9(const Rcpp::CharacterVector x, const bool short_code) {
        typedef SEXP(*Ptr_icd_get_major_icd9)(SEXP,SEXP);
        static Ptr_icd_get_major_icd9 p_icd_get_major_icd9 = NULL;
        if (p_icd_get_major_icd9 == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd_get_major_icd9)(const Rcpp::CharacterVector,const bool)");
            p_icd_get_major_icd9 = (Ptr_icd_get_major_icd9)R_GetCCallable("icd", "icd_icd_get_major_icd9");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd_get_major_icd9(Rcpp::wrap(x), Rcpp::wrap(short_code));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline std::vector<bool> icd9_is_n_cpp(const std::vector<std::string>& sv) {
        typedef SEXP(*Ptr_icd9_is_n_cpp)(SEXP);
        static Ptr_icd9_is_n_cpp p_icd9_is_n_cpp = NULL;
        if (p_icd9_is_n_cpp == NULL) {
            validateSignature("std::vector<bool>(*icd9_is_n_cpp)(const std::vector<std::string>&)");
            p_icd9_is_n_cpp = (Ptr_icd9_is_n_cpp)R_GetCCallable("icd", "icd_icd9_is_n_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9_is_n_cpp(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9_is_v_cpp(const std::vector<std::string>& sv) {
        typedef SEXP(*Ptr_icd9_is_v_cpp)(SEXP);
        static Ptr_icd9_is_v_cpp p_icd9_is_v_cpp = NULL;
        if (p_icd9_is_v_cpp == NULL) {
            validateSignature("std::vector<bool>(*icd9_is_v_cpp)(const std::vector<std::string>&)");
            p_icd9_is_v_cpp = (Ptr_icd9_is_v_cpp)R_GetCCallable("icd", "icd_icd9_is_v_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9_is_v_cpp(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9_is_e_cpp(const std::vector<std::string>& sv) {
        typedef SEXP(*Ptr_icd9_is_e_cpp)(SEXP);
        static Ptr_icd9_is_e_cpp p_icd9_is_e_cpp = NULL;
        if (p_icd9_is_e_cpp == NULL) {
            validateSignature("std::vector<bool>(*icd9_is_e_cpp)(const std::vector<std::string>&)");
            p_icd9_is_e_cpp = (Ptr_icd9_is_e_cpp)R_GetCCallable("icd", "icd_icd9_is_e_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9_is_e_cpp(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline Rcpp::CharacterVector icd9LongToWideCpp(const SEXP& icd9df, const std::string visitId, const std::string icd9Field, bool aggregate = true) {
        typedef SEXP(*Ptr_icd9LongToWideCpp)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_icd9LongToWideCpp p_icd9LongToWideCpp = NULL;
        if (p_icd9LongToWideCpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9LongToWideCpp)(const SEXP&,const std::string,const std::string,bool)");
            p_icd9LongToWideCpp = (Ptr_icd9LongToWideCpp)R_GetCCallable("icd", "icd_icd9LongToWideCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9LongToWideCpp(Rcpp::wrap(icd9df), Rcpp::wrap(visitId), Rcpp::wrap(icd9Field), Rcpp::wrap(aggregate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::String icd9AddLeadingZeroesMajorSingle(Rcpp::String major) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroesMajorSingle)(SEXP);
        static Ptr_icd9AddLeadingZeroesMajorSingle p_icd9AddLeadingZeroesMajorSingle = NULL;
        if (p_icd9AddLeadingZeroesMajorSingle == NULL) {
            validateSignature("Rcpp::String(*icd9AddLeadingZeroesMajorSingle)(Rcpp::String)");
            p_icd9AddLeadingZeroesMajorSingle = (Ptr_icd9AddLeadingZeroesMajorSingle)R_GetCCallable("icd", "icd_icd9AddLeadingZeroesMajorSingle");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroesMajorSingle(Rcpp::wrap(major));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::String >(__result);
    }

    inline std::string icd9AddLeadingZeroesMajorSingleStd(std::string m) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroesMajorSingleStd)(SEXP);
        static Ptr_icd9AddLeadingZeroesMajorSingleStd p_icd9AddLeadingZeroesMajorSingleStd = NULL;
        if (p_icd9AddLeadingZeroesMajorSingleStd == NULL) {
            validateSignature("std::string(*icd9AddLeadingZeroesMajorSingleStd)(std::string)");
            p_icd9AddLeadingZeroesMajorSingleStd = (Ptr_icd9AddLeadingZeroesMajorSingleStd)R_GetCCallable("icd", "icd_icd9AddLeadingZeroesMajorSingleStd");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroesMajorSingleStd(Rcpp::wrap(m));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::string >(__result);
    }

    inline Rcpp::CharacterVector icd9_add_leading_zeroes_major(Rcpp::CharacterVector major) {
        typedef SEXP(*Ptr_icd9_add_leading_zeroes_major)(SEXP);
        static Ptr_icd9_add_leading_zeroes_major p_icd9_add_leading_zeroes_major = NULL;
        if (p_icd9_add_leading_zeroes_major == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9_add_leading_zeroes_major)(Rcpp::CharacterVector)");
            p_icd9_add_leading_zeroes_major = (Ptr_icd9_add_leading_zeroes_major)R_GetCCallable("icd", "icd_icd9_add_leading_zeroes_major");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9_add_leading_zeroes_major(Rcpp::wrap(major));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9_add_leading_zeroes_icd_short_code(Rcpp::CharacterVector x) {
        typedef SEXP(*Ptr_icd9_add_leading_zeroes_icd_short_code)(SEXP);
        static Ptr_icd9_add_leading_zeroes_icd_short_code p_icd9_add_leading_zeroes_icd_short_code = NULL;
        if (p_icd9_add_leading_zeroes_icd_short_code == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9_add_leading_zeroes_icd_short_code)(Rcpp::CharacterVector)");
            p_icd9_add_leading_zeroes_icd_short_code = (Ptr_icd9_add_leading_zeroes_icd_short_code)R_GetCCallable("icd", "icd_icd9_add_leading_zeroes_icd_short_code");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9_add_leading_zeroes_icd_short_code(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9_add_leading_zeroes_icd_decimal_code(Rcpp::CharacterVector x) {
        typedef SEXP(*Ptr_icd9_add_leading_zeroes_icd_decimal_code)(SEXP);
        static Ptr_icd9_add_leading_zeroes_icd_decimal_code p_icd9_add_leading_zeroes_icd_decimal_code = NULL;
        if (p_icd9_add_leading_zeroes_icd_decimal_code == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9_add_leading_zeroes_icd_decimal_code)(Rcpp::CharacterVector)");
            p_icd9_add_leading_zeroes_icd_decimal_code = (Ptr_icd9_add_leading_zeroes_icd_decimal_code)R_GetCCallable("icd", "icd_icd9_add_leading_zeroes_icd_decimal_code");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9_add_leading_zeroes_icd_decimal_code(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9AddLeadingZeroes(Rcpp::CharacterVector icd9, bool isShort) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroes)(SEXP,SEXP);
        static Ptr_icd9AddLeadingZeroes p_icd9AddLeadingZeroes = NULL;
        if (p_icd9AddLeadingZeroes == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9AddLeadingZeroes)(Rcpp::CharacterVector,bool)");
            p_icd9AddLeadingZeroes = (Ptr_icd9AddLeadingZeroes)R_GetCCallable("icd", "icd_icd9AddLeadingZeroes");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroes(Rcpp::wrap(icd9), Rcpp::wrap(isShort));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9ExpandMinorShim(std::string minor, bool isE = false) {
        typedef SEXP(*Ptr_icd9ExpandMinorShim)(SEXP,SEXP);
        static Ptr_icd9ExpandMinorShim p_icd9ExpandMinorShim = NULL;
        if (p_icd9ExpandMinorShim == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9ExpandMinorShim)(std::string,bool)");
            p_icd9ExpandMinorShim = (Ptr_icd9ExpandMinorShim)R_GetCCallable("icd", "icd_icd9ExpandMinorShim");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ExpandMinorShim(Rcpp::wrap(minor), Rcpp::wrap(isE));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9ChildrenShortCpp(Rcpp::CharacterVector icd9Short, bool onlyReal) {
        typedef SEXP(*Ptr_icd9ChildrenShortCpp)(SEXP,SEXP);
        static Ptr_icd9ChildrenShortCpp p_icd9ChildrenShortCpp = NULL;
        if (p_icd9ChildrenShortCpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9ChildrenShortCpp)(Rcpp::CharacterVector,bool)");
            p_icd9ChildrenShortCpp = (Ptr_icd9ChildrenShortCpp)R_GetCCallable("icd", "icd_icd9ChildrenShortCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ChildrenShortCpp(Rcpp::wrap(icd9Short), Rcpp::wrap(onlyReal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9ChildrenDecimalCpp(Rcpp::CharacterVector icd9Decimal, bool onlyReal) {
        typedef SEXP(*Ptr_icd9ChildrenDecimalCpp)(SEXP,SEXP);
        static Ptr_icd9ChildrenDecimalCpp p_icd9ChildrenDecimalCpp = NULL;
        if (p_icd9ChildrenDecimalCpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9ChildrenDecimalCpp)(Rcpp::CharacterVector,bool)");
            p_icd9ChildrenDecimalCpp = (Ptr_icd9ChildrenDecimalCpp)R_GetCCallable("icd", "icd_icd9ChildrenDecimalCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ChildrenDecimalCpp(Rcpp::wrap(icd9Decimal), Rcpp::wrap(onlyReal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::CharacterVector icd9ChildrenCpp(Rcpp::CharacterVector icd9, bool isShort, bool onlyReal = true) {
        typedef SEXP(*Ptr_icd9ChildrenCpp)(SEXP,SEXP,SEXP);
        static Ptr_icd9ChildrenCpp p_icd9ChildrenCpp = NULL;
        if (p_icd9ChildrenCpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*icd9ChildrenCpp)(Rcpp::CharacterVector,bool,bool)");
            p_icd9ChildrenCpp = (Ptr_icd9ChildrenCpp)R_GetCCallable("icd", "icd_icd9ChildrenCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ChildrenCpp(Rcpp::wrap(icd9), Rcpp::wrap(isShort), Rcpp::wrap(onlyReal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline Rcpp::LogicalVector icd_in_reference_code(Rcpp::CharacterVector icd, Rcpp::CharacterVector icd_reference, bool short_code, bool short_reference = true) {
        typedef SEXP(*Ptr_icd_in_reference_code)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_icd_in_reference_code p_icd_in_reference_code = NULL;
        if (p_icd_in_reference_code == NULL) {
            validateSignature("Rcpp::LogicalVector(*icd_in_reference_code)(Rcpp::CharacterVector,Rcpp::CharacterVector,bool,bool)");
            p_icd_in_reference_code = (Ptr_icd_in_reference_code)R_GetCCallable("icd", "icd_icd_in_reference_code");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd_in_reference_code(Rcpp::wrap(icd), Rcpp::wrap(icd_reference), Rcpp::wrap(short_code), Rcpp::wrap(short_reference));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::LogicalVector >(__result);
    }

    inline std::string trimLeftCpp(std::string s) {
        typedef SEXP(*Ptr_trimLeftCpp)(SEXP);
        static Ptr_trimLeftCpp p_trimLeftCpp = NULL;
        if (p_trimLeftCpp == NULL) {
            validateSignature("std::string(*trimLeftCpp)(std::string)");
            p_trimLeftCpp = (Ptr_trimLeftCpp)R_GetCCallable("icd", "icd_trimLeftCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_trimLeftCpp(Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::string >(__result);
    }

    inline std::string strimCpp(std::string s) {
        typedef SEXP(*Ptr_strimCpp)(SEXP);
        static Ptr_strimCpp p_strimCpp = NULL;
        if (p_strimCpp == NULL) {
            validateSignature("std::string(*strimCpp)(std::string)");
            p_strimCpp = (Ptr_strimCpp)R_GetCCallable("icd", "icd_strimCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_strimCpp(Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::string >(__result);
    }

    inline std::vector<std::string> trimCpp(std::vector<std::string> sv) {
        typedef SEXP(*Ptr_trimCpp)(SEXP);
        static Ptr_trimCpp p_trimCpp = NULL;
        if (p_trimCpp == NULL) {
            validateSignature("std::vector<std::string>(*trimCpp)(std::vector<std::string>)");
            p_trimCpp = (Ptr_trimCpp)R_GetCCallable("icd", "icd_trimCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_trimCpp(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string> >(__result);
    }

    inline int getOmpCores() {
        typedef SEXP(*Ptr_getOmpCores)();
        static Ptr_getOmpCores p_getOmpCores = NULL;
        if (p_getOmpCores == NULL) {
            validateSignature("int(*getOmpCores)()");
            p_getOmpCores = (Ptr_getOmpCores)R_GetCCallable("icd", "icd_getOmpCores");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_getOmpCores();
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline int getOmpMaxThreads() {
        typedef SEXP(*Ptr_getOmpMaxThreads)();
        static Ptr_getOmpMaxThreads p_getOmpMaxThreads = NULL;
        if (p_getOmpMaxThreads == NULL) {
            validateSignature("int(*getOmpMaxThreads)()");
            p_getOmpMaxThreads = (Ptr_getOmpMaxThreads)R_GetCCallable("icd", "icd_getOmpMaxThreads");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_getOmpMaxThreads();
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline int getOmpThreads() {
        typedef SEXP(*Ptr_getOmpThreads)();
        static Ptr_getOmpThreads p_getOmpThreads = NULL;
        if (p_getOmpThreads == NULL) {
            validateSignature("int(*getOmpThreads)()");
            p_getOmpThreads = (Ptr_getOmpThreads)R_GetCCallable("icd", "icd_getOmpThreads");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_getOmpThreads();
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline Rcpp::NumericVector randomMajorCpp(int n) {
        typedef SEXP(*Ptr_randomMajorCpp)(SEXP);
        static Ptr_randomMajorCpp p_randomMajorCpp = NULL;
        if (p_randomMajorCpp == NULL) {
            validateSignature("Rcpp::NumericVector(*randomMajorCpp)(int)");
            p_randomMajorCpp = (Ptr_randomMajorCpp)R_GetCCallable("icd", "icd_randomMajorCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_randomMajorCpp(Rcpp::wrap(n));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::NumericVector >(__result);
    }

    inline std::vector<std::string> icd9RandomShortN(std::vector<std::string>::size_type n = 5) {
        typedef SEXP(*Ptr_icd9RandomShortN)(SEXP);
        static Ptr_icd9RandomShortN p_icd9RandomShortN = NULL;
        if (p_icd9RandomShortN == NULL) {
            validateSignature("std::vector<std::string>(*icd9RandomShortN)(std::vector<std::string>::size_type)");
            p_icd9RandomShortN = (Ptr_icd9RandomShortN)R_GetCCallable("icd", "icd_icd9RandomShortN");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9RandomShortN(Rcpp::wrap(n));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string> >(__result);
    }

    inline std::vector<std::string> icd9RandomShortV(std::vector<std::string>::size_type n = 5) {
        typedef SEXP(*Ptr_icd9RandomShortV)(SEXP);
        static Ptr_icd9RandomShortV p_icd9RandomShortV = NULL;
        if (p_icd9RandomShortV == NULL) {
            validateSignature("std::vector<std::string>(*icd9RandomShortV)(std::vector<std::string>::size_type)");
            p_icd9RandomShortV = (Ptr_icd9RandomShortV)R_GetCCallable("icd", "icd_icd9RandomShortV");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9RandomShortV(Rcpp::wrap(n));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string> >(__result);
    }

    inline std::vector<std::string> icd9RandomShortE(std::vector<std::string>::size_type n = 5) {
        typedef SEXP(*Ptr_icd9RandomShortE)(SEXP);
        static Ptr_icd9RandomShortE p_icd9RandomShortE = NULL;
        if (p_icd9RandomShortE == NULL) {
            validateSignature("std::vector<std::string>(*icd9RandomShortE)(std::vector<std::string>::size_type)");
            p_icd9RandomShortE = (Ptr_icd9RandomShortE)R_GetCCallable("icd", "icd_icd9RandomShortE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9RandomShortE(Rcpp::wrap(n));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string> >(__result);
    }

    inline std::vector<std::string> icd9RandomShort(std::vector<std::string>::size_type n = 5) {
        typedef SEXP(*Ptr_icd9RandomShort)(SEXP);
        static Ptr_icd9RandomShort p_icd9RandomShort = NULL;
        if (p_icd9RandomShort == NULL) {
            validateSignature("std::vector<std::string>(*icd9RandomShort)(std::vector<std::string>::size_type)");
            p_icd9RandomShort = (Ptr_icd9RandomShort)R_GetCCallable("icd", "icd_icd9RandomShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9RandomShort(Rcpp::wrap(n));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string> >(__result);
    }

    inline std::vector<std::string> fastIntToStringStd(std::vector<int> x) {
        typedef SEXP(*Ptr_fastIntToStringStd)(SEXP);
        static Ptr_fastIntToStringStd p_fastIntToStringStd = NULL;
        if (p_fastIntToStringStd == NULL) {
            validateSignature("std::vector<std::string>(*fastIntToStringStd)(std::vector<int>)");
            p_fastIntToStringStd = (Ptr_fastIntToStringStd)R_GetCCallable("icd", "icd_fastIntToStringStd");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fastIntToStringStd(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string> >(__result);
    }

    inline Rcpp::CharacterVector fastIntToStringRcpp(Rcpp::IntegerVector x) {
        typedef SEXP(*Ptr_fastIntToStringRcpp)(SEXP);
        static Ptr_fastIntToStringRcpp p_fastIntToStringRcpp = NULL;
        if (p_fastIntToStringRcpp == NULL) {
            validateSignature("Rcpp::CharacterVector(*fastIntToStringRcpp)(Rcpp::IntegerVector)");
            p_fastIntToStringRcpp = (Ptr_fastIntToStringRcpp)R_GetCCallable("icd", "icd_fastIntToStringRcpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fastIntToStringRcpp(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(__result);
    }

    inline int valgrindCallgrindStart(bool zerostats = false) {
        typedef SEXP(*Ptr_valgrindCallgrindStart)(SEXP);
        static Ptr_valgrindCallgrindStart p_valgrindCallgrindStart = NULL;
        if (p_valgrindCallgrindStart == NULL) {
            validateSignature("int(*valgrindCallgrindStart)(bool)");
            p_valgrindCallgrindStart = (Ptr_valgrindCallgrindStart)R_GetCCallable("icd", "icd_valgrindCallgrindStart");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_valgrindCallgrindStart(Rcpp::wrap(zerostats));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline int valgrindCallgrindStop() {
        typedef SEXP(*Ptr_valgrindCallgrindStop)();
        static Ptr_valgrindCallgrindStop p_valgrindCallgrindStop = NULL;
        if (p_valgrindCallgrindStop == NULL) {
            validateSignature("int(*valgrindCallgrindStop)()");
            p_valgrindCallgrindStop = (Ptr_valgrindCallgrindStop)R_GetCCallable("icd", "icd_valgrindCallgrindStop");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_valgrindCallgrindStop();
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

}

#endif // __icd_RcppExports_h__
