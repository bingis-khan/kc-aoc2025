#include <stddef.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
int _global_argc;
const char** _global_argv;
static  size_t   from_dash_integral0 (    size_t  x67 ) {
    return (  x67 );
}

static  int32_t   from_dash_integral2 (    size_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype1 (  ) {
    return (  from_dash_integral2 ( 0 ) );
}

static  const char*   from_dash_string3 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

enum CAllocator_4 {
    CAllocator_4_CAllocator,
};

static  enum CAllocator_4   idc5 (  ) {
    return ( CAllocator_4_CAllocator );
}

enum Unit_7 {
    Unit_7_Unit,
};

struct Char_10 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct StrConcat_9 {
    int64_t  field0;
    struct Char_10  field1;
};

static struct StrConcat_9 StrConcat_9_StrConcat (  int64_t  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_9 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_13 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

enum EmptyIter_15 {
    EmptyIter_15_EmptyIter,
};

struct AppendIter_14 {
    enum EmptyIter_15  f_it;
    struct Char_10  f_elem;
    bool  f_appended;
};

struct StrConcatIter_12 {
    struct IntStrIter_13  f_left;
    struct AppendIter_14  f_right;
};

static  struct StrConcatIter_12   into_dash_iter17 (    struct StrConcatIter_12  self1181 ) {
    return (  self1181 );
}

struct Maybe_18 {
    enum {
        Maybe_18_None_t,
        Maybe_18_Just_t,
    } tag;
    union {
        struct {
            struct Char_10  field0;
        } Maybe_18_Just_s;
    } stuff;
};

static struct Maybe_18 Maybe_18_Just (  struct Char_10  field0 ) {
    return ( struct Maybe_18 ) { .tag = Maybe_18_Just_t, .stuff = { .Maybe_18_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast22 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

enum Ordering_26 {
    Ordering_26_LT,
    Ordering_26_EQ,
    Ordering_26_GT,
};

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_26   cmp25 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   from_dash_integral27 (    size_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  size_t   next_dash_char24 (    uint8_t *  p1154 ) {
    uint8_t  pb1155 = ( * (  p1154 ) );
    if ( (  cmp25 ( (  pb1155 ) , (  from_dash_integral27 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp25 ( (  pb1155 ) , (  from_dash_integral27 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp25 ( (  pb1155 ) , (  from_dash_integral27 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp25 ( (  pb1155 ) , (  from_dash_integral27 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp28 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp28);
                    abort ( );
                    ( Unit_7_Unit );
                }
            }
        }
    }
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_26   cmp29 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

static  struct Char_10   scan_dash_from_dash_mem23 (    uint8_t *  p1158 ) {
    size_t  clen1159 = ( (  next_dash_char24 ) ( (  p1158 ) ) );
    if ( (  cmp29 ( (  clen1159 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp30 = ( (  from_dash_string3 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp30);
        abort ( );
        ( Unit_7_Unit );
    }
    return ( (struct Char_10) { .f_ptr = (  p1158 ) , .f_num_dash_bytes = (  clen1159 ) } );
}

static  struct Char_10   from_dash_charlike21 (    uint8_t *  ptr1162 ,    size_t  num_dash_bytes1164 ) {
    uint8_t *  ptr1165 = ( ( (  cast22 ) ( (  ptr1162 ) ) ) );
    return ( (  scan_dash_from_dash_mem23 ) ( (  ptr1165 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_26   cmp31 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

struct Range_34 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_34 Range_34_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_34 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env35 {
    ;
    int64_t  base1277;
};

struct envunion36 {
    int64_t  (*fun) (  struct env35*  ,    int32_t  ,    int64_t  );
    struct env35 env;
};

struct RangeIter_37 {
    struct Range_34  field0;
    int32_t  field1;
};

static struct RangeIter_37 RangeIter_37_RangeIter (  struct Range_34  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_37 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_37   into_dash_iter38 (    struct Range_34  dref789 ) {
    return ( ( RangeIter_37_RangeIter ) ( ( ( Range_34_Range ) ( ( dref789 .field0 ) ,  ( dref789 .field1 ) ) ) ,  ( dref789 .field0 ) ) );
}

struct Maybe_39 {
    enum {
        Maybe_39_None_t,
        Maybe_39_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_39_Just_s;
    } stuff;
};

static struct Maybe_39 Maybe_39_Just (  int32_t  field0 ) {
    return ( struct Maybe_39 ) { .tag = Maybe_39_Just_t, .stuff = { .Maybe_39_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add41 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_39   next40 (    struct RangeIter_37 *  self797 ) {
    struct RangeIter_37  dref798 = ( * (  self797 ) );
    if ( true ) {
        if ( (  cmp31 ( ( dref798 .field1 ) , ( dref798 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_39) { .tag = Maybe_39_None_t } );
        }
        struct Maybe_39  x802 = ( ( Maybe_39_Just ) ( ( dref798 .field1 ) ) );
        (*  self797 ) = ( ( RangeIter_37_RangeIter ) ( ( ( Range_34_Range ) ( ( dref798 .field0 .field0 ) ,  ( dref798 .field0 .field1 ) ) ) ,  (  op_dash_add41 ( ( dref798 .field1 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
        return (  x802 );
    }
}

static  int64_t   reduce33 (    struct Range_34  iterable1016 ,    int64_t  base1018 ,   struct envunion36  fun1020 ) {
    int64_t  x1021 = (  base1018 );
    struct RangeIter_37  it1022 = ( (  into_dash_iter38 ) ( (  iterable1016 ) ) );
    while ( ( true ) ) {
        struct Maybe_39  dref1023 = ( (  next40 ) ( ( & (  it1022 ) ) ) );
        if ( dref1023.tag == Maybe_39_None_t ) {
            return (  x1021 );
        }
        else {
            if ( dref1023.tag == Maybe_39_Just_t ) {
                struct envunion36  temp42 = (  fun1020 );
                x1021 = ( temp42.fun ( &temp42.env ,  ( dref1023 .stuff .Maybe_39_Just_s .field0 ) ,  (  x1021 ) ) );
            }
        }
    }
    const char*  temp43 = ( (  from_dash_string3 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp43);
    abort ( );
    ( Unit_7_Unit );
    int64_t  temp44;
    return (  temp44 );
}

static  struct Range_34   to45 (    int32_t  from780 ,    int32_t  to782 ) {
    return ( ( Range_34_Range ) ( (  from780 ) ,  (  to782 ) ) );
}

static  int32_t   op_dash_sub46 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  int64_t   from_dash_integral47 (    size_t  x46 ) {
    return ( (int64_t ) (  x46 ) );
}

static  int64_t   op_dash_mul49 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  int64_t   lam48 (   struct env35* env ,    int32_t  item1281 ,    int64_t  x1283 ) {
    return (  op_dash_mul49 ( (  x1283 ) , ( env->base1277 ) ) );
}

static  int64_t   pow32 (    int64_t  base1277 ,    int32_t  p1279 ) {
    struct env35 envinst35 = {
        .base1277 =  base1277 ,
    };
    return ( (  reduce33 ) ( ( (  to45 ) ( (  from_dash_integral2 ( 0 ) ) ,  (  op_dash_sub46 ( (  p1279 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral47 ( 1 ) ) ,  ( (struct envunion36){ .fun = (  int64_t  (*) (  struct env35*  ,    int32_t  ,    int64_t  ) )lam48 , .env =  envinst35 } ) ) );
}

static  int64_t   op_dash_div50 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast51 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub52 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  size_t   op_dash_add55 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  size_t   op_dash_sub56 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  void *   cast_dash_ptr62 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of63 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed60 (  ) {
    size_t  temp61;
    size_t  x573 = (  temp61 );
    ( ( memset ) ( ( (  cast_dash_ptr62 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of63 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  uint8_t *   cast64 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed58 (    uint8_t  x576 ) {
    size_t  temp59 = ( (  zeroed60 ) ( ) );
    size_t *  y577 = ( &temp59 );
    uint8_t *  yp578 = ( (  cast64 ) ( (  y577 ) ) );
    (*  yp578 ) = (  x576 );
    return ( * (  y577 ) );
}

static  size_t   u8_dash_size57 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed58 ) ( (  x666 ) ) );
}

static  uint8_t   size_dash_u866 (    size_t  x642 ) {
    return ( (uint8_t ) (  x642 ) );
}

static  size_t   op_dash_div67 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer65 (    uint8_t *  ptr681 ) {
    return ( (  size_dash_u866 ) ( (  op_dash_div67 ( ( ( (size_t ) (  ptr681 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  size_t   op_dash_mul68 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer54 (    uint8_t *  ptr684 ,    uint8_t  b686 ) {
    size_t  s687 = ( ( (size_t ) (  ptr684 ) ) );
    size_t  exp688 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add55 ( (  op_dash_sub56 ( (  s687 ) , ( (  u8_dash_size57 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer65 ) ( (  ptr684 ) ) ) ) ) ) ) , (  op_dash_mul68 ( (  exp688 ) , ( (  u8_dash_size57 ) ( (  b686 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast69 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_10   char_dash_from_dash_u853 (    uint8_t  b1168 ) {
    uint8_t *  ptr1169 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer54 ) ( ( ( (  cast69 ) ( ( (  u8_dash_size57 ) ( (  b1168 ) ) ) ) ) ) ,  (  from_dash_integral27 ( 103 ) ) ) );
    return ( (struct Char_10) { .f_ptr = (  ptr1169 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  uint8_t   op_dash_add70 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_18   next20 (    struct IntStrIter_13 *  self1290 ) {
    if ( ( ( * (  self1290 ) ) .f_negative ) ) {
        (*  self1290 ) .f_negative = ( false );
        return ( ( Maybe_18_Just ) ( ( (  from_dash_charlike21 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp31 ( ( ( * (  self1290 ) ) .f_len ) , (  from_dash_integral2 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_18) { .tag = Maybe_18_None_t } );
    }
    int64_t  trim_dash_down1291 = ( (  pow32 ) ( (  from_dash_integral47 ( 10 ) ) ,  (  op_dash_sub46 ( ( ( * (  self1290 ) ) .f_len ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
    int64_t  upper1292 = (  op_dash_div50 ( ( ( * (  self1290 ) ) .f_int ) , (  trim_dash_down1291 ) ) );
    int64_t  upper_dash_mask1293 = (  op_dash_mul49 ( (  op_dash_div50 ( (  upper1292 ) , (  from_dash_integral47 ( 10 ) ) ) ) , (  from_dash_integral47 ( 10 ) ) ) );
    uint8_t  digit1294 = ( ( (  cast51 ) ( (  op_dash_sub52 ( (  upper1292 ) , (  upper_dash_mask1293 ) ) ) ) ) );
    (*  self1290 ) .f_len = (  op_dash_sub46 ( ( ( * (  self1290 ) ) .f_len ) , (  from_dash_integral2 ( 1 ) ) ) );
    struct Char_10  digit_dash_char1295 = ( (  char_dash_from_dash_u853 ) ( (  op_dash_add70 ( (  digit1294 ) , (  from_dash_integral27 ( 48 ) ) ) ) ) );
    return ( ( Maybe_18_Just ) ( (  digit_dash_char1295 ) ) );
}

static  struct Maybe_18   next72 (    enum EmptyIter_15 *  dref698 ) {
    return ( (struct Maybe_18) { .tag = Maybe_18_None_t } );
}

static  struct Maybe_18   next71 (    struct AppendIter_14 *  self945 ) {
    struct Maybe_18  dref946 = ( (  next72 ) ( ( & ( ( * (  self945 ) ) .f_it ) ) ) );
    if ( dref946.tag == Maybe_18_Just_t ) {
        return ( ( Maybe_18_Just ) ( ( dref946 .stuff .Maybe_18_Just_s .field0 ) ) );
    }
    else {
        if ( dref946.tag == Maybe_18_None_t ) {
            if ( ( ! ( ( * (  self945 ) ) .f_appended ) ) ) {
                (*  self945 ) .f_appended = ( true );
                return ( ( Maybe_18_Just ) ( ( ( * (  self945 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_18) { .tag = Maybe_18_None_t } );
        }
    }
}

static  struct Maybe_18   next19 (    struct StrConcatIter_12 *  self1184 ) {
    struct Maybe_18  dref1185 = ( (  next20 ) ( ( & ( ( * (  self1184 ) ) .f_left ) ) ) );
    if ( dref1185.tag == Maybe_18_Just_t ) {
        return ( ( Maybe_18_Just ) ( ( dref1185 .stuff .Maybe_18_Just_s .field0 ) ) );
    }
    else {
        if ( dref1185.tag == Maybe_18_None_t ) {
            return ( (  next71 ) ( ( & ( ( * (  self1184 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_7   for_dash_each11 (    struct StrConcatIter_12  iterable997 ,    enum Unit_7 (*  fun999 )(    struct Char_10  ) ) {
    struct StrConcatIter_12  temp16 = ( (  into_dash_iter17 ) ( (  iterable997 ) ) );
    struct StrConcatIter_12 *  it1000 = ( &temp16 );
    while ( ( true ) ) {
        struct Maybe_18  dref1001 = ( (  next19 ) ( (  it1000 ) ) );
        if ( dref1001.tag == Maybe_18_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1001.tag == Maybe_18_Just_t ) {
                ( (  fun999 ) ( ( dref1001 .stuff .Maybe_18_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_26   cmp77 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg78 (    int64_t  l204 ) {
    return ( (  from_dash_integral47 ( 0 ) ) - (  l204 ) );
}

static  bool   eq80 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits79 (    int64_t  self1298 ) {
    if ( (  eq80 ( (  self1298 ) , (  from_dash_integral47 ( 0 ) ) ) ) ) {
        return (  from_dash_integral2 ( 1 ) );
    }
    int32_t  digits1299 = (  from_dash_integral2 ( 0 ) );
    while ( (  cmp77 ( (  self1298 ) , (  from_dash_integral47 ( 0 ) ) ) == 2 ) ) {
        self1298 = (  op_dash_div50 ( (  self1298 ) , (  from_dash_integral47 ( 10 ) ) ) );
        digits1299 = (  op_dash_add41 ( (  digits1299 ) , (  from_dash_integral2 ( 1 ) ) ) );
    }
    return (  digits1299 );
}

static  struct IntStrIter_13   int_dash_iter76 (    int64_t  int1302 ) {
    if ( (  cmp77 ( (  int1302 ) , (  from_dash_integral47 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_13) { .f_int = (  op_dash_neg78 ( (  int1302 ) ) ) , .f_len = ( (  count_dash_digits79 ) ( (  op_dash_neg78 ( (  int1302 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_13) { .f_int = (  int1302 ) , .f_len = ( (  count_dash_digits79 ) ( (  int1302 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_13   chars75 (    int64_t  self1699 ) {
    return ( (  int_dash_iter76 ) ( (  self1699 ) ) );
}

static  enum EmptyIter_15   into_dash_iter85 (    enum EmptyIter_15  self696 ) {
    return (  self696 );
}

static  struct AppendIter_14   append84 (    enum EmptyIter_15  it929 ,    struct Char_10  e931 ) {
    return ( (struct AppendIter_14) { .f_it = ( (  into_dash_iter85 ) ( (  it929 ) ) ) , .f_elem = (  e931 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_14   cons83 (    enum EmptyIter_15  it934 ,    struct Char_10  e936 ) {
    return ( (  append84 ) ( (  it934 ) ,  (  e936 ) ) );
}

static  enum EmptyIter_15   nil86 (  ) {
    return ( EmptyIter_15_EmptyIter );
}

static  struct AppendIter_14   single82 (    struct Char_10  e939 ) {
    return ( (  cons83 ) ( ( (  nil86 ) ( ) ) ,  (  e939 ) ) );
}

static  struct AppendIter_14   chars81 (    struct Char_10  self1177 ) {
    return ( (  single82 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_12   into_dash_iter74 (    struct StrConcat_9  dref1188 ) {
    return ( (struct StrConcatIter_12) { .f_left = ( (  chars75 ) ( ( dref1188 .field0 ) ) ) , .f_right = ( (  chars81 ) ( ( dref1188 .field1 ) ) ) } );
}

static  struct StrConcatIter_12   chars73 (    struct StrConcat_9  self1199 ) {
    return ( (  into_dash_iter74 ) ( (  self1199 ) ) );
}

struct Array_89 {
    uint8_t _arr [4];
};

struct Scalar_91 {
    uint32_t  f_value;
};

struct CharDestructured_90 {
    enum {
        CharDestructured_90_Ref_t,
        CharDestructured_90_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_10  field0;
        } CharDestructured_90_Ref_s;
        struct {
            struct Scalar_91  field0;
        } CharDestructured_90_Scalar_s;
    } stuff;
};

static struct CharDestructured_90 CharDestructured_90_Ref (  struct Char_10  field0 ) {
    return ( struct CharDestructured_90 ) { .tag = CharDestructured_90_Ref_t, .stuff = { .CharDestructured_90_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_90 CharDestructured_90_Scalar (  struct Scalar_91  field0 ) {
    return ( struct CharDestructured_90 ) { .tag = CharDestructured_90_Scalar_t, .stuff = { .CharDestructured_90_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq93 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint32_t   size_dash_u3294 (    size_t  x636 ) {
    return ( (uint32_t ) (  x636 ) );
}

static  size_t   cast95 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_90   destructure92 (    struct Char_10  c1135 ) {
    if ( (  eq93 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer65 ) ( ( (  c1135 ) .f_ptr ) ) ) , (  from_dash_integral27 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_90_Scalar ) ( ( (struct Scalar_91) { .f_value = ( (  size_dash_u3294 ) ( ( ( (  cast95 ) ( ( (  c1135 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_90_Ref ) ( (  c1135 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_26   cmp97 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral98 (    size_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast101 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8100 (    uint32_t  x660 ) {
    return ( (  cast101 ) ( (  x660 ) ) );
}

static  struct Array_89   from_dash_listlike102 (    struct Array_89 *  self330 ) {
    return ( * (  self330 ) );
}

static  struct Array_89   unscalarize96 (    struct Scalar_91  scalar1138 ) {
    if ( (  cmp97 ( ( (  scalar1138 ) .f_value ) , (  from_dash_integral98 ( 128 ) ) ) == 2 ) ) {
        const char*  temp99 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp99);
        abort ( );
        ( Unit_7_Unit );
    }
    uint8_t  b1139 = ( (  u32_dash_u8100 ) ( ( (  scalar1138 ) .f_value ) ) );
    struct Array_89  temp103 = ( (struct Array_89) { ._arr = { (  b1139 ) , (  from_dash_integral27 ( 0 ) ) , (  from_dash_integral27 ( 0 ) ) , (  from_dash_integral27 ( 0 ) ) } } );
    return ( (  from_dash_listlike102 ) ( ( &temp103 ) ) );
}

static  uint8_t *   cast_dash_ptr104 (    struct Array_89 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Char_10   regularize88 (    struct Char_10  c1142 ,    struct Array_89 *  possible_dash_scalar_dash_mem1144 ) {
    struct CharDestructured_90  dref1145 = ( (  destructure92 ) ( (  c1142 ) ) );
    if ( dref1145.tag == CharDestructured_90_Ref_t ) {
        return ( dref1145 .stuff .CharDestructured_90_Ref_s .field0 );
    }
    else {
        if ( dref1145.tag == CharDestructured_90_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1144 ) = ( (  unscalarize96 ) ( ( dref1145 .stuff .CharDestructured_90_Scalar_s .field0 ) ) );
            return ( (struct Char_10) { .f_ptr = ( (  cast_dash_ptr104 ) ( (  possible_dash_scalar_dash_mem1144 ) ) ) , .f_num_dash_bytes = ( (  c1142 ) .f_num_dash_bytes ) } );
        }
    }
}

static  int32_t   size_dash_i32107 (    size_t  x633 ) {
    return ( (int32_t ) (  x633 ) );
}

static  enum Unit_7   printf_dash_char87 (    struct Char_10  c1150 ) {
    struct Array_89  temp106;
    struct Array_89  temp105 = (  temp106 );
    struct Char_10  c1151 = ( (  regularize88 ) ( (  c1150 ) ,  ( &temp105 ) ) );
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32107 ) ( ( (  c1151 ) .f_num_dash_bytes ) ) ) ,  ( (  c1151 ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print8 (    struct StrConcat_9  s1226 ) {
    ( (  for_dash_each11 ) ( ( (  chars73 ) ( (  s1226 ) ) ) ,  (  printf_dash_char87 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   println6 (    int64_t  s1229 ) {
    ( (  print8 ) ( ( ( StrConcat_9_StrConcat ) ( (  s1229 ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_7_Unit );
}

struct Slice_112 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct StrView_111 {
    struct Slice_112  f_contents;
};

struct LineIter_110 {
    struct StrView_111  f_og;
    size_t  f_last;
};

struct Map_109 {
    struct LineIter_110  field0;
    int64_t (*  field1 )(    struct StrView_111  );
};

static struct Map_109 Map_109_Map (  struct LineIter_110  field0 ,  int64_t (*  field1 )(    struct StrView_111  ) ) {
    return ( struct Map_109 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_109   into_dash_iter114 (    struct Map_109  self702 ) {
    return (  self702 );
}

struct Maybe_115 {
    enum {
        Maybe_115_None_t,
        Maybe_115_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_115_Just_s;
    } stuff;
};

static struct Maybe_115 Maybe_115_Just (  int64_t  field0 ) {
    return ( struct Maybe_115 ) { .tag = Maybe_115_Just_t, .stuff = { .Maybe_115_Just_s = { .field0 = field0 } } };
};

struct Maybe_117 {
    enum {
        Maybe_117_None_t,
        Maybe_117_Just_t,
    } tag;
    union {
        struct {
            struct StrView_111  field0;
        } Maybe_117_Just_s;
    } stuff;
};

static struct Maybe_117 Maybe_117_Just (  struct StrView_111  field0 ) {
    return ( struct Maybe_117 ) { .tag = Maybe_117_Just_t, .stuff = { .Maybe_117_Just_s = { .field0 = field0 } } };
};

struct Maybe_121 {
    enum {
        Maybe_121_None_t,
        Maybe_121_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_121_Just_s;
    } stuff;
};

static struct Maybe_121 Maybe_121_Just (  uint8_t  field0 ) {
    return ( struct Maybe_121 ) { .tag = Maybe_121_Just_t, .stuff = { .Maybe_121_Just_s = { .field0 = field0 } } };
};

struct StrConcat_125 {
    struct StrView_111  field0;
    size_t  field1;
};

static struct StrConcat_125 StrConcat_125_StrConcat (  struct StrView_111  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_125 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_124 {
    struct StrConcat_125  field0;
    struct StrView_111  field1;
};

static struct StrConcat_124 StrConcat_124_StrConcat (  struct StrConcat_125  field0 ,  struct StrView_111  field1 ) {
    return ( struct StrConcat_124 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_123 {
    struct StrConcat_124  field0;
    size_t  field1;
};

static struct StrConcat_123 StrConcat_123_StrConcat (  struct StrConcat_124  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_123 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_122 {
    struct StrConcat_123  field0;
    struct Char_10  field1;
};

static struct StrConcat_122 StrConcat_122_StrConcat (  struct StrConcat_123  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_122 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_129 {
    struct StrView_111  field0;
    struct StrConcat_122  field1;
};

static struct StrConcat_129 StrConcat_129_StrConcat (  struct StrView_111  field0 ,  struct StrConcat_122  field1 ) {
    return ( struct StrConcat_129 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_128 {
    struct StrConcat_129  field0;
    struct Char_10  field1;
};

static struct StrConcat_128 StrConcat_128_StrConcat (  struct StrConcat_129  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_128 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str131 (    struct StrView_111  self1214 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32107 ) ( ( ( (  self1214 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1214 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str136 (    size_t  self1314 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1314 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str135 (    struct StrConcat_125  self1193 ) {
    struct StrConcat_125  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str136 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str134 (    struct StrConcat_124  self1193 ) {
    struct StrConcat_124  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str135 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str131 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str133 (    struct StrConcat_123  self1193 ) {
    struct StrConcat_123  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str134 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str136 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str137 (    struct Char_10  self1174 ) {
    ( (  printf_dash_char87 ) ( (  self1174 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str132 (    struct StrConcat_122  self1193 ) {
    struct StrConcat_122  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str133 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str130 (    struct StrConcat_129  self1193 ) {
    struct StrConcat_129  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str132 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str127 (    struct StrConcat_128  self1193 ) {
    struct StrConcat_128  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str130 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  struct StrView_111   from_dash_string138 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_111) { .f_contents = ( (struct Slice_112) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  enum Unit_7   panic126 (    struct StrConcat_122  errmsg1234 ) {
    ( (  print_dash_str127 ) ( ( ( StrConcat_128_StrConcat ) ( ( ( StrConcat_129_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_7_Unit );
}

static  uint8_t   undefined139 (  ) {
    uint8_t  temp140;
    return (  temp140 );
}

static  uint8_t   or_dash_fail120 (    struct Maybe_121  x1244 ,    struct StrConcat_122  errmsg1246 ) {
    struct Maybe_121  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_121_None_t ) {
        ( (  panic126 ) ( (  errmsg1246 ) ) );
        return ( (  undefined139 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_121_Just_t ) {
            return ( dref1247 .stuff .Maybe_121_Just_s .field0 );
        }
    }
}

static  uint8_t *   offset_dash_ptr142 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp143;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul49 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp143 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64144 (    size_t  x597 ) {
    return ( (int64_t ) (  x597 ) );
}

static  struct Maybe_121   try_dash_get141 (    struct Slice_112  slice1919 ,    size_t  i1921 ) {
    if ( ( (  cmp29 ( (  i1921 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp29 ( (  i1921 ) , ( (  slice1919 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_121) { .tag = Maybe_121_None_t } );
    }
    uint8_t *  elem_dash_ptr1922 = ( (  offset_dash_ptr142 ) ( ( (  slice1919 ) .f_ptr ) ,  ( (  size_dash_i64144 ) ( (  i1921 ) ) ) ) );
    return ( ( Maybe_121_Just ) ( ( * (  elem_dash_ptr1922 ) ) ) );
}

static  uint8_t   get119 (    struct Slice_112  slice1925 ,    size_t  i1927 ) {
    return ( (  or_dash_fail120 ) ( ( (  try_dash_get141 ) ( (  slice1925 ) ,  (  i1927 ) ) ) ,  ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( ( StrConcat_125_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1927 ) ) ) ,  ( (  from_dash_string138 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1925 ) .f_count ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8145 (    struct Char_10  c1331 ) {
    struct CharDestructured_90  dref1332 = ( (  destructure92 ) ( (  c1331 ) ) );
    if ( dref1332.tag == CharDestructured_90_Ref_t ) {
        return ( * ( ( dref1332 .stuff .CharDestructured_90_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1332.tag == CharDestructured_90_Scalar_t ) {
            return ( (  u32_dash_u8100 ) ( ( ( dref1332 .stuff .CharDestructured_90_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  size_t   min148 (    size_t  l1258 ,    size_t  r1260 ) {
    if ( (  cmp29 ( (  l1258 ) , (  r1260 ) ) == 0 ) ) {
        return (  l1258 );
    } else {
        return (  r1260 );
    }
}

static  struct Slice_112   subslice147 (    struct Slice_112  slice1947 ,    size_t  from1949 ,    size_t  to1951 ) {
    uint8_t *  begin_dash_ptr1952 = ( (  offset_dash_ptr142 ) ( ( (  slice1947 ) .f_ptr ) ,  ( (  size_dash_i64144 ) ( (  from1949 ) ) ) ) );
    if ( ( (  cmp29 ( (  from1949 ) , (  to1951 ) ) != 0 ) || (  cmp29 ( (  from1949 ) , ( (  slice1947 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_112) { .f_ptr = (  begin_dash_ptr1952 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1953 = (  op_dash_sub56 ( ( (  min148 ) ( (  to1951 ) ,  ( (  slice1947 ) .f_count ) ) ) , (  from1949 ) ) );
    return ( (struct Slice_112) { .f_ptr = (  begin_dash_ptr1952 ) , .f_count = (  count1953 ) } );
}

static  struct StrView_111   byte_dash_substr146 (    struct StrView_111  s2347 ,    size_t  from2349 ,    size_t  to2351 ) {
    return ( (struct StrView_111) { .f_contents = ( (  subslice147 ) ( ( (  s2347 ) .f_contents ) ,  (  from2349 ) ,  (  to2351 ) ) ) } );
}

static  struct Maybe_117   next118 (    struct LineIter_110 *  self2426 ) {
    if ( (  cmp29 ( ( ( * (  self2426 ) ) .f_last ) , ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_117) { .tag = Maybe_117_None_t } );
    }
    size_t  i2427 = ( ( * (  self2426 ) ) .f_last );
    while ( ( (  cmp29 ( (  i2427 ) , ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq93 ( ( (  get119 ) ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) ,  (  i2427 ) ) ) , ( (  char_dash_u8145 ) ( ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2427 = (  op_dash_add55 ( (  i2427 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_111  line2428 = ( (  byte_dash_substr146 ) ( ( ( * (  self2426 ) ) .f_og ) ,  ( ( * (  self2426 ) ) .f_last ) ,  (  i2427 ) ) );
    if ( (  cmp29 ( (  i2427 ) , ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2427 = (  op_dash_add55 ( (  i2427 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2426 ) .f_last = (  i2427 );
    return ( ( Maybe_117_Just ) ( (  line2428 ) ) );
}

static  struct Maybe_115   next116 (    struct Map_109 *  dref704 ) {
    struct Maybe_117  dref707 = ( (  next118 ) ( ( & ( (* dref704 ) .field0 ) ) ) );
    if ( dref707.tag == Maybe_117_None_t ) {
        return ( (struct Maybe_115) { .tag = Maybe_115_None_t } );
    }
    else {
        if ( dref707.tag == Maybe_117_Just_t ) {
            return ( ( Maybe_115_Just ) ( ( ( (* dref704 ) .field1 ) ( ( dref707 .stuff .Maybe_117_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int64_t   reduce113 (    struct Map_109  iterable1016 ,    int64_t  base1018 ,    int64_t (*  fun1020 )(    int64_t  ,    int64_t  ) ) {
    int64_t  x1021 = (  base1018 );
    struct Map_109  it1022 = ( (  into_dash_iter114 ) ( (  iterable1016 ) ) );
    while ( ( true ) ) {
        struct Maybe_115  dref1023 = ( (  next116 ) ( ( & (  it1022 ) ) ) );
        if ( dref1023.tag == Maybe_115_None_t ) {
            return (  x1021 );
        }
        else {
            if ( dref1023.tag == Maybe_115_Just_t ) {
                x1021 = ( (  fun1020 ) ( ( dref1023 .stuff .Maybe_115_Just_s .field0 ) ,  (  x1021 ) ) );
            }
        }
    }
    const char*  temp149 = ( (  from_dash_string3 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp149);
    abort ( );
    ( Unit_7_Unit );
    int64_t  temp150;
    return (  temp150 );
}

static  int64_t   op_dash_add152 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  int64_t   lam151 (    int64_t  v1035 ,    int64_t  s1037 ) {
    return (  op_dash_add152 ( (  v1035 ) , (  s1037 ) ) );
}

static  int64_t   sum108 (    struct Map_109  it1033 ) {
    return ( (  reduce113 ) ( (  it1033 ) ,  (  from_dash_integral47 ( 0 ) ) ,  (  lam151 ) ) );
}

static  struct LineIter_110   into_dash_iter154 (    struct LineIter_110  self2423 ) {
    return (  self2423 );
}

static  struct Map_109   map153 (    struct LineIter_110  iterable711 ,    int64_t (*  fun713 )(    struct StrView_111  ) ) {
    struct LineIter_110  it714 = ( (  into_dash_iter154 ) ( (  iterable711 ) ) );
    return ( ( Map_109_Map ) ( (  it714 ) ,  (  fun713 ) ) );
}

static  struct LineIter_110   lines155 (    struct StrView_111  s2420 ) {
    return ( (struct LineIter_110) { .f_og = (  s2420 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct StrConcat_159 {
    struct StrView_111  field0;
    const char*  field1;
};

static struct StrConcat_159 StrConcat_159_StrConcat (  struct StrView_111  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_159 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_158 {
    struct StrConcat_159  field0;
    struct Char_10  field1;
};

static struct StrConcat_158 StrConcat_158_StrConcat (  struct StrConcat_159  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_158 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_163 {
    struct StrView_111  field0;
    struct StrConcat_158  field1;
};

static struct StrConcat_163 StrConcat_163_StrConcat (  struct StrView_111  field0 ,  struct StrConcat_158  field1 ) {
    return ( struct StrConcat_163 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_162 {
    struct StrConcat_163  field0;
    struct Char_10  field1;
};

static struct StrConcat_162 StrConcat_162_StrConcat (  struct StrConcat_163  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_162 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str167 (    const char*  self1565 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%s" ) ,  ( 2 ) ) ) ,  (  self1565 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str166 (    struct StrConcat_159  self1193 ) {
    struct StrConcat_159  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str167 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str165 (    struct StrConcat_158  self1193 ) {
    struct StrConcat_158  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str166 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str164 (    struct StrConcat_163  self1193 ) {
    struct StrConcat_163  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str165 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str161 (    struct StrConcat_162  self1193 ) {
    struct StrConcat_162  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str164 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic160 (    struct StrConcat_158  errmsg1234 ) {
    ( (  print_dash_str161 ) ( ( ( StrConcat_162_StrConcat ) ( ( ( StrConcat_163_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_7_Unit );
}

static  struct StrView_111   undefined168 (  ) {
    struct StrView_111  temp169;
    return (  temp169 );
}

static  struct StrView_111   or_dash_fail157 (    struct Maybe_117  x1244 ,    struct StrConcat_158  errmsg1246 ) {
    struct Maybe_117  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_117_None_t ) {
        ( (  panic160 ) ( (  errmsg1246 ) ) );
        return ( (  undefined168 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_117_Just_t ) {
            return ( dref1247 .stuff .Maybe_117_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike171 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr176 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of177 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed174 (  ) {
    FILE *  temp175;
    FILE *  x573 = (  temp175 );
    ( ( memset ) ( ( (  cast_dash_ptr176 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of177 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  FILE *   null_dash_ptr173 (  ) {
    return ( (  zeroed174 ) ( ) );
}

static  bool   is_dash_ptr_dash_null172 (    FILE *  p583 ) {
    return ( (  p583 ) == ( (  null_dash_ptr173 ) ( ) ) );
}

static  int32_t   seek_dash_end178 (  ) {
    return (  from_dash_integral2 ( 2 ) );
}

static  int32_t   seek_dash_set179 (  ) {
    return (  from_dash_integral2 ( 0 ) );
}

struct TypeSize_182 {
    size_t  f_size;
};

static  struct TypeSize_182   get_dash_typesize181 (  ) {
    uint8_t  temp183;
    return ( (struct TypeSize_182) { .f_size = ( sizeof( ( (  temp183 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr184 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_112   allocate180 (    enum CAllocator_4  dref2111 ,    size_t  count2113 ) {
    if (!(  dref2111 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2114 = ( ( ( (  get_dash_typesize181 ) ( ) ) ) .f_size );
    uint8_t *  ptr2115 = ( (  cast_dash_ptr184 ) ( ( ( malloc ) ( (  op_dash_mul68 ( (  size2114 ) , (  count2113 ) ) ) ) ) ) );
    return ( (struct Slice_112) { .f_ptr = (  ptr2115 ) , .f_count = (  count2113 ) } );
}

static  size_t   i32_dash_size185 (    int32_t  x612 ) {
    return ( (size_t ) ( (int64_t ) (  x612 ) ) );
}

static  uint8_t *   get_dash_ptr187 (    struct Slice_112  slice1913 ,    size_t  i1915 ) {
    if ( ( (  cmp29 ( (  i1915 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp29 ( (  i1915 ) , ( (  slice1913 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic126 ) ( ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( ( StrConcat_125_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1915 ) ) ) ,  ( (  from_dash_string138 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1913 ) .f_count ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1916 = ( (  offset_dash_ptr142 ) ( ( (  slice1913 ) .f_ptr ) ,  ( (  size_dash_i64144 ) ( (  i1915 ) ) ) ) );
    return (  elem_dash_ptr1916 );
}

static  enum Unit_7   set186 (    struct Slice_112  slice1930 ,    size_t  i1932 ,    uint8_t  x1934 ) {
    uint8_t *  ep1935 = ( (  get_dash_ptr187 ) ( (  slice1930 ) ,  (  i1932 ) ) );
    (*  ep1935 ) = (  x1934 );
    return ( Unit_7_Unit );
}

static  struct Char_10   nullchar188 (  ) {
    return ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_117   try_dash_read_dash_contents170 (    const char*  filename2987 ,    enum CAllocator_4  al2989 ) {
    FILE *  file2990 = ( ( fopen ) ( (  filename2987 ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null172 ) ( (  file2990 ) ) ) ) {
        return ( (struct Maybe_117) { .tag = Maybe_117_None_t } );
    }
    ( ( fseek ) ( (  file2990 ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  seek_dash_end178 ) ( ) ) ) );
    int32_t  file_dash_size2991 = ( ( ftell ) ( (  file2990 ) ) );
    ( ( fseek ) ( (  file2990 ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  seek_dash_set179 ) ( ) ) ) );
    struct Slice_112  file_dash_buf2992 = ( ( (  allocate180 ) ( (  al2989 ) ,  (  op_dash_add55 ( ( (  i32_dash_size185 ) ( (  file_dash_size2991 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2992 ) .f_ptr ) ,  (  file_dash_size2991 ) ,  (  from_dash_integral2 ( 1 ) ) ,  (  file2990 ) ) );
    ( (  set186 ) ( (  file_dash_buf2992 ) ,  ( (  i32_dash_size185 ) ( (  file_dash_size2991 ) ) ) ,  ( (  char_dash_u8145 ) ( ( (  nullchar188 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2990 ) ) );
    struct StrView_111  str2993 = ( (struct StrView_111) { .f_contents = ( (  subslice147 ) ( (  file_dash_buf2992 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub56 ( ( (  file_dash_buf2992 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_117_Just ) ( (  str2993 ) ) );
}

static  struct StrView_111   read_dash_contents156 (    const char*  filename2996 ,    enum CAllocator_4  al2998 ) {
    return ( (  or_dash_fail157 ) ( ( (  try_dash_read_dash_contents170 ) ( (  filename2996 ) ,  (  al2998 ) ) ) ,  ( ( StrConcat_158_StrConcat ) ( ( ( StrConcat_159_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"could not open file " ) ,  ( 20 ) ) ) ,  (  filename2996 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"!" ) ,  ( 1 ) ) ) ) ) ) );
}

struct Array_191 {
    int32_t _arr [12];
};

struct JoltageUltra_190 {
    struct Array_191  f_batts;
};

static  void *   cast_dash_ptr196 (    struct Array_191 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of197 (    struct Array_191  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_191   zeroed194 (  ) {
    struct Array_191  temp195;
    struct Array_191  x573 = (  temp195 );
    ( ( memset ) ( ( (  cast_dash_ptr196 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of197 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  struct JoltageUltra_190   empty_dash_joltage_dash_ultra193 (  ) {
    return ( (struct JoltageUltra_190) { .f_batts = ( (  zeroed194 ) ( ) ) } );
}

struct env199 {
    ;
    ;
    struct JoltageUltra_190 *  j3266;
};

struct envunion200 {
    enum Unit_7  (*fun) (  struct env199*  ,    struct Char_10  );
    struct env199 env;
};

struct StrViewIter_201 {
    struct StrView_111  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_201   into_dash_iter203 (    struct StrView_111  self1203 ) {
    return ( (struct StrViewIter_201) { .f_ds = (  self1203 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_18   next204 (    struct StrViewIter_201 *  self1209 ) {
    if ( (  cmp29 ( ( ( * (  self1209 ) ) .f_i ) , ( ( ( ( * (  self1209 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_18) { .tag = Maybe_18_None_t } );
    }
    uint8_t *  char_dash_ptr1210 = ( ( (  offset_dash_ptr142 ) ( ( (  cast22 ) ( ( ( ( ( * (  self1209 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64144 ) ( ( ( * (  self1209 ) ) .f_i ) ) ) ) ) );
    struct Char_10  char1211 = ( (  scan_dash_from_dash_mem23 ) ( (  char_dash_ptr1210 ) ) );
    (*  self1209 ) .f_i = (  op_dash_add55 ( ( ( * (  self1209 ) ) .f_i ) , ( (  char1211 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_18_Just ) ( (  char1211 ) ) );
}

static  enum Unit_7   for_dash_each198 (    struct StrView_111  iterable997 ,   struct envunion200  fun999 ) {
    struct StrViewIter_201  temp202 = ( (  into_dash_iter203 ) ( (  iterable997 ) ) );
    struct StrViewIter_201 *  it1000 = ( &temp202 );
    while ( ( true ) ) {
        struct Maybe_18  dref1001 = ( (  next204 ) ( (  it1000 ) ) );
        if ( dref1001.tag == Maybe_18_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1001.tag == Maybe_18_Just_t ) {
                struct envunion200  temp205 = (  fun999 );
                ( temp205.fun ( &temp205.env ,  ( dref1001 .stuff .Maybe_18_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

struct StrConcat_213 {
    struct StrConcat_124  field0;
    int32_t  field1;
};

static struct StrConcat_213 StrConcat_213_StrConcat (  struct StrConcat_124  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_213 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_212 {
    struct StrConcat_213  field0;
    struct Char_10  field1;
};

static struct StrConcat_212 StrConcat_212_StrConcat (  struct StrConcat_213  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_212 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_216 {
    struct StrView_111  field0;
    struct StrConcat_212  field1;
};

static struct StrConcat_216 StrConcat_216_StrConcat (  struct StrView_111  field0 ,  struct StrConcat_212  field1 ) {
    return ( struct StrConcat_216 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_215 {
    struct StrConcat_216  field0;
    struct Char_10  field1;
};

static struct StrConcat_215 StrConcat_215_StrConcat (  struct StrConcat_216  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_215 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str220 (    int32_t  self1308 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1308 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str219 (    struct StrConcat_213  self1193 ) {
    struct StrConcat_213  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str134 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str220 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str218 (    struct StrConcat_212  self1193 ) {
    struct StrConcat_212  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str219 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str217 (    struct StrConcat_216  self1193 ) {
    struct StrConcat_216  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str218 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str214 (    struct StrConcat_215  self1193 ) {
    struct StrConcat_215  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str217 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic211 (    struct StrConcat_212  errmsg1234 ) {
    ( (  print_dash_str214 ) ( ( ( StrConcat_215_StrConcat ) ( ( ( StrConcat_216_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_7_Unit );
}

static  int32_t *   cast_dash_ptr221 (    struct Array_191 *  p359 ) {
    return ( (int32_t * ) (  p359 ) );
}

static  int32_t *   offset_dash_ptr222 (    int32_t *  x338 ,    int64_t  count340 ) {
    int32_t  temp223;
    return ( (int32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul49 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp223 ) ) ) ) ) ) ) ) );
}

static  int32_t *   get_dash_ptr210 (    struct Array_191 *  arr2436 ,    size_t  i2439 ) {
    if ( ( (  cmp29 ( (  i2439 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp29 ( (  i2439 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic211 ) ( ( ( StrConcat_212_StrConcat ) ( ( ( StrConcat_213_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( ( StrConcat_125_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2439 ) ) ) ,  ( (  from_dash_string138 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    int32_t *  p2440 = ( ( (  cast_dash_ptr221 ) ( (  arr2436 ) ) ) );
    return ( (  offset_dash_ptr222 ) ( (  p2440 ) ,  ( (int64_t ) (  i2439 ) ) ) );
}

static  int32_t   get209 (    struct Array_191 *  arr2443 ,    size_t  i2446 ) {
    return ( * ( (  get_dash_ptr210 ) ( (  arr2443 ) ,  (  i2446 ) ) ) );
}

static  int32_t   get_dash_jolt208 (    struct JoltageUltra_190 *  j3237 ,    int32_t  i3240 ) {
    return ( (  get209 ) ( ( & ( ( * (  j3237 ) ) .f_batts ) ) ,  ( (  i32_dash_size185 ) ( (  i3240 ) ) ) ) );
}

struct env226 {
    ;
    ;
    ;
    ;
    struct Array_191 *  arr3253;
    ;
};

struct envunion227 {
    enum Unit_7  (*fun) (  struct env226*  ,    int32_t  );
    struct env226 env;
};

static  enum Unit_7   for_dash_each225 (    struct Range_34  iterable997 ,   struct envunion227  fun999 ) {
    struct RangeIter_37  temp228 = ( (  into_dash_iter38 ) ( (  iterable997 ) ) );
    struct RangeIter_37 *  it1000 = ( &temp228 );
    while ( ( true ) ) {
        struct Maybe_39  dref1001 = ( (  next40 ) ( (  it1000 ) ) );
        if ( dref1001.tag == Maybe_39_None_t ) {
            return ( Unit_7_Unit );
        }
        else {
            if ( dref1001.tag == Maybe_39_Just_t ) {
                struct envunion227  temp229 = (  fun999 );
                ( temp229.fun ( &temp229.env ,  ( dref1001 .stuff .Maybe_39_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   set231 (    struct Array_191 *  arr2449 ,    size_t  i2452 ,    int32_t  e2454 ) {
    int32_t *  p2455 = ( (  get_dash_ptr210 ) ( (  arr2449 ) ,  (  i2452 ) ) );
    (*  p2455 ) = (  e2454 );
    return ( Unit_7_Unit );
}

static  enum Unit_7   lam230 (   struct env226* env ,    int32_t  i3255 ) {
    return ( (  set231 ) ( ( env->arr3253 ) ,  ( (  i32_dash_size185 ) ( (  i3255 ) ) ) ,  ( (  get209 ) ( ( env->arr3253 ) ,  ( (  i32_dash_size185 ) ( (  op_dash_add41 ( (  i3255 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) ) ) ) ) );
}

static  enum Unit_7   move_dash_from224 (    struct JoltageUltra_190 *  j3247 ,    int32_t  from3250 ,    int32_t  b3252 ) {
    struct Array_191 *  arr3253 = ( & ( ( * (  j3247 ) ) .f_batts ) );
    struct env226 envinst226 = {
        .arr3253 =  arr3253 ,
    };
    ( (  for_dash_each225 ) ( ( (  to45 ) ( (  from3250 ) ,  (  op_dash_sub46 ( ( 12 ) , (  from_dash_integral2 ( 2 ) ) ) ) ) ) ,  ( (struct envunion227){ .fun = (  enum Unit_7  (*) (  struct env226*  ,    int32_t  ) )lam230 , .env =  envinst226 } ) ) );
    ( (  set231 ) ( (  arr3253 ) ,  ( (  i32_dash_size185 ) ( (  op_dash_sub46 ( ( 12 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) ) ,  (  b3252 ) ) );
    return ( Unit_7_Unit );
}

static  enum Unit_7   add_dash_battery207 (    struct JoltageUltra_190 *  j3258 ,    int32_t  b3261 ) {
    int32_t  i3262 = (  from_dash_integral2 ( 0 ) );
    while ( (  cmp31 ( (  i3262 ) , (  op_dash_sub46 ( ( 12 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) == 0 ) ) {
        if ( (  cmp31 ( ( (  get_dash_jolt208 ) ( (  j3258 ) ,  (  i3262 ) ) ) , ( (  get_dash_jolt208 ) ( (  j3258 ) ,  (  op_dash_add41 ( (  i3262 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_from224 ) ( (  j3258 ) ,  (  i3262 ) ,  (  b3261 ) ) );
            break;
        }
        i3262 = (  op_dash_add41 ( (  i3262 ) , (  from_dash_integral2 ( 1 ) ) ) );
    }
    if ( (  cmp31 ( ( (  get_dash_jolt208 ) ( (  j3258 ) ,  (  op_dash_sub46 ( ( 12 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) ) , (  b3261 ) ) == 0 ) ) {
        ( (  move_dash_from224 ) ( (  j3258 ) ,  (  op_dash_sub46 ( ( 12 ) , (  from_dash_integral2 ( 1 ) ) ) ) ,  (  b3261 ) ) );
    }
    return ( Unit_7_Unit );
}

struct StrConcat_237 {
    struct StrView_111  field0;
    struct StrView_111  field1;
};

static struct StrConcat_237 StrConcat_237_StrConcat (  struct StrView_111  field0 ,  struct StrView_111  field1 ) {
    return ( struct StrConcat_237 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_236 {
    struct StrConcat_237  field0;
    struct Char_10  field1;
};

static struct StrConcat_236 StrConcat_236_StrConcat (  struct StrConcat_237  field0 ,  struct Char_10  field1 ) {
    return ( struct StrConcat_236 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_7   print_dash_str238 (    struct StrConcat_237  self1193 ) {
    struct StrConcat_237  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str131 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   print_dash_str235 (    struct StrConcat_236  self1193 ) {
    struct StrConcat_236  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str238 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_7_Unit );
}

static  enum Unit_7   panic234 (    struct StrView_111  errmsg1234 ) {
    ( (  print_dash_str235 ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_237_StrConcat ) ( ( (  from_dash_string138 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_7_Unit );
}

static  int32_t   undefined239 (  ) {
    int32_t  temp240;
    return (  temp240 );
}

static  int32_t   or_dash_fail233 (    struct Maybe_39  x1244 ,    struct StrView_111  errmsg1246 ) {
    struct Maybe_39  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_39_None_t ) {
        ( (  panic234 ) ( (  errmsg1246 ) ) );
        return ( (  undefined239 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_39_Just_t ) {
            return ( dref1247 .stuff .Maybe_39_Just_s .field0 );
        }
    }
}

static  bool   eq243 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

static  enum Ordering_26   cmp246 (    struct Char_10  l1350 ,    struct Char_10  r1352 ) {
    if ( ( ( !  eq243 ( ( (  l1350 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq243 ( ( (  r1352 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp247 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp247);
        abort ( );
        ( Unit_7_Unit );
    }
    return ( (  cmp25 ) ( ( (  char_dash_u8145 ) ( (  l1350 ) ) ) ,  ( (  char_dash_u8145 ) ( (  r1352 ) ) ) ) );
}

static  struct Char_10   min245 (    struct Char_10  l1258 ,    struct Char_10  r1260 ) {
    if ( (  cmp246 ( (  l1258 ) , (  r1260 ) ) == 0 ) ) {
        return (  l1258 );
    } else {
        return (  r1260 );
    }
}

static  struct Char_10   max248 (    struct Char_10  l1263 ,    struct Char_10  r1265 ) {
    if ( (  cmp246 ( (  l1263 ) , (  r1265 ) ) == 2 ) ) {
        return (  l1263 );
    } else {
        return (  r1265 );
    }
}

static  bool   between244 (    struct Char_10  c1268 ,    struct Char_10  l1270 ,    struct Char_10  r1272 ) {
    struct Char_10  from1273 = ( (  min245 ) ( (  l1270 ) ,  (  r1272 ) ) );
    struct Char_10  to1274 = ( (  max248 ) ( (  l1270 ) ,  (  r1272 ) ) );
    return ( (  cmp246 ( (  from1273 ) , (  c1268 ) ) != 2 ) && (  cmp246 ( (  c1268 ) , (  to1274 ) ) != 2 ) );
}

static  bool   is_dash_digit242 (    struct Char_10  c1397 ) {
    return ( (  eq243 ( ( (  c1397 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between244 ) ( (  c1397 ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike21 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  void *   cast_dash_ptr254 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of255 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed252 (  ) {
    int32_t  temp253;
    int32_t  x573 = (  temp253 );
    ( ( memset ) ( ( (  cast_dash_ptr254 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of255 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  uint8_t *   cast256 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed250 (    uint8_t  x576 ) {
    int32_t  temp251 = ( (  zeroed252 ) ( ) );
    int32_t *  y577 = ( &temp251 );
    uint8_t *  yp578 = ( (  cast256 ) ( (  y577 ) ) );
    (*  yp578 ) = (  x576 );
    return ( * (  y577 ) );
}

static  int32_t   u8_dash_i32249 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed250 ) ( (  x672 ) ) );
}

static  uint8_t   op_dash_sub257 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  struct Maybe_39   parse_dash_digit241 (    struct Char_10  c1422 ) {
    if ( ( (  is_dash_digit242 ) ( (  c1422 ) ) ) ) {
        return ( ( Maybe_39_Just ) ( ( (  u8_dash_i32249 ) ( (  op_dash_sub257 ( ( (  char_dash_u8145 ) ( (  c1422 ) ) ) , ( (  char_dash_u8145 ) ( ( (  from_dash_charlike21 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_39) { .tag = Maybe_39_None_t } );
    }
}

static  int32_t   parse_dash_digit232 (    struct Char_10  c3213 ) {
    return ( (  or_dash_fail233 ) ( ( (  parse_dash_digit241 ) ( (  c3213 ) ) ) ,  ( (  from_dash_string138 ) ( ( (uint8_t*)"could not parse digit" ) ,  ( 21 ) ) ) ) );
}

static  enum Unit_7   lam206 (   struct env199* env ,    struct Char_10  b3268 ) {
    return ( (  add_dash_battery207 ) ( ( env->j3266 ) ,  ( (  parse_dash_digit232 ) ( (  b3268 ) ) ) ) );
}

struct Slice_260 {
    int32_t *  f_ptr;
    size_t  f_count;
};

struct SliceIter_261 {
    struct Slice_260  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_261   into_dash_iter262 (    struct Slice_260  self1993 ) {
    return ( (struct SliceIter_261) { .f_slice = (  self1993 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_39   next263 (    struct SliceIter_261 *  self1999 ) {
    size_t  off2000 = ( ( * (  self1999 ) ) .f_current_dash_offset );
    if ( (  cmp29 ( (  op_dash_add55 ( (  off2000 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1999 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_39) { .tag = Maybe_39_None_t } );
    }
    int32_t  elem2001 = ( * ( (  offset_dash_ptr222 ) ( ( ( ( * (  self1999 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64144 ) ( (  off2000 ) ) ) ) ) );
    (*  self1999 ) .f_current_dash_offset = (  op_dash_add55 ( (  off2000 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_39_Just ) ( (  elem2001 ) ) );
}

static  int64_t   reduce259 (    struct Slice_260  iterable1016 ,    int64_t  base1018 ,    int64_t (*  fun1020 )(    int32_t  ,    int64_t  ) ) {
    int64_t  x1021 = (  base1018 );
    struct SliceIter_261  it1022 = ( (  into_dash_iter262 ) ( (  iterable1016 ) ) );
    while ( ( true ) ) {
        struct Maybe_39  dref1023 = ( (  next263 ) ( ( & (  it1022 ) ) ) );
        if ( dref1023.tag == Maybe_39_None_t ) {
            return (  x1021 );
        }
        else {
            if ( dref1023.tag == Maybe_39_Just_t ) {
                x1021 = ( (  fun1020 ) ( ( dref1023 .stuff .Maybe_39_Just_s .field0 ) ,  (  x1021 ) ) );
            }
        }
    }
    const char*  temp264 = ( (  from_dash_string3 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp264);
    abort ( );
    ( Unit_7_Unit );
    int64_t  temp265;
    return (  temp265 );
}

static  int32_t *   cast267 (    struct Array_191 *  x356 ) {
    return ( (int32_t * ) (  x356 ) );
}

static  struct Slice_260   as_dash_slice266 (    struct Array_191 *  arr2462 ) {
    return ( (struct Slice_260) { .f_ptr = ( (  cast267 ) ( (  arr2462 ) ) ) , .f_count = ( (size_t ) ( 12 ) ) } );
}

static  int64_t   i32_dash_i64269 (    int32_t  x609 ) {
    return ( (int64_t ) (  x609 ) );
}

static  int64_t   lam268 (    int32_t  j3232 ,    int64_t  s3234 ) {
    return (  op_dash_add152 ( (  op_dash_mul49 ( (  s3234 ) , (  from_dash_integral47 ( 10 ) ) ) ) , ( (  i32_dash_i64269 ) ( (  j3232 ) ) ) ) );
}

static  int64_t   joltage258 (    struct JoltageUltra_190 *  j3229 ) {
    return ( (  reduce259 ) ( ( (  as_dash_slice266 ) ( ( & ( ( * (  j3229 ) ) .f_batts ) ) ) ) ,  (  from_dash_integral47 ( 0 ) ) ,  (  lam268 ) ) );
}

static  int64_t   day2_dash_max_dash_joltage_dash_from_dash_line189 (    struct StrView_111  line3265 ) {
    struct JoltageUltra_190  temp192 = ( ( (  empty_dash_joltage_dash_ultra193 ) ( ) ) );
    struct JoltageUltra_190 *  j3266 = ( &temp192 );
    struct env199 envinst199 = {
        .j3266 =  j3266 ,
    };
    ( (  for_dash_each198 ) ( (  line3265 ) ,  ( (struct envunion200){ .fun = (  enum Unit_7  (*) (  struct env199*  ,    struct Char_10  ) )lam206 , .env =  envinst199 } ) ) );
    return ( (  joltage258 ) ( (  j3266 ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2185 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2186 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2187 = ( (  from_dash_integral0 ( 8 ) ) );
    ( ( setlocale ) ( ( (  lc_dash_ctype1 ) ( ) ) ,  ( (  from_dash_string3 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    enum CAllocator_4  al3204 = ( (  idc5 ) ( ) );
    ( (  println6 ) ( ( (  sum108 ) ( ( (  map153 ) ( ( (  lines155 ) ( ( (  read_dash_contents156 ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"day3" ) ,  ( 4 ) ) ) ,  (  al3204 ) ) ) ) ) ,  (  day2_dash_max_dash_joltage_dash_from_dash_line189 ) ) ) ) ) ) );
}
