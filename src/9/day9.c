#include <stddef.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
int _global_argc;
const char** _global_argv;
static  const char*   from_dash_charlike0 (    const char*  s46 ) {
    return (  s46 );
}

static  char   from_dash_charlike1 (    const char*  s49 ) {
    return ( * ( ( (char * ) (  s49 ) ) ) );
}

static  int64_t   from_dash_integral2 (    int64_t  x57 ) {
    return (  x57 );
}

static  int32_t   from_dash_integral3 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  size_t   from_dash_integral4 (    int64_t  x78 ) {
    return ( (size_t ) (  x78 ) );
}

static  bool   eq5 (    int64_t  l89 ,    int64_t  r91 ) {
    return ( (  l89 ) == (  r91 ) );
}

static  bool   eq6 (    size_t  l114 ,    size_t  r116 ) {
    return ( (  l114 ) == (  r116 ) );
}

static  bool   eq7 (    char  l129 ,    char  r131 ) {
    return ( (  l129 ) == (  r131 ) );
}

enum Ordering_9 {
    Ordering_9_LT,
    Ordering_9_EQ,
    Ordering_9_GT,
};

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_9   cmp8 (    int64_t  l147 ,    int64_t  r149 ) {
    return ( builtin_int64_tcmp( (  l147 ) , (  r149 ) ) );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_9   cmp10 (    size_t  l152 ,    size_t  r154 ) {
    return ( builtin_size_tcmp( (  l152 ) , (  r154 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_9   cmp11 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static  int64_t   op_dash_add12 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) + (  r179 ) );
}

static  int64_t   op_dash_sub13 (    int64_t  l182 ,    int64_t  r184 ) {
    return ( (  l182 ) - (  r184 ) );
}

static  int64_t   op_dash_mul14 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) * (  r189 ) );
}

static  int64_t   op_dash_neg15 (    int64_t  l197 ) {
    return ( (  from_dash_integral2 ( 0 ) ) - (  l197 ) );
}

static  int32_t   op_dash_add16 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) + (  r202 ) );
}

static  int32_t   op_dash_sub17 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) - (  r207 ) );
}

static  size_t   op_dash_add18 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) + (  r265 ) );
}

static  size_t   op_dash_sub19 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) - (  r270 ) );
}

static  size_t   op_dash_mul20 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) * (  r275 ) );
}

static  int32_t   seek_dash_set21 (  ) {
    return (  from_dash_integral3 ( 0 ) );
}

static  int32_t   seek_dash_end22 (  ) {
    return (  from_dash_integral3 ( 2 ) );
}

struct Slice_25 {
    char *  f_ptr;
    size_t  f_count;
};

struct DynStr_24 {
    struct Slice_25  f_contents;
};

static  struct DynStr_24   undefined23 (  ) {
    struct DynStr_24  temp26;
    return (  temp26 );
}

static  int64_t   undefined27 (  ) {
    int64_t  temp28;
    return (  temp28 );
}

static  char   undefined29 (  ) {
    char  temp30;
    return (  temp30 );
}

struct Tuple2_32 {
    int64_t  field0;
    int64_t  field1;
};

static struct Tuple2_32 Tuple2_32_Tuple2 (  int64_t  field0 ,  int64_t  field1 ) {
    return ( struct Tuple2_32 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Tuple2_32   undefined31 (  ) {
    struct Tuple2_32  temp33;
    return (  temp33 );
}

static  char *   offset_dash_ptr34 (    char *  x456 ,    int64_t  count458 ) {
    char  temp35;
    return ( (char * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp35 ) ) ) ) ) ) ) ) );
}

static  struct Tuple2_32 *   offset_dash_ptr36 (    struct Tuple2_32 *  x456 ,    int64_t  count458 ) {
    struct Tuple2_32  temp37;
    return ( (struct Tuple2_32 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp37 ) ) ) ) ) ) ) ) );
}

struct Tuple2_39 {
    struct Tuple2_32  field0;
    struct Tuple2_32  field1;
};

static struct Tuple2_39 Tuple2_39_Tuple2 (  struct Tuple2_32  field0 ,  struct Tuple2_32  field1 ) {
    return ( struct Tuple2_39 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Tuple2_39 *   offset_dash_ptr38 (    struct Tuple2_39 *  x456 ,    int64_t  count458 ) {
    struct Tuple2_39  temp40;
    return ( (struct Tuple2_39 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp40 ) ) ) ) ) ) ) ) );
}

struct TypeSize_42 {
    size_t  f_size;
};

static  struct TypeSize_42   get_dash_typesize41 (  ) {
    char  temp43;
    return ( (struct TypeSize_42) { .f_size = ( sizeof( ( (  temp43 ) ) ) ) } );
}

struct TypeSize_45 {
    size_t  f_size;
};

static  struct TypeSize_45   get_dash_typesize44 (  ) {
    struct Tuple2_32  temp46;
    return ( (struct TypeSize_45) { .f_size = ( sizeof( ( (  temp46 ) ) ) ) } );
}

struct TypeSize_48 {
    size_t  f_size;
};

static  struct TypeSize_48   get_dash_typesize47 (  ) {
    struct Tuple2_39  temp49;
    return ( (struct TypeSize_48) { .f_size = ( sizeof( ( (  temp49 ) ) ) ) } );
}

static  size_t   size_dash_of50 (    FILE *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of51 (    char  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of52 (    int32_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of53 (    struct Tuple2_32 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of54 (    struct Tuple2_39 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  char *   cast55 (    int32_t *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  char *   cast_dash_ptr56 (    void *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr57 (    FILE * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr58 (    char *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr59 (    int32_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Tuple2_32 *   cast_dash_ptr60 (    void *  p472 ) {
    return ( (struct Tuple2_32 * ) (  p472 ) );
}

static  void *   cast_dash_ptr61 (    struct Tuple2_32 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr62 (    struct Tuple2_32 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Tuple2_39 *   cast_dash_ptr63 (    void *  p472 ) {
    return ( (struct Tuple2_39 * ) (  p472 ) );
}

static  void *   cast_dash_ptr64 (    struct Tuple2_39 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr65 (    struct Tuple2_39 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  FILE *   zeroed66 (  ) {
    FILE *  temp67;
    FILE *  x479 = (  temp67 );
    ( ( memset ) ( ( (  cast_dash_ptr57 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of50 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char   zeroed68 (  ) {
    char  temp69;
    char  x479 = (  temp69 );
    ( ( memset ) ( ( (  cast_dash_ptr58 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of51 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int32_t   zeroed70 (  ) {
    int32_t  temp71;
    int32_t  x479 = (  temp71 );
    ( ( memset ) ( ( (  cast_dash_ptr59 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of52 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Tuple2_32 *   zeroed72 (  ) {
    struct Tuple2_32 *  temp73;
    struct Tuple2_32 *  x479 = (  temp73 );
    ( ( memset ) ( ( (  cast_dash_ptr62 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of53 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Tuple2_39 *   zeroed74 (  ) {
    struct Tuple2_39 *  temp75;
    struct Tuple2_39 *  x479 = (  temp75 );
    ( ( memset ) ( ( (  cast_dash_ptr65 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of54 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int32_t   cast_dash_on_dash_zeroed76 (    char  x482 ) {
    int32_t  temp77 = ( (  zeroed70 ) ( ) );
    int32_t *  y483 = ( &temp77 );
    char *  yp484 = ( (  cast55 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  FILE *   null_dash_ptr78 (  ) {
    return ( (  zeroed66 ) ( ) );
}

static  struct Tuple2_32 *   null_dash_ptr79 (  ) {
    return ( (  zeroed72 ) ( ) );
}

static  struct Tuple2_39 *   null_dash_ptr80 (  ) {
    return ( (  zeroed74 ) ( ) );
}

static  bool   is_dash_ptr_dash_null81 (    FILE *  p488 ) {
    return ( (  p488 ) == ( (  null_dash_ptr78 ) ( ) ) );
}

static  int64_t   size_dash_i6482 (    size_t  x502 ) {
    return ( (int64_t ) (  x502 ) );
}

static  int64_t   i32_dash_i6483 (    int32_t  x511 ) {
    return ( (int64_t ) (  x511 ) );
}

static  size_t   i32_dash_size84 (    int32_t  x514 ) {
    return ( (size_t ) ( (int64_t ) (  x514 ) ) );
}

static  int32_t   size_dash_i3285 (    size_t  x529 ) {
    return ( (int32_t ) (  x529 ) );
}

struct SliceIter_88 {
    struct Slice_25  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_87 {
    struct SliceIter_88  f_s;
};

static  struct Scanner_87   into_dash_iter89 (    struct Scanner_87  self2356 ) {
    return (  self2356 );
}

static  struct Scanner_87   into_dash_iter86 (    struct Scanner_87 *  self565 ) {
    return ( (  into_dash_iter89 ) ( ( * (  self565 ) ) ) );
}

struct LineIter_92 {
    struct DynStr_24  f_og;
    size_t  f_last;
};

struct Map_91 {
    struct LineIter_92  field0;
    struct Tuple2_32 (*  field1 )(    struct DynStr_24  );
};

static struct Map_91 Map_91_Map (  struct LineIter_92  field0 ,  struct Tuple2_32 (*  field1 )(    struct DynStr_24  ) ) {
    return ( struct Map_91 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_91   into_dash_iter90 (    struct Map_91  self576 ) {
    return (  self576 );
}

struct Slice_97 {
    struct Tuple2_32 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_96 {
    struct Slice_97  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_98 {
    int32_t  f_from;
};

struct Zip_95 {
    struct SliceIter_96  f_left_dash_it;
    struct FromIter_98  f_right_dash_it;
};

struct env99 {
    ;
    ;
    ;
    struct Slice_97  it774;
};

struct Drop_101 {
    struct SliceIter_96  field0;
    size_t  field1;
};

static struct Drop_101 Drop_101_Drop (  struct SliceIter_96  field0 ,  size_t  field1 ) {
    return ( struct Drop_101 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env102 {
    struct Tuple2_32  e776;
};

struct funenv102 {
    struct Tuple2_39  (*fun) (  struct env102  ,    struct Tuple2_32  );
    struct env102 env;
};

struct Map_100 {
    struct Drop_101  field0;
    struct funenv102  field1;
};

static struct Map_100 Map_100_Map (  struct Drop_101  field0 , struct funenv102  field1 ) {
    return ( struct Map_100 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Tuple2_103 {
    struct Tuple2_32  field0;
    int32_t  field1;
};

static struct Tuple2_103 Tuple2_103_Tuple2 (  struct Tuple2_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_103 ) { .field0 = field0 ,  .field1 = field1 };
};

struct funenv99 {
    struct Map_100  (*fun) (  struct env99  ,    struct Tuple2_103  );
    struct env99 env;
};

struct Map_94 {
    struct Zip_95  field0;
    struct funenv99  field1;
};

static struct Map_94 Map_94_Map (  struct Zip_95  field0 , struct funenv99  field1 ) {
    return ( struct Map_94 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_94   into_dash_iter93 (    struct Map_94  self576 ) {
    return (  self576 );
}

static  struct Map_100   into_dash_iter104 (    struct Map_100  self576 ) {
    return (  self576 );
}

struct FlattenIter_107 {
    struct Map_94  f_super;
    struct Map_100  f_inner;
    bool  f_empty;
};

struct Map_106 {
    struct FlattenIter_107  field0;
    int64_t (*  field1 )(    struct Tuple2_39  );
};

static struct Map_106 Map_106_Map (  struct FlattenIter_107  field0 ,  int64_t (*  field1 )(    struct Tuple2_39  ) ) {
    return ( struct Map_106 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_106   into_dash_iter105 (    struct Map_106  self576 ) {
    return (  self576 );
}

struct Slice_113 {
    struct Tuple2_39 *  f_ptr;
    size_t  f_count;
};

struct env112 {
    struct Slice_113  lines2402;
    ;
    ;
};

struct funenv112 {
    bool  (*fun) (  struct env112  ,    struct Tuple2_39  );
    struct env112 env;
};

struct env111 {
    struct env112 envinst112;
};

struct funenv111 {
    bool  (*fun) (  struct env111  ,    struct Tuple2_39  );
    struct env111 env;
};

struct Filter_110 {
    struct FlattenIter_107  f_og;
    struct funenv111  f_fun;
};

struct Map_109 {
    struct Filter_110  field0;
    int64_t (*  field1 )(    struct Tuple2_39  );
};

static struct Map_109 Map_109_Map (  struct Filter_110  field0 ,  int64_t (*  field1 )(    struct Tuple2_39  ) ) {
    return ( struct Map_109 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_109   into_dash_iter108 (    struct Map_109  self576 ) {
    return (  self576 );
}

struct Maybe_115 {
    enum {
        Maybe_115_None_t,
        Maybe_115_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_32  field0;
        } Maybe_115_Just_s;
    } stuff;
};

static struct Maybe_115 Maybe_115_Just (  struct Tuple2_32  field0 ) {
    return ( struct Maybe_115 ) { .tag = Maybe_115_Just_t, .stuff = { .Maybe_115_Just_s = { .field0 = field0 } } };
};

struct Maybe_116 {
    enum {
        Maybe_116_None_t,
        Maybe_116_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_24  field0;
        } Maybe_116_Just_s;
    } stuff;
};

static struct Maybe_116 Maybe_116_Just (  struct DynStr_24  field0 ) {
    return ( struct Maybe_116 ) { .tag = Maybe_116_Just_t, .stuff = { .Maybe_116_Just_s = { .field0 = field0 } } };
};

struct Maybe_120 {
    enum {
        Maybe_120_None_t,
        Maybe_120_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_120_Just_s;
    } stuff;
};

static struct Maybe_120 Maybe_120_Just (  char  field0 ) {
    return ( struct Maybe_120 ) { .tag = Maybe_120_Just_t, .stuff = { .Maybe_120_Just_s = { .field0 = field0 } } };
};

struct StrConcat_124 {
    const char*  field0;
    size_t  field1;
};

static struct StrConcat_124 StrConcat_124_StrConcat (  const char*  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_124 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_123 {
    struct StrConcat_124  field0;
    const char*  field1;
};

static struct StrConcat_123 StrConcat_123_StrConcat (  struct StrConcat_124  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_123 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_122 {
    struct StrConcat_123  field0;
    size_t  field1;
};

static struct StrConcat_122 StrConcat_122_StrConcat (  struct StrConcat_123  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_122 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_121 {
    struct StrConcat_122  field0;
    char  field1;
};

static struct StrConcat_121 StrConcat_121_StrConcat (  struct StrConcat_122  field0 ,  char  field1 ) {
    return ( struct StrConcat_121 ) { .field0 = field0 ,  .field1 = field1 };
};

enum Unit_126 {
    Unit_126_Unit,
};

struct StrConcat_129 {
    const char*  field0;
    struct StrConcat_121  field1;
};

static struct StrConcat_129 StrConcat_129_StrConcat (  const char*  field0 ,  struct StrConcat_121  field1 ) {
    return ( struct StrConcat_129 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_128 {
    struct StrConcat_129  field0;
    char  field1;
};

static struct StrConcat_128 StrConcat_128_StrConcat (  struct StrConcat_129  field0 ,  char  field1 ) {
    return ( struct StrConcat_128 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_126   print_dash_str131 (    const char*  self1094 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1094 ) ) );
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str136 (    size_t  self1146 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1146 ) ) );
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str135 (    struct StrConcat_124  self1185 ) {
    struct StrConcat_124  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str136 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str134 (    struct StrConcat_123  self1185 ) {
    struct StrConcat_123  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str135 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str131 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str133 (    struct StrConcat_122  self1185 ) {
    struct StrConcat_122  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str134 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str136 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str137 (    char  self1100 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1100 ) ) );
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str132 (    struct StrConcat_121  self1185 ) {
    struct StrConcat_121  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str133 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str130 (    struct StrConcat_129  self1185 ) {
    struct StrConcat_129  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str132 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str127 (    struct StrConcat_128  self1185 ) {
    struct StrConcat_128  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str130 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   panic125 (    struct StrConcat_121  errmsg1362 ) {
    ( (  print_dash_str127 ) ( ( ( StrConcat_128_StrConcat ) ( ( ( StrConcat_129_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1362 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_126_Unit );
}

static  char   or_dash_fail119 (    struct Maybe_120  x1375 ,    struct StrConcat_121  errmsg1377 ) {
    struct Maybe_120  dref1378 = (  x1375 );
    if ( dref1378.tag == Maybe_120_None_t ) {
        ( (  panic125 ) ( (  errmsg1377 ) ) );
        return ( (  undefined29 ) ( ) );
    }
    else if ( dref1378.tag == Maybe_120_Just_t ) {
        return ( dref1378 .stuff .Maybe_120_Just_s .field0 );
    }
}

static  struct Maybe_120   try_dash_get138 (    struct Slice_25  slice1414 ,    size_t  i1416 ) {
    if ( ( (  cmp10 ( (  i1416 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1416 ) , ( (  slice1414 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
    char *  elem_dash_ptr1417 = ( (  offset_dash_ptr34 ) ( ( (  slice1414 ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  i1416 ) ) ) ) );
    return ( ( Maybe_120_Just ) ( ( * (  elem_dash_ptr1417 ) ) ) );
}

static  char   get118 (    struct Slice_25  slice1420 ,    size_t  i1422 ) {
    return ( (  or_dash_fail119 ) ( ( (  try_dash_get138 ) ( (  slice1420 ) ,  (  i1422 ) ) ) ,  ( ( StrConcat_121_StrConcat ) ( ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1422 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1420 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar139 (  ) {
    return ( (  zeroed68 ) ( ) );
}

static  char   newline140 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  size_t   min143 (    size_t  l991 ,    size_t  r993 ) {
    if ( (  cmp10 ( (  l991 ) , (  r993 ) ) == 0 ) ) {
        return (  l991 );
    } else {
        return (  r993 );
    }
}

static  struct Slice_25   subslice142 (    struct Slice_25  slice1433 ,    size_t  from1435 ,    size_t  to1437 ) {
    char *  begin_dash_ptr1438 = ( (  offset_dash_ptr34 ) ( ( (  slice1433 ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  from1435 ) ) ) ) );
    if ( ( (  cmp10 ( (  from1435 ) , (  to1437 ) ) != 0 ) || (  cmp10 ( (  from1435 ) , ( (  slice1433 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1438 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
    }
    size_t  count1439 = (  op_dash_sub19 ( ( (  min143 ) ( (  to1437 ) ,  ( (  slice1433 ) .f_count ) ) ) , (  from1435 ) ) );
    return ( (struct Slice_25) { .f_ptr = (  begin_dash_ptr1438 ) , .f_count = (  count1439 ) } );
}

static  struct DynStr_24   substr141 (    struct DynStr_24  s1597 ,    size_t  from1599 ,    size_t  to1601 ) {
    return ( (struct DynStr_24) { .f_contents = ( (  subslice142 ) ( ( (  s1597 ) .f_contents ) ,  (  from1599 ) ,  (  to1601 ) ) ) } );
}

static  struct Maybe_116   next117 (    struct LineIter_92 *  self1734 ) {
    if ( ( (  cmp10 ( ( ( * (  self1734 ) ) .f_last ) , ( ( ( ( * (  self1734 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq7 ( ( (  get118 ) ( ( ( ( * (  self1734 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1734 ) ) .f_last ) ) ) , ( (  nullchar139 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_116) { .tag = Maybe_116_None_t } );
    }
    size_t  i1735 = ( ( * (  self1734 ) ) .f_last );
    while ( ( (  cmp10 ( (  i1735 ) , ( ( ( ( * (  self1734 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq7 ( ( (  get118 ) ( ( ( ( * (  self1734 ) ) .f_og ) .f_contents ) ,  (  i1735 ) ) ) , ( (  newline140 ) ( ) ) ) ) ) ) {
        i1735 = (  op_dash_add18 ( (  i1735 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    struct DynStr_24  line1736 = ( (  substr141 ) ( ( ( * (  self1734 ) ) .f_og ) ,  ( ( * (  self1734 ) ) .f_last ) ,  (  i1735 ) ) );
    if ( (  cmp10 ( (  i1735 ) , ( ( ( ( * (  self1734 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1735 = (  op_dash_add18 ( (  i1735 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    (*  self1734 ) .f_last = (  i1735 );
    return ( ( Maybe_116_Just ) ( (  line1736 ) ) );
}

static  struct Maybe_115   next114 (    struct Map_91 *  dref578 ) {
    struct Maybe_116  dref581 = ( (  next117 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_116_None_t ) {
        return ( (struct Maybe_115) { .tag = Maybe_115_None_t } );
    }
    else if ( dref581.tag == Maybe_116_Just_t ) {
        return ( ( Maybe_115_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_116_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_145 {
    enum {
        Maybe_145_None_t,
        Maybe_145_Just_t,
    } tag;
    union {
        struct {
            struct Map_100  field0;
        } Maybe_145_Just_s;
    } stuff;
};

static struct Maybe_145 Maybe_145_Just (  struct Map_100  field0 ) {
    return ( struct Maybe_145 ) { .tag = Maybe_145_Just_t, .stuff = { .Maybe_145_Just_s = { .field0 = field0 } } };
};

struct Maybe_146 {
    enum {
        Maybe_146_None_t,
        Maybe_146_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_103  field0;
        } Maybe_146_Just_s;
    } stuff;
};

static struct Maybe_146 Maybe_146_Just (  struct Tuple2_103  field0 ) {
    return ( struct Maybe_146 ) { .tag = Maybe_146_Just_t, .stuff = { .Maybe_146_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_115   next148 (    struct SliceIter_96 *  self1479 ) {
    size_t  off1480 = ( ( * (  self1479 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add18 ( (  off1480 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1479 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_115) { .tag = Maybe_115_None_t } );
    }
    struct Tuple2_32  elem1481 = ( * ( (  offset_dash_ptr36 ) ( ( ( ( * (  self1479 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  off1480 ) ) ) ) ) );
    (*  self1479 ) .f_current_dash_offset = (  op_dash_add18 ( (  off1480 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_115_Just ) ( (  elem1481 ) ) );
}

struct Maybe_149 {
    enum {
        Maybe_149_None_t,
        Maybe_149_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_149_Just_s;
    } stuff;
};

static struct Maybe_149 Maybe_149_Just (  int32_t  field0 ) {
    return ( struct Maybe_149 ) { .tag = Maybe_149_Just_t, .stuff = { .Maybe_149_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_149   next150 (    struct FromIter_98 *  dref685 ) {
    int32_t  v687 = ( ( (* dref685 ) ) .f_from );
    (* dref685 ) .f_from = (  op_dash_add16 ( ( ( (* dref685 ) ) .f_from ) , (  from_dash_integral3 ( 1 ) ) ) );
    return ( ( Maybe_149_Just ) ( (  v687 ) ) );
}

static  struct Maybe_146   next147 (    struct Zip_95 *  self694 ) {
    struct Zip_95  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_115  dref696 = ( (  next148 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_115_None_t ) {
            return ( (struct Maybe_146) { .tag = Maybe_146_None_t } );
        }
        else if ( dref696.tag == Maybe_115_Just_t ) {
            struct Maybe_149  dref698 = ( (  next150 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_149_None_t ) {
                return ( (struct Maybe_146) { .tag = Maybe_146_None_t } );
            }
            else if ( dref698.tag == Maybe_149_Just_t ) {
                ( (  next148 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next150 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_146_Just ) ( ( ( Tuple2_103_Tuple2 ) ( ( dref696 .stuff .Maybe_115_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_149_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_145   next144 (    struct Map_94 *  dref578 ) {
    struct Maybe_146  dref581 = ( (  next147 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_146_None_t ) {
        return ( (struct Maybe_145) { .tag = Maybe_145_None_t } );
    }
    else if ( dref581.tag == Maybe_146_Just_t ) {
        struct funenv99  temp151 = ( (* dref578 ) .field1 );
        return ( ( Maybe_145_Just ) ( ( temp151.fun ( temp151.env ,  ( dref581 .stuff .Maybe_146_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_153 {
    enum {
        Maybe_153_None_t,
        Maybe_153_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_153_Just_s;
    } stuff;
};

static struct Maybe_153 Maybe_153_Just (  int64_t  field0 ) {
    return ( struct Maybe_153 ) { .tag = Maybe_153_Just_t, .stuff = { .Maybe_153_Just_s = { .field0 = field0 } } };
};

struct Maybe_154 {
    enum {
        Maybe_154_None_t,
        Maybe_154_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_39  field0;
        } Maybe_154_Just_s;
    } stuff;
};

static struct Maybe_154 Maybe_154_Just (  struct Tuple2_39  field0 ) {
    return ( struct Maybe_154 ) { .tag = Maybe_154_Just_t, .stuff = { .Maybe_154_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_115   next157 (    struct Drop_101 *  dref627 ) {
    while ( (  cmp10 ( ( (* dref627 ) .field1 ) , (  from_dash_integral4 ( 0 ) ) ) == 2 ) ) {
        ( (  next148 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub19 ( ( (* dref627 ) .field1 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    return ( (  next148 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

static  struct Maybe_154   next156 (    struct Map_100 *  dref578 ) {
    struct Maybe_115  dref581 = ( (  next157 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_115_None_t ) {
        return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
    }
    else if ( dref581.tag == Maybe_115_Just_t ) {
        struct funenv102  temp158 = ( (* dref578 ) .field1 );
        return ( ( Maybe_154_Just ) ( ( temp158.fun ( temp158.env ,  ( dref581 .stuff .Maybe_115_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_154   next155 (    struct FlattenIter_107 *  self713 ) {
    if ( ( ( * (  self713 ) ) .f_empty ) ) {
        return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
    }
    while ( ( true ) ) {
        struct Maybe_154  dref714 = ( (  next156 ) ( ( & ( ( * (  self713 ) ) .f_inner ) ) ) );
        if ( dref714.tag == Maybe_154_Just_t ) {
            return ( ( Maybe_154_Just ) ( ( dref714 .stuff .Maybe_154_Just_s .field0 ) ) );
        }
        else if ( dref714.tag == Maybe_154_None_t ) {
            struct Maybe_145  dref716 = ( (  next144 ) ( ( & ( ( * (  self713 ) ) .f_super ) ) ) );
            if ( dref716.tag == Maybe_145_Just_t ) {
                (*  self713 ) .f_inner = ( (  into_dash_iter104 ) ( ( dref716 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
            else if ( dref716.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
            }
        }
    }
}

static  struct Maybe_153   next152 (    struct Map_106 *  dref578 ) {
    struct Maybe_154  dref581 = ( (  next155 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_154_None_t ) {
        return ( (struct Maybe_153) { .tag = Maybe_153_None_t } );
    }
    else if ( dref581.tag == Maybe_154_Just_t ) {
        return ( ( Maybe_153_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_154_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_154   next160 (    struct Filter_110 *  self613 ) {
    while ( ( true ) ) {
        struct Maybe_154  dref614 = ( (  next155 ) ( ( & ( ( * (  self613 ) ) .f_og ) ) ) );
        if ( dref614.tag == Maybe_154_None_t ) {
            return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
        }
        else if ( dref614.tag == Maybe_154_Just_t ) {
            struct funenv111  temp161 = ( ( * (  self613 ) ) .f_fun );
            if ( ( temp161.fun ( temp161.env ,  ( dref614 .stuff .Maybe_154_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_154_Just ) ( ( dref614 .stuff .Maybe_154_Just_s .field0 ) ) );
            }
        }
    }
    struct Maybe_154  temp162;
    return (  temp162 );
}

static  struct Maybe_153   next159 (    struct Map_109 *  dref578 ) {
    struct Maybe_154  dref581 = ( (  next160 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_154_None_t ) {
        return ( (struct Maybe_153) { .tag = Maybe_153_None_t } );
    }
    else if ( dref581.tag == Maybe_154_Just_t ) {
        return ( ( Maybe_153_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_154_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_92   into_dash_iter164 (    struct LineIter_92  self1731 ) {
    return (  self1731 );
}

static  struct Map_91   map163 (    struct LineIter_92  iterable585 ,    struct Tuple2_32 (*  fun587 )(    struct DynStr_24  ) ) {
    struct LineIter_92  it588 = ( (  into_dash_iter164 ) ( (  iterable585 ) ) );
    return ( ( Map_91_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Zip_95   into_dash_iter166 (    struct Zip_95  self691 ) {
    return (  self691 );
}

static  struct Map_94   map165 (    struct Zip_95  iterable585 ,   struct funenv99  fun587 ) {
    struct Zip_95  it588 = ( (  into_dash_iter166 ) ( (  iterable585 ) ) );
    return ( ( Map_94_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Drop_101   into_dash_iter168 (    struct Drop_101  self625 ) {
    return (  self625 );
}

static  struct Map_100   map167 (    struct Drop_101  iterable585 ,   struct funenv102  fun587 ) {
    struct Drop_101  it588 = ( (  into_dash_iter168 ) ( (  iterable585 ) ) );
    return ( ( Map_100_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct FlattenIter_107   into_dash_iter170 (    struct FlattenIter_107  self710 ) {
    return (  self710 );
}

static  struct Map_106   map169 (    struct FlattenIter_107  iterable585 ,    int64_t (*  fun587 )(    struct Tuple2_39  ) ) {
    struct FlattenIter_107  it588 = ( (  into_dash_iter170 ) ( (  iterable585 ) ) );
    return ( ( Map_106_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Filter_110   into_dash_iter172 (    struct Filter_110  self610 ) {
    return (  self610 );
}

static  struct Map_109   map171 (    struct Filter_110  iterable585 ,    int64_t (*  fun587 )(    struct Tuple2_39  ) ) {
    struct Filter_110  it588 = ( (  into_dash_iter172 ) ( (  iterable585 ) ) );
    return ( ( Map_109_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Filter_110   filter173 (    struct FlattenIter_107  iterable618 ,   struct funenv111  fun620 ) {
    struct FlattenIter_107  it621 = ( (  into_dash_iter170 ) ( (  iterable618 ) ) );
    return ( (struct Filter_110) { .f_og = (  it621 ) , .f_fun = (  fun620 ) } );
}

static  struct SliceIter_96   into_dash_iter175 (    struct Slice_97  self1473 ) {
    return ( (struct SliceIter_96) { .f_slice = (  self1473 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Drop_101   drop174 (    struct Slice_97  iterable632 ,    size_t  i634 ) {
    struct SliceIter_96  it635 = ( (  into_dash_iter175 ) ( (  iterable632 ) ) );
    return ( ( Drop_101_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

struct Range_177 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_177 Range_177_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_177 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_177   to176 (    int32_t  from654 ,    int32_t  to656 ) {
    return ( ( Range_177_Range ) ( (  from654 ) ,  (  to656 ) ) );
}

struct RangeIter_179 {
    struct Range_177  field0;
    int32_t  field1;
};

static struct RangeIter_179 RangeIter_179_RangeIter (  struct Range_177  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_179 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_179   into_dash_iter178 (    struct Range_177  dref663 ) {
    return ( ( RangeIter_179_RangeIter ) ( ( ( Range_177_Range ) ( ( dref663 .field0 ) ,  ( dref663 .field1 ) ) ) ,  ( dref663 .field0 ) ) );
}

static  struct Maybe_149   next180 (    struct RangeIter_179 *  self671 ) {
    struct RangeIter_179  dref672 = ( * (  self671 ) );
    if ( true ) {
        if ( (  cmp11 ( ( dref672 .field1 ) , ( dref672 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_149) { .tag = Maybe_149_None_t } );
        }
        struct Maybe_149  x676 = ( ( Maybe_149_Just ) ( ( dref672 .field1 ) ) );
        (*  self671 ) = ( ( RangeIter_179_RangeIter ) ( ( ( Range_177_Range ) ( ( dref672 .field0 .field0 ) ,  ( dref672 .field0 .field1 ) ) ) ,  (  op_dash_add16 ( ( dref672 .field1 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
        return (  x676 );
    }
}

static  struct FromIter_98   from181 (    int32_t  f680 ) {
    return ( (struct FromIter_98) { .f_from = (  f680 ) } );
}

static  struct FromIter_98   into_dash_iter182 (    struct FromIter_98  it683 ) {
    return (  it683 );
}

struct SliceIter_185 {
    struct Slice_113  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_184 {
    struct SliceIter_185  f_left_dash_it;
    struct FromIter_98  f_right_dash_it;
};

static  struct Zip_184   into_dash_iter183 (    struct Zip_184  self691 ) {
    return (  self691 );
}

struct AppendIter_188 {
    struct Drop_101  f_it;
    struct Tuple2_32  f_elem;
    bool  f_appended;
};

struct Zip_187 {
    struct SliceIter_96  f_left_dash_it;
    struct AppendIter_188  f_right_dash_it;
};

static  struct Zip_187   into_dash_iter186 (    struct Zip_187  self691 ) {
    return (  self691 );
}

static  struct Maybe_115   next190 (    struct AppendIter_188 *  self802 ) {
    struct Maybe_115  dref803 = ( (  next157 ) ( ( & ( ( * (  self802 ) ) .f_it ) ) ) );
    if ( dref803.tag == Maybe_115_Just_t ) {
        return ( ( Maybe_115_Just ) ( ( dref803 .stuff .Maybe_115_Just_s .field0 ) ) );
    }
    else if ( dref803.tag == Maybe_115_None_t ) {
        if ( ( ! ( ( * (  self802 ) ) .f_appended ) ) ) {
            (*  self802 ) .f_appended = ( true );
            return ( ( Maybe_115_Just ) ( ( ( * (  self802 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_115) { .tag = Maybe_115_None_t } );
    }
}

static  struct Maybe_154   next189 (    struct Zip_187 *  self694 ) {
    struct Zip_187  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_115  dref696 = ( (  next148 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_115_None_t ) {
            return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
        }
        else if ( dref696.tag == Maybe_115_Just_t ) {
            struct Maybe_115  dref698 = ( (  next190 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_115_None_t ) {
                return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
            }
            else if ( dref698.tag == Maybe_115_Just_t ) {
                ( (  next148 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next190 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_154_Just ) ( ( ( Tuple2_39_Tuple2 ) ( ( dref696 .stuff .Maybe_115_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_115_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_193 {
    struct Tuple2_39  field0;
    int32_t  field1;
};

static struct Tuple2_193 Tuple2_193_Tuple2 (  struct Tuple2_39  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_193 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_192 {
    enum {
        Maybe_192_None_t,
        Maybe_192_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_193  field0;
        } Maybe_192_Just_s;
    } stuff;
};

static struct Maybe_192 Maybe_192_Just (  struct Tuple2_193  field0 ) {
    return ( struct Maybe_192 ) { .tag = Maybe_192_Just_t, .stuff = { .Maybe_192_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_154   next194 (    struct SliceIter_185 *  self1479 ) {
    size_t  off1480 = ( ( * (  self1479 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add18 ( (  off1480 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1479 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_154) { .tag = Maybe_154_None_t } );
    }
    struct Tuple2_39  elem1481 = ( * ( (  offset_dash_ptr38 ) ( ( ( ( * (  self1479 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  off1480 ) ) ) ) ) );
    (*  self1479 ) .f_current_dash_offset = (  op_dash_add18 ( (  off1480 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_154_Just ) ( (  elem1481 ) ) );
}

static  struct Maybe_192   next191 (    struct Zip_184 *  self694 ) {
    struct Zip_184  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_154  dref696 = ( (  next194 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_154_None_t ) {
            return ( (struct Maybe_192) { .tag = Maybe_192_None_t } );
        }
        else if ( dref696.tag == Maybe_154_Just_t ) {
            struct Maybe_149  dref698 = ( (  next150 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_149_None_t ) {
                return ( (struct Maybe_192) { .tag = Maybe_192_None_t } );
            }
            else if ( dref698.tag == Maybe_149_Just_t ) {
                ( (  next194 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next150 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_192_Just ) ( ( ( Tuple2_193_Tuple2 ) ( ( dref696 .stuff .Maybe_154_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_149_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_95   zip195 (    struct Slice_97  left702 ,    struct FromIter_98  right704 ) {
    struct SliceIter_96  left_dash_it705 = ( (  into_dash_iter175 ) ( (  left702 ) ) );
    struct FromIter_98  right_dash_it706 = ( (  into_dash_iter182 ) ( (  right704 ) ) );
    return ( (struct Zip_95) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct AppendIter_188   into_dash_iter197 (    struct AppendIter_188  self799 ) {
    return (  self799 );
}

static  struct Zip_187   zip196 (    struct Slice_97  left702 ,    struct AppendIter_188  right704 ) {
    struct SliceIter_96  left_dash_it705 = ( (  into_dash_iter175 ) ( (  left702 ) ) );
    struct AppendIter_188  right_dash_it706 = ( (  into_dash_iter197 ) ( (  right704 ) ) );
    return ( (struct Zip_187) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct SliceIter_185   into_dash_iter199 (    struct Slice_113  self1473 ) {
    return ( (struct SliceIter_185) { .f_slice = (  self1473 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Zip_184   zip198 (    struct Slice_113  left702 ,    struct FromIter_98  right704 ) {
    struct SliceIter_185  left_dash_it705 = ( (  into_dash_iter199 ) ( (  left702 ) ) );
    struct FromIter_98  right_dash_it706 = ( (  into_dash_iter182 ) ( (  right704 ) ) );
    return ( (struct Zip_184) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct FlattenIter_107   flatten200 (    struct Map_94  it720 ) {
    struct Map_94  it721 = ( (  into_dash_iter93 ) ( (  it720 ) ) );
    struct Maybe_145  dref722 = ( (  next144 ) ( ( & (  it721 ) ) ) );
    if ( dref722.tag == Maybe_145_Just_t ) {
        return ( (struct FlattenIter_107) { .f_super = (  it721 ) , .f_inner = ( (  into_dash_iter104 ) ( ( dref722 .stuff .Maybe_145_Just_s .field0 ) ) ) , .f_empty = ( false ) } );
    }
    else if ( dref722.tag == Maybe_145_None_t ) {
        struct Map_100  temp201;
        return ( (struct FlattenIter_107) { .f_super = (  it721 ) , .f_inner = (  temp201 ) , .f_empty = ( true ) } );
    }
}

struct TakeWhile_203 {
    struct Scanner_87  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_203   into_dash_iter202 (    struct TakeWhile_203  self741 ) {
    return (  self741 );
}

static  struct Maybe_120   next206 (    struct SliceIter_88 *  self1479 ) {
    size_t  off1480 = ( ( * (  self1479 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add18 ( (  off1480 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1479 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
    char  elem1481 = ( * ( (  offset_dash_ptr34 ) ( ( ( ( * (  self1479 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  off1480 ) ) ) ) ) );
    (*  self1479 ) .f_current_dash_offset = (  op_dash_add18 ( (  off1480 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_120_Just ) ( (  elem1481 ) ) );
}

static  struct Maybe_120   next205 (    struct Scanner_87 *  self2353 ) {
    return ( (  next206 ) ( ( & ( ( * (  self2353 ) ) .f_s ) ) ) );
}

static  struct Maybe_120   next204 (    struct TakeWhile_203 *  self744 ) {
    struct Maybe_120  mx745 = ( (  next205 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_120  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_120_None_t ) {
        return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
    }
    else if ( dref746.tag == Maybe_120_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_120_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_120_Just ) ( ( dref746 .stuff .Maybe_120_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_120) { .tag = Maybe_120_None_t } );
        }
    }
}

static  struct TakeWhile_203   take_dash_while207 (    struct Scanner_87 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_203) { .f_it = ( (  into_dash_iter86 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct Tuple2_39   lam102 (   struct env102 env ,    struct Tuple2_32  e_prime_779 ) {
    return ( ( Tuple2_39_Tuple2 ) ( ( env.e776 ) ,  (  e_prime_779 ) ) );
}

static  struct Map_100   lam99 (   struct env99 env ,    struct Tuple2_103  dref775 ) {
    struct env102 envinst102 = {
        .e776 = dref775 .field0 ,
    };
    return ( (  map167 ) ( ( (  drop174 ) ( ( env.it774 ) ,  ( (  i32_dash_size84 ) ( ( dref775 .field1 ) ) ) ) ) ,  ( (struct funenv102){ .fun = lam102, .env = envinst102 } ) ) );
}

static  struct FlattenIter_107   combinations208 (    struct Slice_97  it774 ) {
    struct env99 envinst99 = {
        .it774 =  it774 ,
    };
    return ( (  flatten200 ) ( ( (  map165 ) ( ( (  zip195 ) ( (  it774 ) ,  ( (  from181 ) ( (  from_dash_integral3 ( 1 ) ) ) ) ) ) ,  ( (struct funenv99){ .fun = lam99, .env = envinst99 } ) ) ) ) );
}

static  struct AppendIter_188   append209 (    struct Drop_101  it786 ,    struct Tuple2_32  e788 ) {
    return ( (struct AppendIter_188) { .f_it = ( (  into_dash_iter168 ) ( (  it786 ) ) ) , .f_elem = (  e788 ) , .f_appended = ( false ) } );
}

struct env211 {
    ;
    struct Scanner_87 *  it925;
};

struct funenv211 {
    struct Maybe_120  (*fun) (  struct env211  ,    int32_t  );
    struct env211 env;
};

static  enum Unit_126   for_dash_each210 (    struct Range_177  iterable819 ,   struct funenv211  fun821 ) {
    struct RangeIter_179  temp212 = ( (  into_dash_iter178 ) ( (  iterable819 ) ) );
    struct RangeIter_179 *  it822 = ( &temp212 );
    while ( ( true ) ) {
        struct Maybe_149  dref823 = ( (  next180 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_149_None_t ) {
            return ( Unit_126_Unit );
        }
        else if ( dref823.tag == Maybe_149_Just_t ) {
            struct funenv211  temp213 = (  fun821 );
            ( temp213.fun ( temp213.env ,  ( dref823 .stuff .Maybe_149_Just_s .field0 ) ) );
        }
    }
    return ( Unit_126_Unit );
}

struct env215 {
    ;
    struct Slice_97  new_dash_slice1820;
    ;
};

struct funenv215 {
    enum Unit_126  (*fun) (  struct env215  ,    struct Tuple2_103  );
    struct env215 env;
};

static  enum Unit_126   for_dash_each214 (    struct Zip_95  iterable819 ,   struct funenv215  fun821 ) {
    struct Zip_95  temp216 = ( (  into_dash_iter166 ) ( (  iterable819 ) ) );
    struct Zip_95 *  it822 = ( &temp216 );
    while ( ( true ) ) {
        struct Maybe_146  dref823 = ( (  next147 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_146_None_t ) {
            return ( Unit_126_Unit );
        }
        else if ( dref823.tag == Maybe_146_Just_t ) {
            struct funenv215  temp217 = (  fun821 );
            ( temp217.fun ( temp217.env ,  ( dref823 .stuff .Maybe_146_Just_s .field0 ) ) );
        }
    }
    return ( Unit_126_Unit );
}

struct env221 {
    ;
    ;
    size_t  starting_dash_size1814;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1815;
};

enum CAllocator_223 {
    CAllocator_223_CAllocator,
};

struct List_222 {
    enum CAllocator_223  f_al;
    struct Slice_97  f_elements;
    size_t  f_count;
};

struct funenv221 {
    enum Unit_126  (*fun) (  struct env221  ,    struct List_222 *  );
    struct env221 env;
};

struct env220 {
    ;
    struct env221 envinst221;
    ;
    ;
    ;
    ;
};

struct funenv220 {
    enum Unit_126  (*fun) (  struct env220  ,    struct List_222 *  ,    struct Tuple2_32  );
    struct env220 env;
};

struct env219 {
    struct env220 envinst220;
    struct List_222 *  list1867;
};

struct funenv219 {
    enum Unit_126  (*fun) (  struct env219  ,    struct Tuple2_32  );
    struct env219 env;
};

static  enum Unit_126   for_dash_each218 (    struct Map_91  iterable819 ,   struct funenv219  fun821 ) {
    struct Map_91  temp224 = ( (  into_dash_iter90 ) ( (  iterable819 ) ) );
    struct Map_91 *  it822 = ( &temp224 );
    while ( ( true ) ) {
        struct Maybe_115  dref823 = ( (  next114 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_115_None_t ) {
            return ( Unit_126_Unit );
        }
        else if ( dref823.tag == Maybe_115_Just_t ) {
            struct funenv219  temp225 = (  fun821 );
            ( temp225.fun ( temp225.env ,  ( dref823 .stuff .Maybe_115_Just_s .field0 ) ) );
        }
    }
    return ( Unit_126_Unit );
}

struct env227 {
    ;
    struct Slice_113  new_dash_slice1820;
    ;
};

struct funenv227 {
    enum Unit_126  (*fun) (  struct env227  ,    struct Tuple2_193  );
    struct env227 env;
};

static  enum Unit_126   for_dash_each226 (    struct Zip_184  iterable819 ,   struct funenv227  fun821 ) {
    struct Zip_184  temp228 = ( (  into_dash_iter183 ) ( (  iterable819 ) ) );
    struct Zip_184 *  it822 = ( &temp228 );
    while ( ( true ) ) {
        struct Maybe_192  dref823 = ( (  next191 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_192_None_t ) {
            return ( Unit_126_Unit );
        }
        else if ( dref823.tag == Maybe_192_Just_t ) {
            struct funenv227  temp229 = (  fun821 );
            ( temp229.fun ( temp229.env ,  ( dref823 .stuff .Maybe_192_Just_s .field0 ) ) );
        }
    }
    return ( Unit_126_Unit );
}

struct env233 {
    ;
    ;
    size_t  starting_dash_size1814;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1815;
};

struct List_234 {
    enum CAllocator_223  f_al;
    struct Slice_113  f_elements;
    size_t  f_count;
};

struct funenv233 {
    enum Unit_126  (*fun) (  struct env233  ,    struct List_234 *  );
    struct env233 env;
};

struct env232 {
    ;
    struct env233 envinst233;
    ;
    ;
    ;
    ;
};

struct funenv232 {
    enum Unit_126  (*fun) (  struct env232  ,    struct List_234 *  ,    struct Tuple2_39  );
    struct env232 env;
};

struct env231 {
    struct env232 envinst232;
    struct List_234 *  list1867;
};

struct funenv231 {
    enum Unit_126  (*fun) (  struct env231  ,    struct Tuple2_39  );
    struct env231 env;
};

static  enum Unit_126   for_dash_each230 (    struct Zip_187  iterable819 ,   struct funenv231  fun821 ) {
    struct Zip_187  temp235 = ( (  into_dash_iter186 ) ( (  iterable819 ) ) );
    struct Zip_187 *  it822 = ( &temp235 );
    while ( ( true ) ) {
        struct Maybe_154  dref823 = ( (  next189 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_154_None_t ) {
            return ( Unit_126_Unit );
        }
        else if ( dref823.tag == Maybe_154_Just_t ) {
            struct funenv231  temp236 = (  fun821 );
            ( temp236.fun ( temp236.env ,  ( dref823 .stuff .Maybe_154_Just_s .field0 ) ) );
        }
    }
    return ( Unit_126_Unit );
}

static  struct Maybe_153   reduce237 (    struct TakeWhile_203  iterable838 ,    struct Maybe_153  base840 ,    struct Maybe_153 (*  fun842 )(    char  ,    struct Maybe_153  ) ) {
    struct Maybe_153  x843 = (  base840 );
    struct TakeWhile_203  it844 = ( (  into_dash_iter202 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_120  dref845 = ( (  next204 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_120_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_120_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_120_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_153  temp238;
    return (  temp238 );
}

static  size_t   reduce239 (    struct TakeWhile_203  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_203  it844 = ( (  into_dash_iter202 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_120  dref845 = ( (  next204 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_120_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_120_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_120_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp240;
    return (  temp240 );
}

static  struct Maybe_153   reduce241 (    struct Map_106  iterable838 ,    struct Maybe_153  base840 ,    struct Maybe_153 (*  fun842 )(    int64_t  ,    struct Maybe_153  ) ) {
    struct Maybe_153  x843 = (  base840 );
    struct Map_106  it844 = ( (  into_dash_iter105 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_153  dref845 = ( (  next152 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_153_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_153_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_153_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_153  temp242;
    return (  temp242 );
}

struct env245 {
    struct Tuple2_39  rect2405;
    ;
};

struct funenv245 {
    bool  (*fun) (  struct env245  ,    struct Tuple2_39  );
    struct env245 env;
};

struct env244 {
    struct funenv245  fun880;
};

struct funenv244 {
    bool  (*fun) (  struct env244  ,    struct Tuple2_39  ,    bool  );
    struct env244 env;
};

static  bool   reduce243 (    struct Slice_113  iterable838 ,    bool  base840 ,   struct funenv244  fun842 ) {
    bool  x843 = (  base840 );
    struct SliceIter_185  it844 = ( (  into_dash_iter199 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_154  dref845 = ( (  next194 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_154_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_154_Just_t ) {
            struct funenv244  temp246 = (  fun842 );
            x843 = ( temp246.fun ( temp246.env ,  ( dref845 .stuff .Maybe_154_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    bool  temp247;
    return (  temp247 );
}

static  struct Maybe_153   reduce248 (    struct Map_109  iterable838 ,    struct Maybe_153  base840 ,    struct Maybe_153 (*  fun842 )(    int64_t  ,    struct Maybe_153  ) ) {
    struct Maybe_153  x843 = (  base840 );
    struct Map_109  it844 = ( (  into_dash_iter108 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_153  dref845 = ( (  next159 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_153_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_153_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_153_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_153  temp249;
    return (  temp249 );
}

static  size_t   lam251 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add18 ( (  x852 ) , (  from_dash_integral4 ( 1 ) ) ) );
}

static  size_t   count250 (    struct TakeWhile_203  it849 ) {
    return ( (  reduce239 ) ( (  it849 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  lam251 ) ) );
}

static  bool   lam244 (   struct env244 env ,    struct Tuple2_39  e882 ,    bool  x884 ) {
    struct funenv245  temp253 = ( env.fun880 );
    return ( ( temp253.fun ( temp253.env ,  (  e882 ) ) ) || (  x884 ) );
}

static  bool   any252 (    struct Slice_113  it878 ,   struct funenv245  fun880 ) {
    struct env244 envinst244 = {
        .fun880 =  fun880 ,
    };
    return ( (  reduce243 ) ( (  it878 ) ,  ( false ) ,  ( (struct funenv244){ .fun = lam244, .env = envinst244 } ) ) );
}

static  struct Maybe_120   head254 (    struct TakeWhile_203  it887 ) {
    struct TakeWhile_203  temp255 = ( (  into_dash_iter202 ) ( (  it887 ) ) );
    return ( (  next204 ) ( ( &temp255 ) ) );
}

static  bool   null256 (    struct TakeWhile_203  it890 ) {
    struct Maybe_120  dref891 = ( (  head254 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_120_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_120   lam211 (   struct env211 env ,    int32_t  dref928 ) {
    return ( (  next205 ) ( ( env.it925 ) ) );
}

static  enum Unit_126   drop_prime_257 (    struct Scanner_87 *  it925 ,    size_t  n927 ) {
    struct env211 envinst211 = {
        .it925 =  it925 ,
    };
    ( (  for_dash_each210 ) ( ( (  to176 ) ( (  from_dash_integral3 ( 1 ) ) ,  ( (  size_dash_i3285 ) ( (  n927 ) ) ) ) ) ,  ( (struct funenv211){ .fun = lam211, .env = envinst211 } ) ) );
    return ( Unit_126_Unit );
}

struct env259 {
    int64_t  x1048;
    ;
};

struct funenv259 {
    struct Maybe_153  (*fun) (  struct env259  ,    int64_t  );
    struct env259 env;
};

static  struct Maybe_153   maybe258 (    struct Maybe_153  x1030 ,   struct funenv259  fun1032 ,    struct Maybe_153  default1034 ) {
    struct funenv259  temp260 = (  fun1032 );
    return ( {  struct Maybe_153  dref1035 = (  x1030 ) ; dref1035.tag == Maybe_153_Just_t ? ( temp260.fun ( temp260.env ,  ( dref1035 .stuff .Maybe_153_Just_s .field0 ) ) ) : (  default1034 ) ; } );
}

struct env262 {
    int64_t  x1048;
    ;
};

struct funenv262 {
    struct Maybe_153  (*fun) (  struct env262  ,    int64_t  );
    struct env262 env;
};

static  struct Maybe_153   maybe261 (    struct Maybe_153  x1030 ,   struct funenv262  fun1032 ,    struct Maybe_153  default1034 ) {
    struct funenv262  temp263 = (  fun1032 );
    return ( {  struct Maybe_153  dref1035 = (  x1030 ) ; dref1035.tag == Maybe_153_Just_t ? ( temp263.fun ( temp263.env ,  ( dref1035 .stuff .Maybe_153_Just_s .field0 ) ) ) : (  default1034 ) ; } );
}

static  int64_t   min264 (    int64_t  l991 ,    int64_t  r993 ) {
    if ( (  cmp8 ( (  l991 ) , (  r993 ) ) == 0 ) ) {
        return (  l991 );
    } else {
        return (  r993 );
    }
}

static  int64_t   max265 (    int64_t  l1041 ,    int64_t  r1043 ) {
    if ( (  cmp8 ( (  l1041 ) , (  r1043 ) ) == 2 ) ) {
        return (  l1041 );
    } else {
        return (  r1043 );
    }
}

static  struct Maybe_153   lam259 (   struct env259 env ,    int64_t  lm1052 ) {
    return ( ( Maybe_153_Just ) ( ( (  max265 ) ( (  lm1052 ) ,  ( env.x1048 ) ) ) ) );
}

static  struct Maybe_153   lam267 (    int64_t  x1048 ,    struct Maybe_153  last_dash_max1050 ) {
    struct env259 envinst259 = {
        .x1048 =  x1048 ,
    };
    return ( (  maybe258 ) ( (  last_dash_max1050 ) ,  ( (struct funenv259){ .fun = lam259, .env = envinst259 } ) ,  ( ( Maybe_153_Just ) ( (  x1048 ) ) ) ) );
}

static  struct Maybe_153   maximum266 (    struct Map_106  it1046 ) {
    return ( (  reduce241 ) ( (  it1046 ) ,  ( (struct Maybe_153) { .tag = Maybe_153_None_t } ) ,  (  lam267 ) ) );
}

static  struct Maybe_153   lam262 (   struct env262 env ,    int64_t  lm1052 ) {
    return ( ( Maybe_153_Just ) ( ( (  max265 ) ( (  lm1052 ) ,  ( env.x1048 ) ) ) ) );
}

static  struct Maybe_153   lam269 (    int64_t  x1048 ,    struct Maybe_153  last_dash_max1050 ) {
    struct env262 envinst262 = {
        .x1048 =  x1048 ,
    };
    return ( (  maybe261 ) ( (  last_dash_max1050 ) ,  ( (struct funenv262){ .fun = lam262, .env = envinst262 } ) ,  ( ( Maybe_153_Just ) ( (  x1048 ) ) ) ) );
}

static  struct Maybe_153   maximum268 (    struct Map_109  it1046 ) {
    return ( (  reduce248 ) ( (  it1046 ) ,  ( (struct Maybe_153) { .tag = Maybe_153_None_t } ) ,  (  lam269 ) ) );
}

static  int64_t   abs270 (    int64_t  x1055 ) {
    return ( (  cmp8 ( (  x1055 ) , (  from_dash_integral2 ( 0 ) ) ) != 0 ) ? (  x1055 ) : (  op_dash_neg15 ( (  x1055 ) ) ) );
}

static  enum Unit_126   print_dash_str271 (    int64_t  self1140 ) {
    ( ( printf ) ( ( "%ld" ) ,  (  self1140 ) ) );
    return ( Unit_126_Unit );
}

struct StrConcat_274 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_274 StrConcat_274_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_274 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_273 {
    struct StrConcat_274  field0;
    char  field1;
};

static struct StrConcat_273 StrConcat_273_StrConcat (  struct StrConcat_274  field0 ,  char  field1 ) {
    return ( struct StrConcat_273 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_126   print_dash_str275 (    struct StrConcat_274  self1185 ) {
    struct StrConcat_274  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str131 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str272 (    struct StrConcat_273  self1185 ) {
    struct StrConcat_273  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str275 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

struct StrConcat_278 {
    const char*  field0;
    struct StrConcat_273  field1;
};

static struct StrConcat_278 StrConcat_278_StrConcat (  const char*  field0 ,  struct StrConcat_273  field1 ) {
    return ( struct StrConcat_278 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_277 {
    struct StrConcat_278  field0;
    char  field1;
};

static struct StrConcat_277 StrConcat_277_StrConcat (  struct StrConcat_278  field0 ,  char  field1 ) {
    return ( struct StrConcat_277 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_126   print_dash_str279 (    struct StrConcat_278  self1185 ) {
    struct StrConcat_278  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str131 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str272 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   print_dash_str276 (    struct StrConcat_277  self1185 ) {
    struct StrConcat_277  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str279 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

struct StrConcat_281 {
    int64_t  field0;
    char  field1;
};

static struct StrConcat_281 StrConcat_281_StrConcat (  int64_t  field0 ,  char  field1 ) {
    return ( struct StrConcat_281 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_126   print_dash_str280 (    struct StrConcat_281  self1185 ) {
    struct StrConcat_281  dref1186 = (  self1185 );
    if ( true ) {
        ( (  print_dash_str271 ) ( ( dref1186 .field0 ) ) );
        ( (  print_dash_str137 ) ( ( dref1186 .field1 ) ) );
    }
    return ( Unit_126_Unit );
}

static  struct TakeWhile_203   chars282 (    struct TakeWhile_203  self1301 ) {
    return (  self1301 );
}

static  int32_t   char_dash_i32283 (    char  c1328 ) {
    return ( (  cast_dash_on_dash_zeroed76 ) ( (  c1328 ) ) );
}

static  enum Unit_126   panic284 (    struct StrConcat_273  errmsg1362 ) {
    ( (  print_dash_str276 ) ( ( ( StrConcat_277_StrConcat ) ( ( ( StrConcat_278_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1362 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_126_Unit );
}

static  enum Unit_126   panic285 (    const char*  errmsg1362 ) {
    ( (  print_dash_str272 ) ( ( ( StrConcat_273_StrConcat ) ( ( ( StrConcat_274_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1362 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_126_Unit );
}

static  struct DynStr_24   or_dash_fail286 (    struct Maybe_116  x1375 ,    struct StrConcat_273  errmsg1377 ) {
    struct Maybe_116  dref1378 = (  x1375 );
    if ( dref1378.tag == Maybe_116_None_t ) {
        ( (  panic284 ) ( (  errmsg1377 ) ) );
        return ( (  undefined23 ) ( ) );
    }
    else if ( dref1378.tag == Maybe_116_Just_t ) {
        return ( dref1378 .stuff .Maybe_116_Just_s .field0 );
    }
}

static  int64_t   or_dash_fail287 (    struct Maybe_153  x1375 ,    const char*  errmsg1377 ) {
    struct Maybe_153  dref1378 = (  x1375 );
    if ( dref1378.tag == Maybe_153_None_t ) {
        ( (  panic285 ) ( (  errmsg1377 ) ) );
        return ( (  undefined27 ) ( ) );
    }
    else if ( dref1378.tag == Maybe_153_Just_t ) {
        return ( dref1378 .stuff .Maybe_153_Just_s .field0 );
    }
}

static  struct Tuple2_32   or_dash_fail288 (    struct Maybe_115  x1375 ,    struct StrConcat_121  errmsg1377 ) {
    struct Maybe_115  dref1378 = (  x1375 );
    if ( dref1378.tag == Maybe_115_None_t ) {
        ( (  panic125 ) ( (  errmsg1377 ) ) );
        return ( (  undefined31 ) ( ) );
    }
    else if ( dref1378.tag == Maybe_115_Just_t ) {
        return ( dref1378 .stuff .Maybe_115_Just_s .field0 );
    }
}

static  struct Slice_97   empty289 (  ) {
    return ( (struct Slice_97) { .f_ptr = ( (  null_dash_ptr79 ) ( ) ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Slice_113   empty290 (  ) {
    return ( (struct Slice_113) { .f_ptr = ( (  null_dash_ptr80 ) ( ) ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  char *   get_dash_ptr291 (    struct Slice_25  slice1408 ,    size_t  i1410 ) {
    if ( ( (  cmp10 ( (  i1410 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1410 ) , ( (  slice1408 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic125 ) ( ( ( StrConcat_121_StrConcat ) ( ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1410 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1408 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1411 = ( (  offset_dash_ptr34 ) ( ( (  slice1408 ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  i1410 ) ) ) ) );
    return (  elem_dash_ptr1411 );
}

static  struct Tuple2_32 *   get_dash_ptr292 (    struct Slice_97  slice1408 ,    size_t  i1410 ) {
    if ( ( (  cmp10 ( (  i1410 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1410 ) , ( (  slice1408 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic125 ) ( ( ( StrConcat_121_StrConcat ) ( ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1410 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1408 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Tuple2_32 *  elem_dash_ptr1411 = ( (  offset_dash_ptr36 ) ( ( (  slice1408 ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  i1410 ) ) ) ) );
    return (  elem_dash_ptr1411 );
}

static  struct Tuple2_39 *   get_dash_ptr293 (    struct Slice_113  slice1408 ,    size_t  i1410 ) {
    if ( ( (  cmp10 ( (  i1410 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1410 ) , ( (  slice1408 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic125 ) ( ( ( StrConcat_121_StrConcat ) ( ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1410 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1408 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Tuple2_39 *  elem_dash_ptr1411 = ( (  offset_dash_ptr38 ) ( ( (  slice1408 ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  i1410 ) ) ) ) );
    return (  elem_dash_ptr1411 );
}

static  struct Maybe_115   try_dash_get294 (    struct Slice_97  slice1414 ,    size_t  i1416 ) {
    if ( ( (  cmp10 ( (  i1416 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1416 ) , ( (  slice1414 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_115) { .tag = Maybe_115_None_t } );
    }
    struct Tuple2_32 *  elem_dash_ptr1417 = ( (  offset_dash_ptr36 ) ( ( (  slice1414 ) .f_ptr ) ,  ( (  size_dash_i6482 ) ( (  i1416 ) ) ) ) );
    return ( ( Maybe_115_Just ) ( ( * (  elem_dash_ptr1417 ) ) ) );
}

static  struct Tuple2_32   get295 (    struct Slice_97  slice1420 ,    size_t  i1422 ) {
    return ( (  or_dash_fail288 ) ( ( (  try_dash_get294 ) ( (  slice1420 ) ,  (  i1422 ) ) ) ,  ( ( StrConcat_121_StrConcat ) ( ( ( StrConcat_122_StrConcat ) ( ( ( StrConcat_123_StrConcat ) ( ( ( StrConcat_124_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1422 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1420 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_126   set296 (    struct Slice_25  slice1425 ,    size_t  i1427 ,    char  x1429 ) {
    char *  ep1430 = ( (  get_dash_ptr291 ) ( (  slice1425 ) ,  (  i1427 ) ) );
    (*  ep1430 ) = (  x1429 );
    return ( Unit_126_Unit );
}

static  enum Unit_126   set297 (    struct Slice_97  slice1425 ,    size_t  i1427 ,    struct Tuple2_32  x1429 ) {
    struct Tuple2_32 *  ep1430 = ( (  get_dash_ptr292 ) ( (  slice1425 ) ,  (  i1427 ) ) );
    (*  ep1430 ) = (  x1429 );
    return ( Unit_126_Unit );
}

static  enum Unit_126   set298 (    struct Slice_113  slice1425 ,    size_t  i1427 ,    struct Tuple2_39  x1429 ) {
    struct Tuple2_39 *  ep1430 = ( (  get_dash_ptr293 ) ( (  slice1425 ) ,  (  i1427 ) ) );
    (*  ep1430 ) = (  x1429 );
    return ( Unit_126_Unit );
}

static  struct SliceIter_88   into_dash_iter299 (    struct Slice_25  self1473 ) {
    return ( (struct SliceIter_88) { .f_slice = (  self1473 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Tuple2_32   elem_dash_get300 (    struct Slice_97  self1518 ,    size_t  idx1520 ) {
    return ( (  get295 ) ( (  self1518 ) ,  (  idx1520 ) ) );
}

static  enum CAllocator_223   idc301 (  ) {
    return ( CAllocator_223_CAllocator );
}

static  struct Slice_25   allocate302 (    enum CAllocator_223  dref1576 ,    size_t  count1578 ) {
    if (!(  dref1576 == CAllocator_223_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1579 = ( ( ( (  get_dash_typesize41 ) ( ) ) ) .f_size );
    char *  ptr1580 = ( (  cast_dash_ptr56 ) ( ( ( malloc ) ( (  op_dash_mul20 ( (  size1579 ) , (  count1578 ) ) ) ) ) ) );
    return ( (struct Slice_25) { .f_ptr = (  ptr1580 ) , .f_count = (  count1578 ) } );
}

static  struct Slice_97   allocate303 (    enum CAllocator_223  dref1576 ,    size_t  count1578 ) {
    if (!(  dref1576 == CAllocator_223_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1579 = ( ( ( (  get_dash_typesize44 ) ( ) ) ) .f_size );
    struct Tuple2_32 *  ptr1580 = ( (  cast_dash_ptr60 ) ( ( ( malloc ) ( (  op_dash_mul20 ( (  size1579 ) , (  count1578 ) ) ) ) ) ) );
    return ( (struct Slice_97) { .f_ptr = (  ptr1580 ) , .f_count = (  count1578 ) } );
}

static  struct Slice_113   allocate304 (    enum CAllocator_223  dref1576 ,    size_t  count1578 ) {
    if (!(  dref1576 == CAllocator_223_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1579 = ( ( ( (  get_dash_typesize47 ) ( ) ) ) .f_size );
    struct Tuple2_39 *  ptr1580 = ( (  cast_dash_ptr63 ) ( ( ( malloc ) ( (  op_dash_mul20 ( (  size1579 ) , (  count1578 ) ) ) ) ) ) );
    return ( (struct Slice_113) { .f_ptr = (  ptr1580 ) , .f_count = (  count1578 ) } );
}

static  enum Unit_126   free305 (    enum CAllocator_223  dref1582 ,    struct Slice_97  slice1584 ) {
    if (!(  dref1582 == CAllocator_223_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr61 ) ( ( (  slice1584 ) .f_ptr ) ) ) ) );
    return ( Unit_126_Unit );
}

static  enum Unit_126   free306 (    enum CAllocator_223  dref1582 ,    struct Slice_113  slice1584 ) {
    if (!(  dref1582 == CAllocator_223_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr64 ) ( ( (  slice1584 ) .f_ptr ) ) ) ) );
    return ( Unit_126_Unit );
}

static  struct SliceIter_88   chars307 (    struct DynStr_24  self1591 ) {
    return ( (  into_dash_iter299 ) ( ( (  self1591 ) .f_contents ) ) );
}

static  struct LineIter_92   lines308 (    struct DynStr_24  s1728 ) {
    return ( (struct LineIter_92) { .f_og = (  s1728 ) , .f_last = (  from_dash_integral4 ( 0 ) ) } );
}

static  bool   is_dash_digit309 (    char  c1757 ) {
    return ( (  cmp11 ( ( (  char_dash_i32283 ) ( (  c1757 ) ) ) , ( (  char_dash_i32283 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp11 ( ( (  char_dash_i32283 ) ( (  c1757 ) ) ) , ( (  char_dash_i32283 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_149   parse_dash_digit310 (    char  c1760 ) {
    if ( ( (  is_dash_digit309 ) ( (  c1760 ) ) ) ) {
        return ( ( Maybe_149_Just ) ( (  op_dash_sub17 ( ( (  char_dash_i32283 ) ( (  c1760 ) ) ) , ( (  char_dash_i32283 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_149) { .tag = Maybe_149_None_t } );
    }
}

static  struct Maybe_153   sequence_dash_maybe312 (    char  e1766 ,    struct Maybe_153  b1768 ) {
    struct Maybe_153  dref1769 = (  b1768 );
    if ( dref1769.tag == Maybe_153_None_t ) {
        return ( (struct Maybe_153) { .tag = Maybe_153_None_t } );
    }
    else if ( dref1769.tag == Maybe_153_Just_t ) {
        struct Maybe_149  dref1771 = ( (  parse_dash_digit310 ) ( (  e1766 ) ) );
        if ( dref1771.tag == Maybe_149_None_t ) {
            return ( (struct Maybe_153) { .tag = Maybe_153_None_t } );
        }
        else if ( dref1771.tag == Maybe_149_Just_t ) {
            return ( ( Maybe_153_Just ) ( (  op_dash_add12 ( (  op_dash_mul14 ( ( dref1769 .stuff .Maybe_153_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i6483 ) ( ( dref1771 .stuff .Maybe_149_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_153   parse_dash_int311 (    struct TakeWhile_203  s1763 ) {
    struct TakeWhile_203  cs1773 = ( (  chars282 ) ( (  s1763 ) ) );
    struct Maybe_120  dref1774 = ( (  head254 ) ( (  cs1773 ) ) );
    if ( dref1774.tag == Maybe_120_Just_t ) {
        return ( (  reduce237 ) ( (  cs1773 ) ,  ( ( Maybe_153_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe312 ) ) );
    }
    else if ( dref1774.tag == Maybe_120_None_t ) {
        return ( (struct Maybe_153) { .tag = Maybe_153_None_t } );
    }
}

static  struct List_222   mk313 (    enum CAllocator_223  al1809 ) {
    struct Slice_97  elements1810 = ( (  empty289 ) ( ) );
    return ( (struct List_222) { .f_al = (  al1809 ) , .f_elements = (  elements1810 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct List_234   mk314 (    enum CAllocator_223  al1809 ) {
    struct Slice_113  elements1810 = ( (  empty290 ) ( ) );
    return ( (struct List_234) { .f_al = (  al1809 ) , .f_elements = (  elements1810 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  enum Unit_126   lam215 (   struct env215 env ,    struct Tuple2_103  dref1821 ) {
    return ( (  set297 ) ( ( env.new_dash_slice1820 ) ,  ( (  i32_dash_size84 ) ( ( dref1821 .field1 ) ) ) ,  ( dref1821 .field0 ) ) );
}

static  enum Unit_126   grow_dash_if_dash_full221 (   struct env221 env ,    struct List_222 *  list1819 ) {
    if ( (  eq6 ( ( ( * (  list1819 ) ) .f_count ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        (*  list1819 ) .f_elements = ( (  allocate303 ) ( ( ( * (  list1819 ) ) .f_al ) ,  ( env.starting_dash_size1814 ) ) );
    } else {
        if ( (  eq6 ( ( ( * (  list1819 ) ) .f_count ) , ( ( ( * (  list1819 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_97  new_dash_slice1820 = ( (  allocate303 ) ( ( ( * (  list1819 ) ) .f_al ) ,  (  op_dash_mul20 ( ( ( * (  list1819 ) ) .f_count ) , ( env.growth_dash_factor1815 ) ) ) ) );
            struct env215 envinst215 = {
                .new_dash_slice1820 =  new_dash_slice1820 ,
            };
            ( (  for_dash_each214 ) ( ( (  zip195 ) ( ( ( * (  list1819 ) ) .f_elements ) ,  ( (  from181 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv215){ .fun = lam215, .env = envinst215 } ) ) );
            ( (  free305 ) ( ( ( * (  list1819 ) ) .f_al ) ,  ( ( * (  list1819 ) ) .f_elements ) ) );
            (*  list1819 ) .f_elements = (  new_dash_slice1820 );
        }
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   lam227 (   struct env227 env ,    struct Tuple2_193  dref1821 ) {
    return ( (  set298 ) ( ( env.new_dash_slice1820 ) ,  ( (  i32_dash_size84 ) ( ( dref1821 .field1 ) ) ) ,  ( dref1821 .field0 ) ) );
}

static  enum Unit_126   grow_dash_if_dash_full233 (   struct env233 env ,    struct List_234 *  list1819 ) {
    if ( (  eq6 ( ( ( * (  list1819 ) ) .f_count ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        (*  list1819 ) .f_elements = ( (  allocate304 ) ( ( ( * (  list1819 ) ) .f_al ) ,  ( env.starting_dash_size1814 ) ) );
    } else {
        if ( (  eq6 ( ( ( * (  list1819 ) ) .f_count ) , ( ( ( * (  list1819 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_113  new_dash_slice1820 = ( (  allocate304 ) ( ( ( * (  list1819 ) ) .f_al ) ,  (  op_dash_mul20 ( ( ( * (  list1819 ) ) .f_count ) , ( env.growth_dash_factor1815 ) ) ) ) );
            struct env227 envinst227 = {
                .new_dash_slice1820 =  new_dash_slice1820 ,
            };
            ( (  for_dash_each226 ) ( ( (  zip198 ) ( ( ( * (  list1819 ) ) .f_elements ) ,  ( (  from181 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv227){ .fun = lam227, .env = envinst227 } ) ) );
            ( (  free306 ) ( ( ( * (  list1819 ) ) .f_al ) ,  ( ( * (  list1819 ) ) .f_elements ) ) );
            (*  list1819 ) .f_elements = (  new_dash_slice1820 );
        }
    }
    return ( Unit_126_Unit );
}

static  enum Unit_126   add220 (   struct env220 env ,    struct List_222 *  list1826 ,    struct Tuple2_32  elem1828 ) {
    struct funenv221  temp315 = ( (struct funenv221){ .fun = grow_dash_if_dash_full221, .env =  env.envinst221  } );
    ( temp315.fun ( temp315.env ,  (  list1826 ) ) );
    ( (  set297 ) ( ( ( * (  list1826 ) ) .f_elements ) ,  ( ( * (  list1826 ) ) .f_count ) ,  (  elem1828 ) ) );
    (*  list1826 ) .f_count = (  op_dash_add18 ( ( ( * (  list1826 ) ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_126_Unit );
}

static  enum Unit_126   add232 (   struct env232 env ,    struct List_234 *  list1826 ,    struct Tuple2_39  elem1828 ) {
    struct funenv233  temp316 = ( (struct funenv233){ .fun = grow_dash_if_dash_full233, .env =  env.envinst233  } );
    ( temp316.fun ( temp316.env ,  (  list1826 ) ) );
    ( (  set298 ) ( ( ( * (  list1826 ) ) .f_elements ) ,  ( ( * (  list1826 ) ) .f_count ) ,  (  elem1828 ) ) );
    (*  list1826 ) .f_count = (  op_dash_add18 ( ( ( * (  list1826 ) ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_126_Unit );
}

struct env317 {
    struct env220 envinst220;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_126   lam219 (   struct env219 env ,    struct Tuple2_32  x1871 ) {
    struct funenv220  temp318 = ( (struct funenv220){ .fun = add220, .env =  env.envinst220  } );
    return ( temp318.fun ( temp318.env ,  ( env.list1867 ) ,  (  x1871 ) ) );
}

static  enum Unit_126   add_dash_all317 (   struct env317 env ,    struct List_222 *  list1867 ,    struct Map_91  it1869 ) {
    struct env219 envinst219 = {
        .envinst220 = env.envinst220 ,
        .list1867 =  list1867 ,
    };
    ( (  for_dash_each218 ) ( (  it1869 ) ,  ( (struct funenv219){ .fun = lam219, .env = envinst219 } ) ) );
    return ( Unit_126_Unit );
}

struct env319 {
    struct env232 envinst232;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_126   lam231 (   struct env231 env ,    struct Tuple2_39  x1871 ) {
    struct funenv232  temp320 = ( (struct funenv232){ .fun = add232, .env =  env.envinst232  } );
    return ( temp320.fun ( temp320.env ,  ( env.list1867 ) ,  (  x1871 ) ) );
}

static  enum Unit_126   add_dash_all319 (   struct env319 env ,    struct List_234 *  list1867 ,    struct Zip_187  it1869 ) {
    struct env231 envinst231 = {
        .envinst232 = env.envinst232 ,
        .list1867 =  list1867 ,
    };
    ( (  for_dash_each230 ) ( (  it1869 ) ,  ( (struct funenv231){ .fun = lam231, .env = envinst231 } ) ) );
    return ( Unit_126_Unit );
}

struct funenv317 {
    enum Unit_126  (*fun) (  struct env317  ,    struct List_222 *  ,    struct Map_91  );
    struct env317 env;
};

struct env321 {
    ;
    ;
    struct env317 envinst317;
    ;
    ;
    ;
};

static  struct List_222   to_dash_list321 (   struct env321 env ,    struct Map_91  it1879 ,    enum CAllocator_223  al1881 ) {
    struct List_222  temp322 = ( (  mk313 ) ( (  al1881 ) ) );
    struct List_222 *  l1882 = ( &temp322 );
    struct funenv317  temp323 = ( (struct funenv317){ .fun = add_dash_all317, .env =  env.envinst317  } );
    ( temp323.fun ( temp323.env ,  (  l1882 ) ,  (  it1879 ) ) );
    return ( * (  l1882 ) );
}

struct funenv319 {
    enum Unit_126  (*fun) (  struct env319  ,    struct List_234 *  ,    struct Zip_187  );
    struct env319 env;
};

struct env324 {
    ;
    struct env319 envinst319;
    ;
    ;
    ;
    ;
};

static  struct List_234   to_dash_list324 (   struct env324 env ,    struct Zip_187  it1879 ,    enum CAllocator_223  al1881 ) {
    struct List_234  temp325 = ( (  mk314 ) ( (  al1881 ) ) );
    struct List_234 *  l1882 = ( &temp325 );
    struct funenv319  temp326 = ( (struct funenv319){ .fun = add_dash_all319, .env =  env.envinst319  } );
    ( temp326.fun ( temp326.env ,  (  l1882 ) ,  (  it1879 ) ) );
    return ( * (  l1882 ) );
}

static  struct Slice_97   to_dash_slice327 (    struct List_222  l1885 ) {
    struct Tuple2_32 *  ptr1886 = ( ( (  l1885 ) .f_elements ) .f_ptr );
    return ( (struct Slice_97) { .f_ptr = (  ptr1886 ) , .f_count = ( (  l1885 ) .f_count ) } );
}

static  struct Slice_113   to_dash_slice328 (    struct List_234  l1885 ) {
    struct Tuple2_39 *  ptr1886 = ( ( (  l1885 ) .f_elements ) .f_ptr );
    return ( (struct Slice_113) { .f_ptr = (  ptr1886 ) , .f_count = ( (  l1885 ) .f_count ) } );
}

static  enum Unit_126   println329 (    int64_t  s1935 ) {
    ( (  print_dash_str280 ) ( ( ( StrConcat_281_StrConcat ) ( (  s1935 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    return ( Unit_126_Unit );
}

static  struct Maybe_116   try_dash_read_dash_contents330 (    const char*  filename2321 ,    enum CAllocator_223  al2323 ) {
    FILE *  file2324 = ( ( fopen ) ( (  filename2321 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null81 ) ( (  file2324 ) ) ) ) {
        return ( (struct Maybe_116) { .tag = Maybe_116_None_t } );
    }
    ( ( fseek ) ( (  file2324 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_end22 ) ( ) ) ) );
    int32_t  file_dash_size2325 = ( ( ftell ) ( (  file2324 ) ) );
    ( ( fseek ) ( (  file2324 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_set21 ) ( ) ) ) );
    struct Slice_25  file_dash_buf2326 = ( ( (  allocate302 ) ( (  al2323 ) ,  (  op_dash_add18 ( ( (  i32_dash_size84 ) ( (  file_dash_size2325 ) ) ) , (  from_dash_integral4 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2326 ) .f_ptr ) ,  (  from_dash_integral3 ( 1 ) ) ,  (  file_dash_size2325 ) ,  (  file2324 ) ) );
    ( (  set296 ) ( (  file_dash_buf2326 ) ,  ( (  i32_dash_size84 ) ( (  file_dash_size2325 ) ) ) ,  ( (  nullchar139 ) ( ) ) ) );
    ( ( fclose ) ( (  file2324 ) ) );
    struct DynStr_24  str2327 = ( (struct DynStr_24) { .f_contents = (  file_dash_buf2326 ) } );
    return ( ( Maybe_116_Just ) ( (  str2327 ) ) );
}

static  struct DynStr_24   read_dash_contents331 (    const char*  filename2330 ,    enum CAllocator_223  al2332 ) {
    return ( (  or_dash_fail286 ) ( ( (  try_dash_read_dash_contents330 ) ( (  filename2330 ) ,  (  al2332 ) ) ) ,  ( ( StrConcat_273_StrConcat ) ( ( ( StrConcat_274_StrConcat ) ( ( "could not open file " ) ,  (  filename2330 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  struct Scanner_87   mk332 (    struct DynStr_24  s2359 ) {
    return ( (struct Scanner_87) { .f_s = ( (  chars307 ) ( (  s2359 ) ) ) } );
}

static  struct Maybe_153   scan_dash_int333 (    struct Scanner_87 *  sc2362 ) {
    struct TakeWhile_203  digit_dash_chars2363 = ( (  take_dash_while207 ) ( (  sc2362 ) ,  (  is_dash_digit309 ) ) );
    if ( ( (  null256 ) ( (  digit_dash_chars2363 ) ) ) ) {
        return ( (struct Maybe_153) { .tag = Maybe_153_None_t } );
    }
    ( (  drop_prime_257 ) ( (  sc2362 ) ,  ( (  count250 ) ( (  digit_dash_chars2363 ) ) ) ) );
    return ( (  parse_dash_int311 ) ( (  digit_dash_chars2363 ) ) );
}

static  struct Maybe_153   int334 (    struct Scanner_87 *  sc2366 ) {
    return ( (  scan_dash_int333 ) ( (  sc2366 ) ) );
}

struct funenv321 {
    struct List_222  (*fun) (  struct env321  ,    struct Map_91  ,    enum CAllocator_223  );
    struct env321 env;
};

static  struct Tuple2_32   lam336 (    struct DynStr_24  line2349 ) {
    struct Scanner_87  temp337 = ( (  mk332 ) ( (  line2349 ) ) );
    struct Scanner_87 *  sc2372 = ( &temp337 );
    int64_t  x2373 = ( (  or_dash_fail287 ) ( ( (  int334 ) ( (  sc2372 ) ) ) ,  ( "expect int" ) ) );
    ( (  drop_prime_257 ) ( (  sc2372 ) ,  (  from_dash_integral4 ( 1 ) ) ) );
    int64_t  y2374 = ( (  or_dash_fail287 ) ( ( (  int334 ) ( (  sc2372 ) ) ) ,  ( "expect int" ) ) );
    return ( ( Tuple2_32_Tuple2 ) ( (  x2373 ) ,  (  y2374 ) ) );
}

static  int64_t   lam338 (    struct Tuple2_39  dref2376 ) {
    return (  op_dash_mul14 ( (  op_dash_add12 ( ( (  abs270 ) ( (  op_dash_sub13 ( ( dref2376 .field0 .field0 ) , ( dref2376 .field1 .field0 ) ) ) ) ) , (  from_dash_integral2 ( 1 ) ) ) ) , (  op_dash_add12 ( ( (  abs270 ) ( (  op_dash_sub13 ( ( dref2376 .field0 .field1 ) , ( dref2376 .field1 .field1 ) ) ) ) ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
}

static  bool   goes_dash_inside339 (    struct Tuple2_39  dref2382 ,    struct Tuple2_39  dref2387 ) {
    int64_t  min_dash_rx2392 = ( (  min264 ) ( ( dref2387 .field0 .field0 ) ,  ( dref2387 .field1 .field0 ) ) );
    int64_t  max_dash_rx2393 = ( (  max265 ) ( ( dref2387 .field0 .field0 ) ,  ( dref2387 .field1 .field0 ) ) );
    int64_t  min_dash_ry2394 = ( (  min264 ) ( ( dref2387 .field0 .field1 ) ,  ( dref2387 .field1 .field1 ) ) );
    int64_t  max_dash_ry2395 = ( (  max265 ) ( ( dref2387 .field0 .field1 ) ,  ( dref2387 .field1 .field1 ) ) );
    if ( (  eq5 ( ( dref2382 .field0 .field0 ) , ( dref2382 .field1 .field0 ) ) ) ) {
        int64_t  x2396 = ( dref2382 .field0 .field0 );
        if ( ( (  cmp8 ( (  x2396 ) , (  min_dash_rx2392 ) ) != 2 ) || (  cmp8 ( (  max_dash_rx2393 ) , (  x2396 ) ) != 2 ) ) ) {
            return ( false );
        }
        int64_t  min_dash_y2397 = ( (  min264 ) ( ( dref2382 .field0 .field1 ) ,  ( dref2382 .field1 .field1 ) ) );
        int64_t  max_dash_y2398 = ( (  max265 ) ( ( dref2382 .field0 .field1 ) ,  ( dref2382 .field1 .field1 ) ) );
        if ( ( (  cmp8 ( (  min_dash_y2397 ) , (  max_dash_ry2395 ) ) != 0 ) || (  cmp8 ( (  max_dash_y2398 ) , (  min_dash_ry2394 ) ) != 2 ) ) ) {
            return ( false );
        }
        return ( true );
    } else {
        int64_t  y2399 = ( dref2382 .field0 .field1 );
        if ( ( (  cmp8 ( (  y2399 ) , (  min_dash_ry2394 ) ) != 2 ) || (  cmp8 ( (  max_dash_ry2395 ) , (  y2399 ) ) != 2 ) ) ) {
            return ( false );
        }
        int64_t  min_dash_x2400 = ( (  min264 ) ( ( dref2382 .field0 .field0 ) ,  ( dref2382 .field1 .field0 ) ) );
        int64_t  max_dash_x2401 = ( (  max265 ) ( ( dref2382 .field0 .field0 ) ,  ( dref2382 .field1 .field0 ) ) );
        if ( ( (  cmp8 ( (  min_dash_x2400 ) , (  max_dash_rx2393 ) ) != 0 ) || (  cmp8 ( (  max_dash_x2401 ) , (  min_dash_rx2392 ) ) != 2 ) ) ) {
            return ( false );
        }
        return ( true );
    }
}

struct funenv324 {
    struct List_234  (*fun) (  struct env324  ,    struct Zip_187  ,    enum CAllocator_223  );
    struct env324 env;
};

static  bool   lam245 (   struct env245 env ,    struct Tuple2_39  line2407 ) {
    return ( (  goes_dash_inside339 ) ( (  line2407 ) ,  ( env.rect2405 ) ) );
}

static  bool   any_dash_line_dash_goes_dash_inside112 (   struct env112 env ,    struct Tuple2_39  rect2405 ) {
    struct env245 envinst245 = {
        .rect2405 =  rect2405 ,
    };
    return ( (  any252 ) ( ( env.lines2402 ) ,  ( (struct funenv245){ .fun = lam245, .env = envinst245 } ) ) );
}

static  bool   lam111 (   struct env111 env ,    struct Tuple2_39  rect2409 ) {
    struct funenv112  temp341 = ( (struct funenv112){ .fun = any_dash_line_dash_goes_dash_inside112, .env =  env.envinst112  } );
    return ( ! ( temp341.fun ( temp341.env ,  (  rect2409 ) ) ) );
}

static  int64_t   lam342 (    struct Tuple2_39  dref2410 ) {
    return (  op_dash_mul14 ( (  op_dash_add12 ( ( (  abs270 ) ( (  op_dash_sub13 ( ( dref2410 .field0 .field0 ) , ( dref2410 .field1 .field0 ) ) ) ) ) , (  from_dash_integral2 ( 1 ) ) ) ) , (  op_dash_add12 ( ( (  abs270 ) ( (  op_dash_sub13 ( ( dref2410 .field0 .field1 ) , ( dref2410 .field1 .field1 ) ) ) ) ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1814 = ( (  from_dash_integral4 ( 8 ) ) );
    size_t  growth_dash_factor1815 = ( (  from_dash_integral4 ( 2 ) ) );
    size_t  shrink_dash_factor1816 = ( (  from_dash_integral4 ( 8 ) ) );
    struct env221 envinst221 = {
        .starting_dash_size1814 =  starting_dash_size1814 ,
        .growth_dash_factor1815 =  growth_dash_factor1815 ,
    };
    struct env233 envinst233 = {
        .starting_dash_size1814 =  starting_dash_size1814 ,
        .growth_dash_factor1815 =  growth_dash_factor1815 ,
    };
    struct env220 envinst220 = {
        .envinst221 = envinst221 ,
    };
    struct env232 envinst232 = {
        .envinst233 = envinst233 ,
    };
    struct env317 envinst317 = {
        .envinst220 = envinst220 ,
    };
    struct env319 envinst319 = {
        .envinst232 = envinst232 ,
    };
    struct env321 envinst321 = {
        .envinst317 = envinst317 ,
    };
    struct env324 envinst324 = {
        .envinst319 = envinst319 ,
    };
    enum CAllocator_223  al2318 = ( (  idc301 ) ( ) );
    struct funenv321  temp335 = ( (struct funenv321){ .fun = to_dash_list321, .env =  envinst321  } );
    struct Slice_97  points2375 = ( (  to_dash_slice327 ) ( ( temp335.fun ( temp335.env ,  ( (  map163 ) ( ( (  lines308 ) ( ( (  read_dash_contents331 ) ( ( "day9-real" ) ,  (  al2318 ) ) ) ) ) ,  (  lam336 ) ) ) ,  (  al2318 ) ) ) ) );
    ( (  println329 ) ( ( (  or_dash_fail287 ) ( ( (  maximum266 ) ( ( (  map169 ) ( ( (  combinations208 ) ( (  points2375 ) ) ) ,  (  lam338 ) ) ) ) ) ,  ( "expect non-empty" ) ) ) ) );
    struct funenv324  temp340 = ( (struct funenv324){ .fun = to_dash_list324, .env =  envinst324  } );
    struct Slice_113  lines2402 = ( (  to_dash_slice328 ) ( ( temp340.fun ( temp340.env ,  ( (  zip196 ) ( (  points2375 ) ,  ( (  append209 ) ( ( (  drop174 ) ( (  points2375 ) ,  (  from_dash_integral4 ( 1 ) ) ) ) ,  (  elem_dash_get300 ( (  points2375 ) , (  from_dash_integral4 ( 0 ) ) ) ) ) ) ) ) ,  (  al2318 ) ) ) ) );
    struct env112 envinst112 = {
        .lines2402 =  lines2402 ,
    };
    struct env111 envinst111 = {
        .envinst112 = envinst112 ,
    };
    ( (  println329 ) ( ( (  or_dash_fail287 ) ( ( (  maximum268 ) ( ( (  map171 ) ( ( (  filter173 ) ( ( (  combinations208 ) ( (  points2375 ) ) ) ,  ( (struct funenv111){ .fun = lam111, .env = envinst111 } ) ) ) ,  (  lam342 ) ) ) ) ) ,  ( "empty" ) ) ) ) );
}
