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

static  enum CAllocator_4   get_dash_c_dash_allocator5 (  ) {
    return ( CAllocator_4_CAllocator );
}

struct Safe_6 {
    int32_t  f_zero_dash_num;
    int32_t  f_dial;
};

enum Unit_8 {
    Unit_8_Unit,
};

struct Char_11 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct StrConcat_10 {
    struct Safe_6  field0;
    struct Char_11  field1;
};

static struct StrConcat_10 StrConcat_10_StrConcat (  struct Safe_6  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_10 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_20 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct StrView_19 {
    struct Slice_20  f_contents;
};

struct StrViewIter_18 {
    struct StrView_19  f_ds;
    size_t  f_i;
};

struct IntStrIter_21 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_17 {
    struct StrViewIter_18  f_left;
    struct IntStrIter_21  f_right;
};

struct StrConcatIter_16 {
    struct StrConcatIter_17  f_left;
    struct StrViewIter_18  f_right;
};

struct StrConcatIter_15 {
    struct StrConcatIter_16  f_left;
    struct IntStrIter_21  f_right;
};

struct StrConcatIter_14 {
    struct StrConcatIter_15  f_left;
    struct StrViewIter_18  f_right;
};

enum EmptyIter_23 {
    EmptyIter_23_EmptyIter,
};

struct AppendIter_22 {
    enum EmptyIter_23  f_it;
    struct Char_11  f_elem;
    bool  f_appended;
};

struct StrConcatIter_13 {
    struct StrConcatIter_14  f_left;
    struct AppendIter_22  f_right;
};

static  struct StrConcatIter_13   into_dash_iter25 (    struct StrConcatIter_13  self1181 ) {
    return (  self1181 );
}

struct Maybe_26 {
    enum {
        Maybe_26_None_t,
        Maybe_26_Just_t,
    } tag;
    union {
        struct {
            struct Char_11  field0;
        } Maybe_26_Just_s;
    } stuff;
};

static struct Maybe_26 Maybe_26_Just (  struct Char_11  field0 ) {
    return ( struct Maybe_26 ) { .tag = Maybe_26_Just_t, .stuff = { .Maybe_26_Just_s = { .field0 = field0 } } };
};

enum Ordering_34 {
    Ordering_34_LT,
    Ordering_34_EQ,
    Ordering_34_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_34   cmp33 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

static  int64_t   op_dash_mul36 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  uint8_t *   offset_dash_ptr35 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp37;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul36 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp37 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   cast38 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   size_dash_i6439 (    size_t  x597 ) {
    return ( (int64_t ) (  x597 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_34   cmp42 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   from_dash_integral43 (    size_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  size_t   next_dash_char41 (    uint8_t *  p1154 ) {
    uint8_t  pb1155 = ( * (  p1154 ) );
    if ( (  cmp42 ( (  pb1155 ) , (  from_dash_integral43 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp42 ( (  pb1155 ) , (  from_dash_integral43 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp42 ( (  pb1155 ) , (  from_dash_integral43 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp42 ( (  pb1155 ) , (  from_dash_integral43 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp44 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp44);
                    abort ( );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_11   scan_dash_from_dash_mem40 (    uint8_t *  p1158 ) {
    size_t  clen1159 = ( (  next_dash_char41 ) ( (  p1158 ) ) );
    if ( (  cmp33 ( (  clen1159 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp45 = ( (  from_dash_string3 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp45);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (struct Char_11) { .f_ptr = (  p1158 ) , .f_num_dash_bytes = (  clen1159 ) } );
}

static  size_t   op_dash_add46 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_26   next32 (    struct StrViewIter_18 *  self1209 ) {
    if ( (  cmp33 ( ( ( * (  self1209 ) ) .f_i ) , ( ( ( ( * (  self1209 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_26) { .tag = Maybe_26_None_t } );
    }
    uint8_t *  char_dash_ptr1210 = ( ( (  offset_dash_ptr35 ) ( ( (  cast38 ) ( ( ( ( ( * (  self1209 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i6439 ) ( ( ( * (  self1209 ) ) .f_i ) ) ) ) ) );
    struct Char_11  char1211 = ( (  scan_dash_from_dash_mem40 ) ( (  char_dash_ptr1210 ) ) );
    (*  self1209 ) .f_i = (  op_dash_add46 ( ( ( * (  self1209 ) ) .f_i ) , ( (  char1211 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_26_Just ) ( (  char1211 ) ) );
}

static  struct Char_11   from_dash_charlike48 (    uint8_t *  ptr1162 ,    size_t  num_dash_bytes1164 ) {
    uint8_t *  ptr1165 = ( ( (  cast38 ) ( (  ptr1162 ) ) ) );
    return ( (  scan_dash_from_dash_mem40 ) ( (  ptr1165 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_34   cmp49 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

struct Range_52 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_52 Range_52_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_52 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env53 {
    ;
    int32_t  base1277;
};

struct envunion54 {
    int32_t  (*fun) (  struct env53*  ,    int32_t  ,    int32_t  );
    struct env53 env;
};

struct RangeIter_55 {
    struct Range_52  field0;
    int32_t  field1;
};

static struct RangeIter_55 RangeIter_55_RangeIter (  struct Range_52  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_55 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_55   into_dash_iter56 (    struct Range_52  dref789 ) {
    return ( ( RangeIter_55_RangeIter ) ( ( ( Range_52_Range ) ( ( dref789 .field0 ) ,  ( dref789 .field1 ) ) ) ,  ( dref789 .field0 ) ) );
}

struct Maybe_57 {
    enum {
        Maybe_57_None_t,
        Maybe_57_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_57_Just_s;
    } stuff;
};

static struct Maybe_57 Maybe_57_Just (  int32_t  field0 ) {
    return ( struct Maybe_57 ) { .tag = Maybe_57_Just_t, .stuff = { .Maybe_57_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add59 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_57   next58 (    struct RangeIter_55 *  self797 ) {
    struct RangeIter_55  dref798 = ( * (  self797 ) );
    if ( true ) {
        if ( (  cmp49 ( ( dref798 .field1 ) , ( dref798 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_57) { .tag = Maybe_57_None_t } );
        }
        struct Maybe_57  x802 = ( ( Maybe_57_Just ) ( ( dref798 .field1 ) ) );
        (*  self797 ) = ( ( RangeIter_55_RangeIter ) ( ( ( Range_52_Range ) ( ( dref798 .field0 .field0 ) ,  ( dref798 .field0 .field1 ) ) ) ,  (  op_dash_add59 ( ( dref798 .field1 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
        return (  x802 );
    }
}

static  int32_t   reduce51 (    struct Range_52  iterable1016 ,    int32_t  base1018 ,   struct envunion54  fun1020 ) {
    int32_t  x1021 = (  base1018 );
    struct RangeIter_55  it1022 = ( (  into_dash_iter56 ) ( (  iterable1016 ) ) );
    while ( ( true ) ) {
        struct Maybe_57  dref1023 = ( (  next58 ) ( ( & (  it1022 ) ) ) );
        if ( dref1023.tag == Maybe_57_None_t ) {
            return (  x1021 );
        }
        else {
            if ( dref1023.tag == Maybe_57_Just_t ) {
                struct envunion54  temp60 = (  fun1020 );
                x1021 = ( temp60.fun ( &temp60.env ,  ( dref1023 .stuff .Maybe_57_Just_s .field0 ) ,  (  x1021 ) ) );
            }
        }
    }
    const char*  temp61 = ( (  from_dash_string3 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp61);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp62;
    return (  temp62 );
}

static  struct Range_52   to63 (    int32_t  from780 ,    int32_t  to782 ) {
    return ( ( Range_52_Range ) ( (  from780 ) ,  (  to782 ) ) );
}

static  int32_t   op_dash_sub64 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  int32_t   op_dash_mul66 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   lam65 (   struct env53* env ,    int32_t  item1281 ,    int32_t  x1283 ) {
    return (  op_dash_mul66 ( (  x1283 ) , ( env->base1277 ) ) );
}

static  int32_t   pow50 (    int32_t  base1277 ,    int32_t  p1279 ) {
    struct env53 envinst53 = {
        .base1277 =  base1277 ,
    };
    return ( (  reduce51 ) ( ( (  to63 ) ( (  from_dash_integral2 ( 0 ) ) ,  (  op_dash_sub64 ( (  p1279 ) , (  from_dash_integral2 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral2 ( 1 ) ) ,  ( (struct envunion54){ .fun = (  int32_t  (*) (  struct env53*  ,    int32_t  ,    int32_t  ) )lam65 , .env =  envinst53 } ) ) );
}

static  int32_t   op_dash_div67 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast68 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  size_t   op_dash_sub71 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  void *   cast_dash_ptr77 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of78 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed75 (  ) {
    size_t  temp76;
    size_t  x573 = (  temp76 );
    ( ( memset ) ( ( (  cast_dash_ptr77 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of78 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  uint8_t *   cast79 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed73 (    uint8_t  x576 ) {
    size_t  temp74 = ( (  zeroed75 ) ( ) );
    size_t *  y577 = ( &temp74 );
    uint8_t *  yp578 = ( (  cast79 ) ( (  y577 ) ) );
    (*  yp578 ) = (  x576 );
    return ( * (  y577 ) );
}

static  size_t   u8_dash_size72 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed73 ) ( (  x666 ) ) );
}

static  uint8_t   size_dash_u881 (    size_t  x642 ) {
    return ( (uint8_t ) (  x642 ) );
}

static  size_t   op_dash_div82 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer80 (    uint8_t *  ptr681 ) {
    return ( (  size_dash_u881 ) ( (  op_dash_div82 ( ( ( (size_t ) (  ptr681 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  size_t   op_dash_mul83 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer70 (    uint8_t *  ptr684 ,    uint8_t  b686 ) {
    size_t  s687 = ( ( (size_t ) (  ptr684 ) ) );
    size_t  exp688 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add46 ( (  op_dash_sub71 ( (  s687 ) , ( (  u8_dash_size72 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer80 ) ( (  ptr684 ) ) ) ) ) ) ) , (  op_dash_mul83 ( (  exp688 ) , ( (  u8_dash_size72 ) ( (  b686 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast84 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_11   char_dash_from_dash_u869 (    uint8_t  b1168 ) {
    uint8_t *  ptr1169 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer70 ) ( ( ( (  cast84 ) ( ( (  u8_dash_size72 ) ( (  b1168 ) ) ) ) ) ) ,  (  from_dash_integral43 ( 103 ) ) ) );
    return ( (struct Char_11) { .f_ptr = (  ptr1169 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  uint8_t   op_dash_add85 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_26   next47 (    struct IntStrIter_21 *  self1290 ) {
    if ( ( ( * (  self1290 ) ) .f_negative ) ) {
        (*  self1290 ) .f_negative = ( false );
        return ( ( Maybe_26_Just ) ( ( (  from_dash_charlike48 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp49 ( ( ( * (  self1290 ) ) .f_len ) , (  from_dash_integral2 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_26) { .tag = Maybe_26_None_t } );
    }
    int32_t  trim_dash_down1291 = ( (  pow50 ) ( (  from_dash_integral2 ( 10 ) ) ,  (  op_dash_sub64 ( ( ( * (  self1290 ) ) .f_len ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
    int32_t  upper1292 = (  op_dash_div67 ( ( ( * (  self1290 ) ) .f_int ) , (  trim_dash_down1291 ) ) );
    int32_t  upper_dash_mask1293 = (  op_dash_mul66 ( (  op_dash_div67 ( (  upper1292 ) , (  from_dash_integral2 ( 10 ) ) ) ) , (  from_dash_integral2 ( 10 ) ) ) );
    uint8_t  digit1294 = ( ( (  cast68 ) ( (  op_dash_sub64 ( (  upper1292 ) , (  upper_dash_mask1293 ) ) ) ) ) );
    (*  self1290 ) .f_len = (  op_dash_sub64 ( ( ( * (  self1290 ) ) .f_len ) , (  from_dash_integral2 ( 1 ) ) ) );
    struct Char_11  digit_dash_char1295 = ( (  char_dash_from_dash_u869 ) ( (  op_dash_add85 ( (  digit1294 ) , (  from_dash_integral43 ( 48 ) ) ) ) ) );
    return ( ( Maybe_26_Just ) ( (  digit_dash_char1295 ) ) );
}

static  struct Maybe_26   next31 (    struct StrConcatIter_17 *  self1184 ) {
    struct Maybe_26  dref1185 = ( (  next32 ) ( ( & ( ( * (  self1184 ) ) .f_left ) ) ) );
    if ( dref1185.tag == Maybe_26_Just_t ) {
        return ( ( Maybe_26_Just ) ( ( dref1185 .stuff .Maybe_26_Just_s .field0 ) ) );
    }
    else {
        if ( dref1185.tag == Maybe_26_None_t ) {
            return ( (  next47 ) ( ( & ( ( * (  self1184 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_26   next30 (    struct StrConcatIter_16 *  self1184 ) {
    struct Maybe_26  dref1185 = ( (  next31 ) ( ( & ( ( * (  self1184 ) ) .f_left ) ) ) );
    if ( dref1185.tag == Maybe_26_Just_t ) {
        return ( ( Maybe_26_Just ) ( ( dref1185 .stuff .Maybe_26_Just_s .field0 ) ) );
    }
    else {
        if ( dref1185.tag == Maybe_26_None_t ) {
            return ( (  next32 ) ( ( & ( ( * (  self1184 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_26   next29 (    struct StrConcatIter_15 *  self1184 ) {
    struct Maybe_26  dref1185 = ( (  next30 ) ( ( & ( ( * (  self1184 ) ) .f_left ) ) ) );
    if ( dref1185.tag == Maybe_26_Just_t ) {
        return ( ( Maybe_26_Just ) ( ( dref1185 .stuff .Maybe_26_Just_s .field0 ) ) );
    }
    else {
        if ( dref1185.tag == Maybe_26_None_t ) {
            return ( (  next47 ) ( ( & ( ( * (  self1184 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_26   next28 (    struct StrConcatIter_14 *  self1184 ) {
    struct Maybe_26  dref1185 = ( (  next29 ) ( ( & ( ( * (  self1184 ) ) .f_left ) ) ) );
    if ( dref1185.tag == Maybe_26_Just_t ) {
        return ( ( Maybe_26_Just ) ( ( dref1185 .stuff .Maybe_26_Just_s .field0 ) ) );
    }
    else {
        if ( dref1185.tag == Maybe_26_None_t ) {
            return ( (  next32 ) ( ( & ( ( * (  self1184 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_26   next87 (    enum EmptyIter_23 *  dref698 ) {
    return ( (struct Maybe_26) { .tag = Maybe_26_None_t } );
}

static  struct Maybe_26   next86 (    struct AppendIter_22 *  self945 ) {
    struct Maybe_26  dref946 = ( (  next87 ) ( ( & ( ( * (  self945 ) ) .f_it ) ) ) );
    if ( dref946.tag == Maybe_26_Just_t ) {
        return ( ( Maybe_26_Just ) ( ( dref946 .stuff .Maybe_26_Just_s .field0 ) ) );
    }
    else {
        if ( dref946.tag == Maybe_26_None_t ) {
            if ( ( ! ( ( * (  self945 ) ) .f_appended ) ) ) {
                (*  self945 ) .f_appended = ( true );
                return ( ( Maybe_26_Just ) ( ( ( * (  self945 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_26) { .tag = Maybe_26_None_t } );
        }
    }
}

static  struct Maybe_26   next27 (    struct StrConcatIter_13 *  self1184 ) {
    struct Maybe_26  dref1185 = ( (  next28 ) ( ( & ( ( * (  self1184 ) ) .f_left ) ) ) );
    if ( dref1185.tag == Maybe_26_Just_t ) {
        return ( ( Maybe_26_Just ) ( ( dref1185 .stuff .Maybe_26_Just_s .field0 ) ) );
    }
    else {
        if ( dref1185.tag == Maybe_26_None_t ) {
            return ( (  next86 ) ( ( & ( ( * (  self1184 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each12 (    struct StrConcatIter_13  iterable997 ,    enum Unit_8 (*  fun999 )(    struct Char_11  ) ) {
    struct StrConcatIter_13  temp24 = ( (  into_dash_iter25 ) ( (  iterable997 ) ) );
    struct StrConcatIter_13 *  it1000 = ( &temp24 );
    while ( ( true ) ) {
        struct Maybe_26  dref1001 = ( (  next27 ) ( (  it1000 ) ) );
        if ( dref1001.tag == Maybe_26_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1001.tag == Maybe_26_Just_t ) {
                ( (  fun999 ) ( ( dref1001 .stuff .Maybe_26_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_95 {
    struct StrView_19  field0;
    int32_t  field1;
};

static struct StrConcat_95 StrConcat_95_StrConcat (  struct StrView_19  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_95 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_94 {
    struct StrConcat_95  field0;
    struct StrView_19  field1;
};

static struct StrConcat_94 StrConcat_94_StrConcat (  struct StrConcat_95  field0 ,  struct StrView_19  field1 ) {
    return ( struct StrConcat_94 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_93 {
    struct StrConcat_94  field0;
    int32_t  field1;
};

static struct StrConcat_93 StrConcat_93_StrConcat (  struct StrConcat_94  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_93 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_92 {
    struct StrConcat_93  field0;
    struct StrView_19  field1;
};

static struct StrConcat_92 StrConcat_92_StrConcat (  struct StrConcat_93  field0 ,  struct StrView_19  field1 ) {
    return ( struct StrConcat_92 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrViewIter_18   into_dash_iter104 (    struct StrView_19  self1203 ) {
    return ( (struct StrViewIter_18) { .f_ds = (  self1203 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_18   chars103 (    struct StrView_19  self1217 ) {
    return ( (  into_dash_iter104 ) ( (  self1217 ) ) );
}

static  int32_t   op_dash_neg107 (    int32_t  x227 ) {
    return ( (  from_dash_integral2 ( 0 ) ) - (  x227 ) );
}

static  bool   eq109 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  int32_t   count_dash_digits108 (    int32_t  self1298 ) {
    if ( (  eq109 ( (  self1298 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
        return (  from_dash_integral2 ( 1 ) );
    }
    int32_t  digits1299 = (  from_dash_integral2 ( 0 ) );
    while ( (  cmp49 ( (  self1298 ) , (  from_dash_integral2 ( 0 ) ) ) == 2 ) ) {
        self1298 = (  op_dash_div67 ( (  self1298 ) , (  from_dash_integral2 ( 10 ) ) ) );
        digits1299 = (  op_dash_add59 ( (  digits1299 ) , (  from_dash_integral2 ( 1 ) ) ) );
    }
    return (  digits1299 );
}

static  struct IntStrIter_21   int_dash_iter106 (    int32_t  int1302 ) {
    if ( (  cmp49 ( (  int1302 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_21) { .f_int = (  op_dash_neg107 ( (  int1302 ) ) ) , .f_len = ( (  count_dash_digits108 ) ( (  op_dash_neg107 ( (  int1302 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_21) { .f_int = (  int1302 ) , .f_len = ( (  count_dash_digits108 ) ( (  int1302 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_21   chars105 (    int32_t  self1311 ) {
    return ( (  int_dash_iter106 ) ( (  self1311 ) ) );
}

static  struct StrConcatIter_17   into_dash_iter102 (    struct StrConcat_95  dref1188 ) {
    return ( (struct StrConcatIter_17) { .f_left = ( (  chars103 ) ( ( dref1188 .field0 ) ) ) , .f_right = ( (  chars105 ) ( ( dref1188 .field1 ) ) ) } );
}

static  struct StrConcatIter_17   chars101 (    struct StrConcat_95  self1199 ) {
    return ( (  into_dash_iter102 ) ( (  self1199 ) ) );
}

static  struct StrConcatIter_16   into_dash_iter100 (    struct StrConcat_94  dref1188 ) {
    return ( (struct StrConcatIter_16) { .f_left = ( (  chars101 ) ( ( dref1188 .field0 ) ) ) , .f_right = ( (  chars103 ) ( ( dref1188 .field1 ) ) ) } );
}

static  struct StrConcatIter_16   chars99 (    struct StrConcat_94  self1199 ) {
    return ( (  into_dash_iter100 ) ( (  self1199 ) ) );
}

static  struct StrConcatIter_15   into_dash_iter98 (    struct StrConcat_93  dref1188 ) {
    return ( (struct StrConcatIter_15) { .f_left = ( (  chars99 ) ( ( dref1188 .field0 ) ) ) , .f_right = ( (  chars105 ) ( ( dref1188 .field1 ) ) ) } );
}

static  struct StrConcatIter_15   chars97 (    struct StrConcat_93  self1199 ) {
    return ( (  into_dash_iter98 ) ( (  self1199 ) ) );
}

static  struct StrConcatIter_14   into_dash_iter96 (    struct StrConcat_92  dref1188 ) {
    return ( (struct StrConcatIter_14) { .f_left = ( (  chars97 ) ( ( dref1188 .field0 ) ) ) , .f_right = ( (  chars103 ) ( ( dref1188 .field1 ) ) ) } );
}

static  struct StrConcatIter_14   chars91 (    struct StrConcat_92  self1199 ) {
    return ( (  into_dash_iter96 ) ( (  self1199 ) ) );
}

static  struct StrView_19   from_dash_string110 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_19) { .f_contents = ( (struct Slice_20) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  struct StrConcatIter_14   chars90 (    struct Safe_6  s3210 ) {
    return ( (  chars91 ) ( ( ( StrConcat_92_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( ( StrConcat_94_StrConcat ) ( ( ( StrConcat_95_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"Safe [ (" ) ,  ( 8 ) ) ) ,  ( (  s3210 ) .f_dial ) ) ) ,  ( (  from_dash_string110 ) ( ( (uint8_t*)") :::: " ) ,  ( 7 ) ) ) ) ) ,  ( (  s3210 ) .f_zero_dash_num ) ) ) ,  ( (  from_dash_string110 ) ( ( (uint8_t*)" ]" ) ,  ( 2 ) ) ) ) ) ) );
}

static  enum EmptyIter_23   into_dash_iter115 (    enum EmptyIter_23  self696 ) {
    return (  self696 );
}

static  struct AppendIter_22   append114 (    enum EmptyIter_23  it929 ,    struct Char_11  e931 ) {
    return ( (struct AppendIter_22) { .f_it = ( (  into_dash_iter115 ) ( (  it929 ) ) ) , .f_elem = (  e931 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_22   cons113 (    enum EmptyIter_23  it934 ,    struct Char_11  e936 ) {
    return ( (  append114 ) ( (  it934 ) ,  (  e936 ) ) );
}

static  enum EmptyIter_23   nil116 (  ) {
    return ( EmptyIter_23_EmptyIter );
}

static  struct AppendIter_22   single112 (    struct Char_11  e939 ) {
    return ( (  cons113 ) ( ( (  nil116 ) ( ) ) ,  (  e939 ) ) );
}

static  struct AppendIter_22   chars111 (    struct Char_11  self1177 ) {
    return ( (  single112 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_13   into_dash_iter89 (    struct StrConcat_10  dref1188 ) {
    return ( (struct StrConcatIter_13) { .f_left = ( (  chars90 ) ( ( dref1188 .field0 ) ) ) , .f_right = ( (  chars111 ) ( ( dref1188 .field1 ) ) ) } );
}

static  struct StrConcatIter_13   chars88 (    struct StrConcat_10  self1199 ) {
    return ( (  into_dash_iter89 ) ( (  self1199 ) ) );
}

struct Array_119 {
    uint8_t _arr [4];
};

struct Scalar_121 {
    uint32_t  f_value;
};

struct CharDestructured_120 {
    enum {
        CharDestructured_120_Ref_t,
        CharDestructured_120_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_11  field0;
        } CharDestructured_120_Ref_s;
        struct {
            struct Scalar_121  field0;
        } CharDestructured_120_Scalar_s;
    } stuff;
};

static struct CharDestructured_120 CharDestructured_120_Ref (  struct Char_11  field0 ) {
    return ( struct CharDestructured_120 ) { .tag = CharDestructured_120_Ref_t, .stuff = { .CharDestructured_120_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_120 CharDestructured_120_Scalar (  struct Scalar_121  field0 ) {
    return ( struct CharDestructured_120 ) { .tag = CharDestructured_120_Scalar_t, .stuff = { .CharDestructured_120_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq123 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint32_t   size_dash_u32124 (    size_t  x636 ) {
    return ( (uint32_t ) (  x636 ) );
}

static  size_t   cast125 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_120   destructure122 (    struct Char_11  c1135 ) {
    if ( (  eq123 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer80 ) ( ( (  c1135 ) .f_ptr ) ) ) , (  from_dash_integral43 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_120_Scalar ) ( ( (struct Scalar_121) { .f_value = ( (  size_dash_u32124 ) ( ( ( (  cast125 ) ( ( (  c1135 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_120_Ref ) ( (  c1135 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_34   cmp127 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral128 (    size_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast131 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8130 (    uint32_t  x660 ) {
    return ( (  cast131 ) ( (  x660 ) ) );
}

static  struct Array_119   from_dash_listlike132 (    struct Array_119 *  self330 ) {
    return ( * (  self330 ) );
}

static  struct Array_119   unscalarize126 (    struct Scalar_121  scalar1138 ) {
    if ( (  cmp127 ( ( (  scalar1138 ) .f_value ) , (  from_dash_integral128 ( 128 ) ) ) == 2 ) ) {
        const char*  temp129 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp129);
        abort ( );
        ( Unit_8_Unit );
    }
    uint8_t  b1139 = ( (  u32_dash_u8130 ) ( ( (  scalar1138 ) .f_value ) ) );
    struct Array_119  temp133 = ( (struct Array_119) { ._arr = { (  b1139 ) , (  from_dash_integral43 ( 0 ) ) , (  from_dash_integral43 ( 0 ) ) , (  from_dash_integral43 ( 0 ) ) } } );
    return ( (  from_dash_listlike132 ) ( ( &temp133 ) ) );
}

static  uint8_t *   cast_dash_ptr134 (    struct Array_119 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Char_11   regularize118 (    struct Char_11  c1142 ,    struct Array_119 *  possible_dash_scalar_dash_mem1144 ) {
    struct CharDestructured_120  dref1145 = ( (  destructure122 ) ( (  c1142 ) ) );
    if ( dref1145.tag == CharDestructured_120_Ref_t ) {
        return ( dref1145 .stuff .CharDestructured_120_Ref_s .field0 );
    }
    else {
        if ( dref1145.tag == CharDestructured_120_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1144 ) = ( (  unscalarize126 ) ( ( dref1145 .stuff .CharDestructured_120_Scalar_s .field0 ) ) );
            return ( (struct Char_11) { .f_ptr = ( (  cast_dash_ptr134 ) ( (  possible_dash_scalar_dash_mem1144 ) ) ) , .f_num_dash_bytes = ( (  c1142 ) .f_num_dash_bytes ) } );
        }
    }
}

static  int32_t   size_dash_i32137 (    size_t  x633 ) {
    return ( (int32_t ) (  x633 ) );
}

static  enum Unit_8   printf_dash_char117 (    struct Char_11  c1150 ) {
    struct Array_119  temp136;
    struct Array_119  temp135 = (  temp136 );
    struct Char_11  c1151 = ( (  regularize118 ) ( (  c1150 ) ,  ( &temp135 ) ) );
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32137 ) ( ( (  c1151 ) .f_num_dash_bytes ) ) ) ,  ( (  c1151 ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print9 (    struct StrConcat_10  s1226 ) {
    ( (  for_dash_each12 ) ( ( (  chars88 ) ( (  s1226 ) ) ) ,  (  printf_dash_char117 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println7 (    struct Safe_6  s1229 ) {
    ( (  print9 ) ( ( ( StrConcat_10_StrConcat ) ( (  s1229 ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct LineIter_139 {
    struct StrView_19  f_og;
    size_t  f_last;
};

static  struct LineIter_139   into_dash_iter140 (    struct LineIter_139  self2423 ) {
    return (  self2423 );
}

struct Maybe_141 {
    enum {
        Maybe_141_None_t,
        Maybe_141_Just_t,
    } tag;
    union {
        struct {
            struct StrView_19  field0;
        } Maybe_141_Just_s;
    } stuff;
};

static struct Maybe_141 Maybe_141_Just (  struct StrView_19  field0 ) {
    return ( struct Maybe_141 ) { .tag = Maybe_141_Just_t, .stuff = { .Maybe_141_Just_s = { .field0 = field0 } } };
};

struct Maybe_145 {
    enum {
        Maybe_145_None_t,
        Maybe_145_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_145_Just_s;
    } stuff;
};

static struct Maybe_145 Maybe_145_Just (  uint8_t  field0 ) {
    return ( struct Maybe_145 ) { .tag = Maybe_145_Just_t, .stuff = { .Maybe_145_Just_s = { .field0 = field0 } } };
};

struct StrConcat_149 {
    struct StrView_19  field0;
    size_t  field1;
};

static struct StrConcat_149 StrConcat_149_StrConcat (  struct StrView_19  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_149 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_148 {
    struct StrConcat_149  field0;
    struct StrView_19  field1;
};

static struct StrConcat_148 StrConcat_148_StrConcat (  struct StrConcat_149  field0 ,  struct StrView_19  field1 ) {
    return ( struct StrConcat_148 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_147 {
    struct StrConcat_148  field0;
    size_t  field1;
};

static struct StrConcat_147 StrConcat_147_StrConcat (  struct StrConcat_148  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_147 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_146 {
    struct StrConcat_147  field0;
    struct Char_11  field1;
};

static struct StrConcat_146 StrConcat_146_StrConcat (  struct StrConcat_147  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_146 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_153 {
    struct StrView_19  field0;
    struct StrConcat_146  field1;
};

static struct StrConcat_153 StrConcat_153_StrConcat (  struct StrView_19  field0 ,  struct StrConcat_146  field1 ) {
    return ( struct StrConcat_153 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_152 {
    struct StrConcat_153  field0;
    struct Char_11  field1;
};

static struct StrConcat_152 StrConcat_152_StrConcat (  struct StrConcat_153  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_152 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str155 (    struct StrView_19  self1214 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32137 ) ( ( ( (  self1214 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1214 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str160 (    size_t  self1314 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1314 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str159 (    struct StrConcat_149  self1193 ) {
    struct StrConcat_149  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str160 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str158 (    struct StrConcat_148  self1193 ) {
    struct StrConcat_148  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str159 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str155 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str157 (    struct StrConcat_147  self1193 ) {
    struct StrConcat_147  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str158 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str160 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str161 (    struct Char_11  self1174 ) {
    ( (  printf_dash_char117 ) ( (  self1174 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str156 (    struct StrConcat_146  self1193 ) {
    struct StrConcat_146  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str157 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str154 (    struct StrConcat_153  self1193 ) {
    struct StrConcat_153  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str156 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str151 (    struct StrConcat_152  self1193 ) {
    struct StrConcat_152  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str154 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic150 (    struct StrConcat_146  errmsg1234 ) {
    ( (  print_dash_str151 ) ( ( ( StrConcat_152_StrConcat ) ( ( ( StrConcat_153_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   undefined162 (  ) {
    uint8_t  temp163;
    return (  temp163 );
}

static  uint8_t   or_dash_fail144 (    struct Maybe_145  x1244 ,    struct StrConcat_146  errmsg1246 ) {
    struct Maybe_145  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_145_None_t ) {
        ( (  panic150 ) ( (  errmsg1246 ) ) );
        return ( (  undefined162 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_145_Just_t ) {
            return ( dref1247 .stuff .Maybe_145_Just_s .field0 );
        }
    }
}

static  struct Maybe_145   try_dash_get164 (    struct Slice_20  slice1919 ,    size_t  i1921 ) {
    if ( ( (  cmp33 ( (  i1921 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp33 ( (  i1921 ) , ( (  slice1919 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_145) { .tag = Maybe_145_None_t } );
    }
    uint8_t *  elem_dash_ptr1922 = ( (  offset_dash_ptr35 ) ( ( (  slice1919 ) .f_ptr ) ,  ( (  size_dash_i6439 ) ( (  i1921 ) ) ) ) );
    return ( ( Maybe_145_Just ) ( ( * (  elem_dash_ptr1922 ) ) ) );
}

static  uint8_t   get143 (    struct Slice_20  slice1925 ,    size_t  i1927 ) {
    return ( (  or_dash_fail144 ) ( ( (  try_dash_get164 ) ( (  slice1925 ) ,  (  i1927 ) ) ) ,  ( ( StrConcat_146_StrConcat ) ( ( ( StrConcat_147_StrConcat ) ( ( ( StrConcat_148_StrConcat ) ( ( ( StrConcat_149_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1927 ) ) ) ,  ( (  from_dash_string110 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1925 ) .f_count ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8165 (    struct Char_11  c1331 ) {
    struct CharDestructured_120  dref1332 = ( (  destructure122 ) ( (  c1331 ) ) );
    if ( dref1332.tag == CharDestructured_120_Ref_t ) {
        return ( * ( ( dref1332 .stuff .CharDestructured_120_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1332.tag == CharDestructured_120_Scalar_t ) {
            return ( (  u32_dash_u8130 ) ( ( ( dref1332 .stuff .CharDestructured_120_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  size_t   min168 (    size_t  l1258 ,    size_t  r1260 ) {
    if ( (  cmp33 ( (  l1258 ) , (  r1260 ) ) == 0 ) ) {
        return (  l1258 );
    } else {
        return (  r1260 );
    }
}

static  struct Slice_20   subslice167 (    struct Slice_20  slice1947 ,    size_t  from1949 ,    size_t  to1951 ) {
    uint8_t *  begin_dash_ptr1952 = ( (  offset_dash_ptr35 ) ( ( (  slice1947 ) .f_ptr ) ,  ( (  size_dash_i6439 ) ( (  from1949 ) ) ) ) );
    if ( ( (  cmp33 ( (  from1949 ) , (  to1951 ) ) != 0 ) || (  cmp33 ( (  from1949 ) , ( (  slice1947 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_20) { .f_ptr = (  begin_dash_ptr1952 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1953 = (  op_dash_sub71 ( ( (  min168 ) ( (  to1951 ) ,  ( (  slice1947 ) .f_count ) ) ) , (  from1949 ) ) );
    return ( (struct Slice_20) { .f_ptr = (  begin_dash_ptr1952 ) , .f_count = (  count1953 ) } );
}

static  struct StrView_19   byte_dash_substr166 (    struct StrView_19  s2347 ,    size_t  from2349 ,    size_t  to2351 ) {
    return ( (struct StrView_19) { .f_contents = ( (  subslice167 ) ( ( (  s2347 ) .f_contents ) ,  (  from2349 ) ,  (  to2351 ) ) ) } );
}

static  struct Maybe_141   next142 (    struct LineIter_139 *  self2426 ) {
    if ( (  cmp33 ( ( ( * (  self2426 ) ) .f_last ) , ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_141) { .tag = Maybe_141_None_t } );
    }
    size_t  i2427 = ( ( * (  self2426 ) ) .f_last );
    while ( ( (  cmp33 ( (  i2427 ) , ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq123 ( ( (  get143 ) ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) ,  (  i2427 ) ) ) , ( (  char_dash_u8165 ) ( ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2427 = (  op_dash_add46 ( (  i2427 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_19  line2428 = ( (  byte_dash_substr166 ) ( ( ( * (  self2426 ) ) .f_og ) ,  ( ( * (  self2426 ) ) .f_last ) ,  (  i2427 ) ) );
    if ( (  cmp33 ( (  i2427 ) , ( ( ( ( * (  self2426 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2427 = (  op_dash_add46 ( (  i2427 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2426 ) .f_last = (  i2427 );
    return ( ( Maybe_141_Just ) ( (  line2428 ) ) );
}

static  struct Safe_6   reduce138 (    struct LineIter_139  iterable1016 ,    struct Safe_6  base1018 ,    struct Safe_6 (*  fun1020 )(    struct StrView_19  ,    struct Safe_6  ) ) {
    struct Safe_6  x1021 = (  base1018 );
    struct LineIter_139  it1022 = ( (  into_dash_iter140 ) ( (  iterable1016 ) ) );
    while ( ( true ) ) {
        struct Maybe_141  dref1023 = ( (  next142 ) ( ( & (  it1022 ) ) ) );
        if ( dref1023.tag == Maybe_141_None_t ) {
            return (  x1021 );
        }
        else {
            if ( dref1023.tag == Maybe_141_Just_t ) {
                x1021 = ( (  fun1020 ) ( ( dref1023 .stuff .Maybe_141_Just_s .field0 ) ,  (  x1021 ) ) );
            }
        }
    }
    const char*  temp169 = ( (  from_dash_string3 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp169);
    abort ( );
    ( Unit_8_Unit );
    struct Safe_6  temp170;
    return (  temp170 );
}

static  struct LineIter_139   lines171 (    struct StrView_19  s2420 ) {
    return ( (struct LineIter_139) { .f_og = (  s2420 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct StrConcat_175 {
    struct StrView_19  field0;
    const char*  field1;
};

static struct StrConcat_175 StrConcat_175_StrConcat (  struct StrView_19  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_175 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_174 {
    struct StrConcat_175  field0;
    struct Char_11  field1;
};

static struct StrConcat_174 StrConcat_174_StrConcat (  struct StrConcat_175  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_174 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_179 {
    struct StrView_19  field0;
    struct StrConcat_174  field1;
};

static struct StrConcat_179 StrConcat_179_StrConcat (  struct StrView_19  field0 ,  struct StrConcat_174  field1 ) {
    return ( struct StrConcat_179 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_178 {
    struct StrConcat_179  field0;
    struct Char_11  field1;
};

static struct StrConcat_178 StrConcat_178_StrConcat (  struct StrConcat_179  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_178 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str183 (    const char*  self1565 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%s" ) ,  ( 2 ) ) ) ,  (  self1565 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str182 (    struct StrConcat_175  self1193 ) {
    struct StrConcat_175  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str183 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str181 (    struct StrConcat_174  self1193 ) {
    struct StrConcat_174  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str182 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str180 (    struct StrConcat_179  self1193 ) {
    struct StrConcat_179  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str181 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str177 (    struct StrConcat_178  self1193 ) {
    struct StrConcat_178  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str180 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic176 (    struct StrConcat_174  errmsg1234 ) {
    ( (  print_dash_str177 ) ( ( ( StrConcat_178_StrConcat ) ( ( ( StrConcat_179_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct StrView_19   undefined184 (  ) {
    struct StrView_19  temp185;
    return (  temp185 );
}

static  struct StrView_19   or_dash_fail173 (    struct Maybe_141  x1244 ,    struct StrConcat_174  errmsg1246 ) {
    struct Maybe_141  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_141_None_t ) {
        ( (  panic176 ) ( (  errmsg1246 ) ) );
        return ( (  undefined184 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_141_Just_t ) {
            return ( dref1247 .stuff .Maybe_141_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike187 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr192 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of193 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed190 (  ) {
    FILE *  temp191;
    FILE *  x573 = (  temp191 );
    ( ( memset ) ( ( (  cast_dash_ptr192 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of193 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  FILE *   null_dash_ptr189 (  ) {
    return ( (  zeroed190 ) ( ) );
}

static  bool   is_dash_ptr_dash_null188 (    FILE *  p583 ) {
    return ( (  p583 ) == ( (  null_dash_ptr189 ) ( ) ) );
}

static  int32_t   seek_dash_end194 (  ) {
    return (  from_dash_integral2 ( 2 ) );
}

static  int32_t   seek_dash_set195 (  ) {
    return (  from_dash_integral2 ( 0 ) );
}

struct TypeSize_198 {
    size_t  f_size;
};

static  struct TypeSize_198   get_dash_typesize197 (  ) {
    uint8_t  temp199;
    return ( (struct TypeSize_198) { .f_size = ( sizeof( ( (  temp199 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr200 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_20   allocate196 (    enum CAllocator_4  dref2111 ,    size_t  count2113 ) {
    if (!(  dref2111 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2114 = ( ( ( (  get_dash_typesize197 ) ( ) ) ) .f_size );
    uint8_t *  ptr2115 = ( (  cast_dash_ptr200 ) ( ( ( malloc ) ( (  op_dash_mul83 ( (  size2114 ) , (  count2113 ) ) ) ) ) ) );
    return ( (struct Slice_20) { .f_ptr = (  ptr2115 ) , .f_count = (  count2113 ) } );
}

static  size_t   i32_dash_size201 (    int32_t  x612 ) {
    return ( (size_t ) ( (int64_t ) (  x612 ) ) );
}

static  uint8_t *   get_dash_ptr203 (    struct Slice_20  slice1913 ,    size_t  i1915 ) {
    if ( ( (  cmp33 ( (  i1915 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp33 ( (  i1915 ) , ( (  slice1913 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic150 ) ( ( ( StrConcat_146_StrConcat ) ( ( ( StrConcat_147_StrConcat ) ( ( ( StrConcat_148_StrConcat ) ( ( ( StrConcat_149_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1915 ) ) ) ,  ( (  from_dash_string110 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1913 ) .f_count ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1916 = ( (  offset_dash_ptr35 ) ( ( (  slice1913 ) .f_ptr ) ,  ( (  size_dash_i6439 ) ( (  i1915 ) ) ) ) );
    return (  elem_dash_ptr1916 );
}

static  enum Unit_8   set202 (    struct Slice_20  slice1930 ,    size_t  i1932 ,    uint8_t  x1934 ) {
    uint8_t *  ep1935 = ( (  get_dash_ptr203 ) ( (  slice1930 ) ,  (  i1932 ) ) );
    (*  ep1935 ) = (  x1934 );
    return ( Unit_8_Unit );
}

static  struct Char_11   nullchar204 (  ) {
    return ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_141   try_dash_read_dash_contents186 (    const char*  filename2987 ,    enum CAllocator_4  al2989 ) {
    FILE *  file2990 = ( ( fopen ) ( (  filename2987 ) ,  ( (  from_dash_charlike187 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null188 ) ( (  file2990 ) ) ) ) {
        return ( (struct Maybe_141) { .tag = Maybe_141_None_t } );
    }
    ( ( fseek ) ( (  file2990 ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  seek_dash_end194 ) ( ) ) ) );
    int32_t  file_dash_size2991 = ( ( ftell ) ( (  file2990 ) ) );
    ( ( fseek ) ( (  file2990 ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  seek_dash_set195 ) ( ) ) ) );
    struct Slice_20  file_dash_buf2992 = ( ( (  allocate196 ) ( (  al2989 ) ,  (  op_dash_add46 ( ( (  i32_dash_size201 ) ( (  file_dash_size2991 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2992 ) .f_ptr ) ,  (  file_dash_size2991 ) ,  (  from_dash_integral2 ( 1 ) ) ,  (  file2990 ) ) );
    ( (  set202 ) ( (  file_dash_buf2992 ) ,  ( (  i32_dash_size201 ) ( (  file_dash_size2991 ) ) ) ,  ( (  char_dash_u8165 ) ( ( (  nullchar204 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2990 ) ) );
    struct StrView_19  str2993 = ( (struct StrView_19) { .f_contents = ( (  subslice167 ) ( (  file_dash_buf2992 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub71 ( ( (  file_dash_buf2992 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_141_Just ) ( (  str2993 ) ) );
}

static  struct StrView_19   read_dash_contents172 (    const char*  filename2996 ,    enum CAllocator_4  al2998 ) {
    return ( (  or_dash_fail173 ) ( ( (  try_dash_read_dash_contents186 ) ( (  filename2996 ) ,  (  al2998 ) ) ) ,  ( ( StrConcat_174_StrConcat ) ( ( ( StrConcat_175_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"could not open file " ) ,  ( 20 ) ) ) ,  (  filename2996 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"!" ) ,  ( 1 ) ) ) ) ) ) );
}

enum DialDir_208 {
    DialDir_208_Left,
    DialDir_208_Right,
};

struct DialTurn_207 {
    enum DialDir_208  f_dir;
    int32_t  f_amount;
};

static  int32_t   mod209 (    int32_t  l1435 ,    int32_t  d1437 ) {
    int32_t  r1438 = (  op_dash_div67 ( (  l1435 ) , (  d1437 ) ) );
    int32_t  m1439 = (  op_dash_sub64 ( (  l1435 ) , (  op_dash_mul66 ( (  r1438 ) , (  d1437 ) ) ) ) );
    if ( (  cmp49 ( (  m1439 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add59 ( (  d1437 ) , (  m1439 ) ) );
    } else {
        return (  m1439 );
    }
}

static  struct Safe_6   turn_dash_dial_dash_2206 (    struct DialTurn_207  d3239 ,    struct Safe_6  s3241 ) {
    int32_t  dial3242 = ( (  s3241 ) .f_dial );
    int32_t  zero_dash_num3243 = ( (  s3241 ) .f_zero_dash_num );
    int32_t  amount3244 = ( (  d3239 ) .f_amount );
    int32_t  num_dash_rotations3245 = (  op_dash_div67 ( (  amount3244 ) , (  from_dash_integral2 ( 100 ) ) ) );
    int32_t  amount3246 = (  op_dash_sub64 ( (  amount3244 ) , (  op_dash_mul66 ( (  from_dash_integral2 ( 100 ) ) , (  num_dash_rotations3245 ) ) ) ) );
    zero_dash_num3243 = (  op_dash_add59 ( (  zero_dash_num3243 ) , (  num_dash_rotations3245 ) ) );
    enum DialDir_208  dref3247 = ( (  d3239 ) .f_dir );
    switch (  dref3247 ) {
        case DialDir_208_Left : {
            bool  started_dash_at_dash_zero3248 = (  eq109 ( (  dial3242 ) , (  from_dash_integral2 ( 0 ) ) ) );
            dial3242 = (  op_dash_sub64 ( (  dial3242 ) , (  amount3246 ) ) );
            if ( ( (  cmp49 ( (  dial3242 ) , (  from_dash_integral2 ( 0 ) ) ) != 2 ) && ( ! (  started_dash_at_dash_zero3248 ) ) ) ) {
                zero_dash_num3243 = (  op_dash_add59 ( (  zero_dash_num3243 ) , (  from_dash_integral2 ( 1 ) ) ) );
            }
            break;
        }
        case DialDir_208_Right : {
            dial3242 = (  op_dash_add59 ( (  dial3242 ) , (  amount3246 ) ) );
            if ( (  cmp49 ( (  dial3242 ) , (  from_dash_integral2 ( 100 ) ) ) != 0 ) ) {
                zero_dash_num3243 = (  op_dash_add59 ( (  zero_dash_num3243 ) , (  from_dash_integral2 ( 1 ) ) ) );
            }
            break;
        }
    }
    int32_t  dial3249 = ( (  mod209 ) ( (  dial3242 ) ,  (  from_dash_integral2 ( 100 ) ) ) );
    struct Safe_6  x3250 = ( (struct Safe_6) { .f_dial = (  dial3249 ) , .f_zero_dash_num = (  zero_dash_num3243 ) } );
    return (  x3250 );
}

struct StrConcat_215 {
    struct StrView_19  field0;
    struct StrView_19  field1;
};

static struct StrConcat_215 StrConcat_215_StrConcat (  struct StrView_19  field0 ,  struct StrView_19  field1 ) {
    return ( struct StrConcat_215 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_214 {
    struct StrConcat_215  field0;
    struct Char_11  field1;
};

static struct StrConcat_214 StrConcat_214_StrConcat (  struct StrConcat_215  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_214 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str216 (    struct StrConcat_215  self1193 ) {
    struct StrConcat_215  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str155 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str213 (    struct StrConcat_214  self1193 ) {
    struct StrConcat_214  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str216 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic212 (    struct StrView_19  errmsg1234 ) {
    ( (  print_dash_str213 ) ( ( ( StrConcat_214_StrConcat ) ( ( ( StrConcat_215_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_11   undefined217 (  ) {
    struct Char_11  temp218;
    return (  temp218 );
}

static  struct Char_11   or_dash_fail211 (    struct Maybe_26  x1244 ,    struct StrView_19  errmsg1246 ) {
    struct Maybe_26  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_26_None_t ) {
        ( (  panic212 ) ( (  errmsg1246 ) ) );
        return ( (  undefined217 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_26_Just_t ) {
            return ( dref1247 .stuff .Maybe_26_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_18   into_dash_iter221 (    struct StrViewIter_18  self1206 ) {
    return (  self1206 );
}

static  struct Maybe_26   head219 (    struct StrViewIter_18  it1065 ) {
    struct StrViewIter_18  temp220 = ( (  into_dash_iter221 ) ( (  it1065 ) ) );
    return ( (  next32 ) ( ( &temp220 ) ) );
}

static  enum DialDir_208   undefined222 (  ) {
    enum DialDir_208  temp223;
    return (  temp223 );
}

static  bool   eq225 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

static  struct Array_119   uninit_dash_buf227 (  ) {
    struct Array_119  temp228;
    return (  temp228 );
}

static  int64_t   from_dash_integral230 (    size_t  x46 ) {
    return ( (int64_t ) (  x46 ) );
}

static  int64_t   op_dash_add231 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq224 (    struct Char_11  l1342 ,    struct Char_11  r1344 ) {
    if ( ( !  eq225 ( ( (  l1342 ) .f_num_dash_bytes ) , ( (  r1344 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_119  temp226 = ( (  uninit_dash_buf227 ) ( ) );
    struct Char_11  lc1345 = ( (  regularize118 ) ( (  l1342 ) ,  ( &temp226 ) ) );
    struct Array_119  temp229 = ( (  uninit_dash_buf227 ) ( ) );
    struct Char_11  rc1346 = ( (  regularize118 ) ( (  r1344 ) ,  ( &temp229 ) ) );
    int64_t  i1347 = (  from_dash_integral230 ( 0 ) );
    while ( (  cmp33 ( ( (size_t ) (  i1347 ) ) , ( (  lc1345 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq123 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1345 ) .f_ptr ) ) + (  i1347 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1346 ) .f_ptr ) ) + (  i1347 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1347 = (  op_dash_add231 ( (  i1347 ) , (  from_dash_integral230 ( 1 ) ) ) );
    }
    return ( true );
}

struct StrConcat_234 {
    struct StrView_19  field0;
    struct Char_11  field1;
};

static struct StrConcat_234 StrConcat_234_StrConcat (  struct StrView_19  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_234 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_233 {
    struct StrConcat_234  field0;
    struct Char_11  field1;
};

static struct StrConcat_233 StrConcat_233_StrConcat (  struct StrConcat_234  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_233 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_237 {
    struct StrView_19  field0;
    struct StrConcat_233  field1;
};

static struct StrConcat_237 StrConcat_237_StrConcat (  struct StrView_19  field0 ,  struct StrConcat_233  field1 ) {
    return ( struct StrConcat_237 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_236 {
    struct StrConcat_237  field0;
    struct Char_11  field1;
};

static struct StrConcat_236 StrConcat_236_StrConcat (  struct StrConcat_237  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_236 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str240 (    struct StrConcat_234  self1193 ) {
    struct StrConcat_234  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str239 (    struct StrConcat_233  self1193 ) {
    struct StrConcat_233  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str240 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str238 (    struct StrConcat_237  self1193 ) {
    struct StrConcat_237  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str239 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str235 (    struct StrConcat_236  self1193 ) {
    struct StrConcat_236  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str238 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic232 (    struct StrConcat_233  errmsg1234 ) {
    ( (  print_dash_str235 ) ( ( ( StrConcat_236_StrConcat ) ( ( ( StrConcat_237_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  int32_t   i64_dash_i32241 (    int64_t  x621 ) {
    return ( (int32_t ) (  x621 ) );
}

struct Maybe_243 {
    enum {
        Maybe_243_None_t,
        Maybe_243_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_243_Just_s;
    } stuff;
};

static struct Maybe_243 Maybe_243_Just (  int64_t  field0 ) {
    return ( struct Maybe_243 ) { .tag = Maybe_243_Just_t, .stuff = { .Maybe_243_Just_s = { .field0 = field0 } } };
};

struct StrConcat_245 {
    struct StrView_19  field0;
    struct StrViewIter_18  field1;
};

static struct StrConcat_245 StrConcat_245_StrConcat (  struct StrView_19  field0 ,  struct StrViewIter_18  field1 ) {
    return ( struct StrConcat_245 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_244 {
    struct StrConcat_245  field0;
    struct Char_11  field1;
};

static struct StrConcat_244 StrConcat_244_StrConcat (  struct StrConcat_245  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_244 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_249 {
    struct StrView_19  field0;
    struct StrConcat_244  field1;
};

static struct StrConcat_249 StrConcat_249_StrConcat (  struct StrView_19  field0 ,  struct StrConcat_244  field1 ) {
    return ( struct StrConcat_249 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_248 {
    struct StrConcat_249  field0;
    struct Char_11  field1;
};

static struct StrConcat_248 StrConcat_248_StrConcat (  struct StrConcat_249  field0 ,  struct Char_11  field1 ) {
    return ( struct StrConcat_248 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str253 (    struct StrViewIter_18  self1220 ) {
    const char*  temp254 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(StrViewIter.print-str) todo" ) ,  ( 28 ) ) );
    printf("%s\n", temp254);
    abort ( );
    ( Unit_8_Unit );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str252 (    struct StrConcat_245  self1193 ) {
    struct StrConcat_245  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str253 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str251 (    struct StrConcat_244  self1193 ) {
    struct StrConcat_244  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str252 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str250 (    struct StrConcat_249  self1193 ) {
    struct StrConcat_249  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str155 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str251 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str247 (    struct StrConcat_248  self1193 ) {
    struct StrConcat_248  dref1194 = (  self1193 );
    if ( true ) {
        ( (  print_dash_str250 ) ( ( dref1194 .field0 ) ) );
        ( (  print_dash_str161 ) ( ( dref1194 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic246 (    struct StrConcat_244  errmsg1234 ) {
    ( (  print_dash_str247 ) ( ( ( StrConcat_248_StrConcat ) ( ( ( StrConcat_249_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1234 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  int64_t   undefined255 (  ) {
    int64_t  temp256;
    return (  temp256 );
}

static  int64_t   or_dash_fail242 (    struct Maybe_243  x1244 ,    struct StrConcat_244  errmsg1246 ) {
    struct Maybe_243  dref1247 = (  x1244 );
    if ( dref1247.tag == Maybe_243_None_t ) {
        ( (  panic246 ) ( (  errmsg1246 ) ) );
        return ( (  undefined255 ) ( ) );
    }
    else {
        if ( dref1247.tag == Maybe_243_Just_t ) {
            return ( dref1247 .stuff .Maybe_243_Just_s .field0 );
        }
    }
}

struct Drop_258 {
    struct StrViewIter_18  field0;
    size_t  field1;
};

static struct Drop_258 Drop_258_Drop (  struct StrViewIter_18  field0 ,  size_t  field1 ) {
    return ( struct Drop_258 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_258   chars259 (    struct Drop_258  self1768 ) {
    return (  self1768 );
}

static  struct Maybe_26   next261 (    struct Drop_258 *  dref753 ) {
    while ( (  cmp33 ( ( (* dref753 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next32 ) ( ( & ( (* dref753 ) .field0 ) ) ) );
        (* dref753 ) .field1 = (  op_dash_sub71 ( ( (* dref753 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next32 ) ( ( & ( (* dref753 ) .field0 ) ) ) );
}

static  struct Drop_258   into_dash_iter263 (    struct Drop_258  self751 ) {
    return (  self751 );
}

static  struct Maybe_26   head260 (    struct Drop_258  it1065 ) {
    struct Drop_258  temp262 = ( (  into_dash_iter263 ) ( (  it1065 ) ) );
    return ( (  next261 ) ( ( &temp262 ) ) );
}

static  struct Maybe_243   reduce264 (    struct Drop_258  iterable1016 ,    struct Maybe_243  base1018 ,    struct Maybe_243 (*  fun1020 )(    struct Char_11  ,    struct Maybe_243  ) ) {
    struct Maybe_243  x1021 = (  base1018 );
    struct Drop_258  it1022 = ( (  into_dash_iter263 ) ( (  iterable1016 ) ) );
    while ( ( true ) ) {
        struct Maybe_26  dref1023 = ( (  next261 ) ( ( & (  it1022 ) ) ) );
        if ( dref1023.tag == Maybe_26_None_t ) {
            return (  x1021 );
        }
        else {
            if ( dref1023.tag == Maybe_26_Just_t ) {
                x1021 = ( (  fun1020 ) ( ( dref1023 .stuff .Maybe_26_Just_s .field0 ) ,  (  x1021 ) ) );
            }
        }
    }
    const char*  temp265 = ( (  from_dash_string3 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp265);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_243  temp266;
    return (  temp266 );
}

static  enum Ordering_34   cmp272 (    struct Char_11  l1350 ,    struct Char_11  r1352 ) {
    if ( ( ( !  eq225 ( ( (  l1350 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq225 ( ( (  r1352 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp273 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp273);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp42 ) ( ( (  char_dash_u8165 ) ( (  l1350 ) ) ) ,  ( (  char_dash_u8165 ) ( (  r1352 ) ) ) ) );
}

static  struct Char_11   min271 (    struct Char_11  l1258 ,    struct Char_11  r1260 ) {
    if ( (  cmp272 ( (  l1258 ) , (  r1260 ) ) == 0 ) ) {
        return (  l1258 );
    } else {
        return (  r1260 );
    }
}

static  struct Char_11   max274 (    struct Char_11  l1263 ,    struct Char_11  r1265 ) {
    if ( (  cmp272 ( (  l1263 ) , (  r1265 ) ) == 2 ) ) {
        return (  l1263 );
    } else {
        return (  r1265 );
    }
}

static  bool   between270 (    struct Char_11  c1268 ,    struct Char_11  l1270 ,    struct Char_11  r1272 ) {
    struct Char_11  from1273 = ( (  min271 ) ( (  l1270 ) ,  (  r1272 ) ) );
    struct Char_11  to1274 = ( (  max274 ) ( (  l1270 ) ,  (  r1272 ) ) );
    return ( (  cmp272 ( (  from1273 ) , (  c1268 ) ) != 2 ) && (  cmp272 ( (  c1268 ) , (  to1274 ) ) != 2 ) );
}

static  bool   is_dash_digit269 (    struct Char_11  c1397 ) {
    return ( (  eq225 ( ( (  c1397 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between270 ) ( (  c1397 ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  void *   cast_dash_ptr280 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of281 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed278 (  ) {
    int32_t  temp279;
    int32_t  x573 = (  temp279 );
    ( ( memset ) ( ( (  cast_dash_ptr280 ) ( ( & (  x573 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of281 ) ( (  x573 ) ) ) ) );
    return (  x573 );
}

static  uint8_t *   cast282 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed276 (    uint8_t  x576 ) {
    int32_t  temp277 = ( (  zeroed278 ) ( ) );
    int32_t *  y577 = ( &temp277 );
    uint8_t *  yp578 = ( (  cast282 ) ( (  y577 ) ) );
    (*  yp578 ) = (  x576 );
    return ( * (  y577 ) );
}

static  int32_t   u8_dash_i32275 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed276 ) ( (  x672 ) ) );
}

static  uint8_t   op_dash_sub283 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  struct Maybe_57   parse_dash_digit268 (    struct Char_11  c1422 ) {
    if ( ( (  is_dash_digit269 ) ( (  c1422 ) ) ) ) {
        return ( ( Maybe_57_Just ) ( ( (  u8_dash_i32275 ) ( (  op_dash_sub283 ( ( (  char_dash_u8165 ) ( (  c1422 ) ) ) , ( (  char_dash_u8165 ) ( ( (  from_dash_charlike48 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_57) { .tag = Maybe_57_None_t } );
    }
}

static  int64_t   i32_dash_i64284 (    int32_t  x609 ) {
    return ( (int64_t ) (  x609 ) );
}

static  struct Maybe_243   sequence_dash_maybe267 (    struct Char_11  e1820 ,    struct Maybe_243  b1822 ) {
    struct Maybe_243  dref1823 = (  b1822 );
    if ( dref1823.tag == Maybe_243_None_t ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    else {
        if ( dref1823.tag == Maybe_243_Just_t ) {
            struct Maybe_57  dref1825 = ( (  parse_dash_digit268 ) ( (  e1820 ) ) );
            if ( dref1825.tag == Maybe_57_None_t ) {
                return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
            }
            else {
                if ( dref1825.tag == Maybe_57_Just_t ) {
                    return ( ( Maybe_243_Just ) ( (  op_dash_add231 ( (  op_dash_mul36 ( ( dref1823 .stuff .Maybe_243_Just_s .field0 ) , (  from_dash_integral230 ( 10 ) ) ) ) , ( (  i32_dash_i64284 ) ( ( dref1825 .stuff .Maybe_57_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_243   parse_dash_int257 (    struct Drop_258  s1817 ) {
    struct Drop_258  cs1827 = ( (  chars259 ) ( (  s1817 ) ) );
    struct Maybe_26  dref1828 = ( (  head260 ) ( (  cs1827 ) ) );
    if ( dref1828.tag == Maybe_26_Just_t ) {
        return ( (  reduce264 ) ( (  cs1827 ) ,  ( ( Maybe_243_Just ) ( (  from_dash_integral230 ( 0 ) ) ) ) ,  (  sequence_dash_maybe267 ) ) );
    }
    else {
        if ( dref1828.tag == Maybe_26_None_t ) {
            return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
        }
    }
}

static  struct Drop_258   drop285 (    struct StrViewIter_18  iterable758 ,    size_t  i760 ) {
    struct StrViewIter_18  it761 = ( (  into_dash_iter221 ) ( (  iterable758 ) ) );
    return ( ( Drop_258_Drop ) ( (  it761 ) ,  (  i760 ) ) );
}

static  struct DialTurn_207   parse_dash_line210 (    struct StrView_19  s3223 ) {
    struct StrViewIter_18  s3224 = ( (  chars103 ) ( (  s3223 ) ) );
    struct Char_11  dir_dash_s3225 = ( (  or_dash_fail211 ) ( ( (  head219 ) ( (  s3224 ) ) ) ,  ( (  from_dash_string110 ) ( ( (uint8_t*)"empty string" ) ,  ( 12 ) ) ) ) );
    enum DialDir_208  dir3226 = ( (  undefined222 ) ( ) );
    if ( (  eq224 ( (  dir_dash_s3225 ) , ( (  from_dash_charlike48 ) ( ( (uint8_t*)"L" ) ,  ( 1 ) ) ) ) ) ) {
        dir3226 = ( DialDir_208_Left );
    } else {
        if ( (  eq224 ( (  dir_dash_s3225 ) , ( (  from_dash_charlike48 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
            dir3226 = ( DialDir_208_Right );
        } else {
            ( (  panic232 ) ( ( ( StrConcat_233_StrConcat ) ( ( ( StrConcat_234_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"Could not parse dial turn \"" ) ,  ( 27 ) ) ) ,  (  dir_dash_s3225 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    int32_t  amount3227 = ( (  i64_dash_i32241 ) ( ( (  or_dash_fail242 ) ( ( (  parse_dash_int257 ) ( ( (  drop285 ) ( (  s3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ) ) ,  ( ( StrConcat_244_StrConcat ) ( ( ( StrConcat_245_StrConcat ) ( ( (  from_dash_string110 ) ( ( (uint8_t*)"failed to parse int from \"" ) ,  ( 26 ) ) ) ,  (  s3224 ) ) ) ,  ( (  from_dash_charlike48 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    return ( (struct DialTurn_207) { .f_dir = (  dir3226 ) , .f_amount = (  amount3227 ) } );
}

static  struct Safe_6   lam205 (    struct StrView_19  line3254 ,    struct Safe_6  s3256 ) {
    return ( (  turn_dash_dial_dash_2206 ) ( ( (  parse_dash_line210 ) ( (  line3254 ) ) ) ,  (  s3256 ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2185 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2186 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2187 = ( (  from_dash_integral0 ( 8 ) ) );
    ( ( setlocale ) ( ( (  lc_dash_ctype1 ) ( ) ) ,  ( (  from_dash_string3 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    enum CAllocator_4  al3251 = ( (  get_dash_c_dash_allocator5 ) ( ) );
    struct Safe_6  safe3252 = ( (struct Safe_6) { .f_zero_dash_num = (  from_dash_integral2 ( 0 ) ) , .f_dial = (  from_dash_integral2 ( 50 ) ) } );
    ( (  println7 ) ( ( (  reduce138 ) ( ( (  lines171 ) ( ( (  read_dash_contents172 ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"./day1-1" ) ,  ( 8 ) ) ) ,  (  al3251 ) ) ) ) ) ,  (  safe3252 ) ,  (  lam205 ) ) ) ) );
}
