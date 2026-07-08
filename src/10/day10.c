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

static  bool   eq5 (    size_t  l114 ,    size_t  r116 ) {
    return ( (  l114 ) == (  r116 ) );
}

static  bool   eq6 (    char  l129 ,    char  r131 ) {
    return ( (  l129 ) == (  r131 ) );
}

struct Maybe_8 {
    enum {
        Maybe_8_None_t,
        Maybe_8_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_8_Just_s;
    } stuff;
};

static struct Maybe_8 Maybe_8_Just (  char  field0 ) {
    return ( struct Maybe_8 ) { .tag = Maybe_8_Just_t, .stuff = { .Maybe_8_Just_s = { .field0 = field0 } } };
};

struct Tuple2_9 {
    struct Maybe_8  field0;
    struct Maybe_8  field1;
};

static struct Tuple2_9 Tuple2_9_Tuple2 (  struct Maybe_8  field0 ,  struct Maybe_8  field1 ) {
    return ( struct Tuple2_9 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq7 (    struct Maybe_8  l134 ,    struct Maybe_8  r136 ) {
    struct Tuple2_9  dref137 = ( ( Tuple2_9_Tuple2 ) ( (  l134 ) ,  (  r136 ) ) );
    if ( dref137 .field0.tag == Maybe_8_None_t && dref137 .field1.tag == Maybe_8_None_t ) {
        return ( true );
    }
    else if ( dref137 .field0.tag == Maybe_8_Just_t && dref137 .field1.tag == Maybe_8_Just_t ) {
        return (  eq6 ( ( dref137 .field0 .stuff .Maybe_8_Just_s .field0 ) , ( dref137 .field1 .stuff .Maybe_8_Just_s .field0 ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

enum Ordering_11 {
    Ordering_11_LT,
    Ordering_11_EQ,
    Ordering_11_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_11   cmp10 (    size_t  l152 ,    size_t  r154 ) {
    return ( builtin_size_tcmp( (  l152 ) , (  r154 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_11   cmp12 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static  int64_t   op_dash_add13 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) + (  r179 ) );
}

static  int64_t   op_dash_mul14 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) * (  r189 ) );
}

static  int32_t   op_dash_add15 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) + (  r202 ) );
}

static  int32_t   op_dash_sub16 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) - (  r207 ) );
}

static  size_t   op_dash_add17 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) + (  r265 ) );
}

static  size_t   op_dash_sub18 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) - (  r270 ) );
}

static  size_t   op_dash_mul19 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) * (  r275 ) );
}

static  int32_t   seek_dash_set20 (  ) {
    return (  from_dash_integral3 ( 0 ) );
}

static  int32_t   seek_dash_end21 (  ) {
    return (  from_dash_integral3 ( 2 ) );
}

struct Slice_24 {
    char *  f_ptr;
    size_t  f_count;
};

struct DynStr_23 {
    struct Slice_24  f_contents;
};

static  struct DynStr_23   undefined22 (  ) {
    struct DynStr_23  temp25;
    return (  temp25 );
}

static  int64_t   undefined26 (  ) {
    int64_t  temp27;
    return (  temp27 );
}

struct Slice_30 {
    size_t *  f_ptr;
    size_t  f_count;
};

struct Button_29 {
    struct Slice_30  field0;
};

static struct Button_29 Button_29_Button (  struct Slice_30  field0 ) {
    return ( struct Button_29 ) { .field0 = field0 };
};

static  struct Button_29   undefined28 (  ) {
    struct Button_29  temp31;
    return (  temp31 );
}

static  int32_t   undefined32 (  ) {
    int32_t  temp33;
    return (  temp33 );
}

static  char   undefined34 (  ) {
    char  temp35;
    return (  temp35 );
}

static  char *   offset_dash_ptr36 (    char *  x456 ,    int64_t  count458 ) {
    char  temp37;
    return ( (char * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp37 ) ) ) ) ) ) ) ) );
}

static  size_t *   offset_dash_ptr38 (    size_t *  x456 ,    int64_t  count458 ) {
    size_t  temp39;
    return ( (size_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp39 ) ) ) ) ) ) ) ) );
}

static  struct Button_29 *   offset_dash_ptr40 (    struct Button_29 *  x456 ,    int64_t  count458 ) {
    struct Button_29  temp41;
    return ( (struct Button_29 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp41 ) ) ) ) ) ) ) ) );
}

static  int32_t *   offset_dash_ptr42 (    int32_t *  x456 ,    int64_t  count458 ) {
    int32_t  temp43;
    return ( (int32_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul14 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp43 ) ) ) ) ) ) ) ) );
}

struct TypeSize_45 {
    size_t  f_size;
};

static  struct TypeSize_45   get_dash_typesize44 (  ) {
    char  temp46;
    return ( (struct TypeSize_45) { .f_size = ( sizeof( ( (  temp46 ) ) ) ) } );
}

struct TypeSize_48 {
    size_t  f_size;
};

static  struct TypeSize_48   get_dash_typesize47 (  ) {
    size_t  temp49;
    return ( (struct TypeSize_48) { .f_size = ( sizeof( ( (  temp49 ) ) ) ) } );
}

struct TypeSize_51 {
    size_t  f_size;
};

static  struct TypeSize_51   get_dash_typesize50 (  ) {
    struct Button_29  temp52;
    return ( (struct TypeSize_51) { .f_size = ( sizeof( ( (  temp52 ) ) ) ) } );
}

struct TypeSize_54 {
    size_t  f_size;
};

static  struct TypeSize_54   get_dash_typesize53 (  ) {
    int32_t  temp55;
    return ( (struct TypeSize_54) { .f_size = ( sizeof( ( (  temp55 ) ) ) ) } );
}

static  size_t   size_dash_of56 (    FILE *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of57 (    char  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of58 (    struct Button_29 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of59 (    size_t *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of60 (    int32_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of61 (    int32_t *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  char *   cast62 (    int32_t *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  char *   cast_dash_ptr63 (    void *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr64 (    FILE * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr65 (    char *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr66 (    struct Button_29 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr67 (    size_t * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr68 (    int32_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr69 (    size_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  size_t *   cast_dash_ptr70 (    void *  p472 ) {
    return ( (size_t * ) (  p472 ) );
}

static  void *   cast_dash_ptr71 (    struct Button_29 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Button_29 *   cast_dash_ptr72 (    void *  p472 ) {
    return ( (struct Button_29 * ) (  p472 ) );
}

static  void *   cast_dash_ptr73 (    int32_t * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  int32_t *   cast_dash_ptr74 (    void *  p472 ) {
    return ( (int32_t * ) (  p472 ) );
}

static  FILE *   zeroed75 (  ) {
    FILE *  temp76;
    FILE *  x479 = (  temp76 );
    ( ( memset ) ( ( (  cast_dash_ptr64 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of56 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char   zeroed77 (  ) {
    char  temp78;
    char  x479 = (  temp78 );
    ( ( memset ) ( ( (  cast_dash_ptr65 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of57 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Button_29 *   zeroed79 (  ) {
    struct Button_29 *  temp80;
    struct Button_29 *  x479 = (  temp80 );
    ( ( memset ) ( ( (  cast_dash_ptr66 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of58 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  size_t *   zeroed81 (  ) {
    size_t *  temp82;
    size_t *  x479 = (  temp82 );
    ( ( memset ) ( ( (  cast_dash_ptr67 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of59 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int32_t   zeroed83 (  ) {
    int32_t  temp84;
    int32_t  x479 = (  temp84 );
    ( ( memset ) ( ( (  cast_dash_ptr68 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of60 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int32_t *   zeroed85 (  ) {
    int32_t *  temp86;
    int32_t *  x479 = (  temp86 );
    ( ( memset ) ( ( (  cast_dash_ptr73 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of61 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int32_t   cast_dash_on_dash_zeroed87 (    char  x482 ) {
    int32_t  temp88 = ( (  zeroed83 ) ( ) );
    int32_t *  y483 = ( &temp88 );
    char *  yp484 = ( (  cast62 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  FILE *   null_dash_ptr89 (  ) {
    return ( (  zeroed75 ) ( ) );
}

static  struct Button_29 *   null_dash_ptr90 (  ) {
    return ( (  zeroed79 ) ( ) );
}

static  size_t *   null_dash_ptr91 (  ) {
    return ( (  zeroed81 ) ( ) );
}

static  int32_t *   null_dash_ptr92 (  ) {
    return ( (  zeroed85 ) ( ) );
}

static  bool   is_dash_ptr_dash_null93 (    FILE *  p488 ) {
    return ( (  p488 ) == ( (  null_dash_ptr89 ) ( ) ) );
}

static  int64_t   size_dash_i6494 (    size_t  x502 ) {
    return ( (int64_t ) (  x502 ) );
}

static  int64_t   i32_dash_i6495 (    int32_t  x511 ) {
    return ( (int64_t ) (  x511 ) );
}

static  size_t   i32_dash_size96 (    int32_t  x514 ) {
    return ( (size_t ) ( (int64_t ) (  x514 ) ) );
}

static  int32_t   i64_dash_i3297 (    int64_t  x520 ) {
    return ( (int32_t ) (  x520 ) );
}

static  size_t   i64_dash_size98 (    int64_t  x526 ) {
    return ( (size_t ) (  x526 ) );
}

static  int32_t   size_dash_i3299 (    size_t  x529 ) {
    return ( (int32_t ) (  x529 ) );
}

struct SliceIter_102 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_101 {
    struct SliceIter_102  f_s;
};

static  struct Scanner_101   into_dash_iter103 (    struct Scanner_101  self2399 ) {
    return (  self2399 );
}

static  struct Scanner_101   into_dash_iter100 (    struct Scanner_101 *  self565 ) {
    return ( (  into_dash_iter103 ) ( ( * (  self565 ) ) ) );
}

struct LineIter_106 {
    struct DynStr_23  f_og;
    size_t  f_last;
};

struct env109 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1817;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1816;
    ;
};

enum Unit_110 {
    Unit_110_Unit,
};

enum CAllocator_112 {
    CAllocator_112_CAllocator,
};

struct Slice_113 {
    struct Button_29 *  f_ptr;
    size_t  f_count;
};

struct List_111 {
    enum CAllocator_112  f_al;
    struct Slice_113  f_elements;
    size_t  f_count;
};

struct funenv109 {
    enum Unit_110  (*fun) (  struct env109  ,    struct List_111 *  );
    struct env109 env;
};

struct env108 {
    ;
    struct env109 envinst109;
    ;
    ;
    ;
    ;
};

struct funenv108 {
    enum Unit_110  (*fun) (  struct env108  ,    struct List_111 *  ,    struct Button_29  );
    struct env108 env;
};

struct env115 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1817;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1816;
    ;
};

struct List_116 {
    enum CAllocator_112  f_al;
    struct Slice_30  f_elements;
    size_t  f_count;
};

struct funenv115 {
    enum Unit_110  (*fun) (  struct env115  ,    struct List_116 *  );
    struct env115 env;
};

struct env114 {
    ;
    struct env115 envinst115;
    ;
    ;
    ;
    ;
};

struct funenv114 {
    enum Unit_110  (*fun) (  struct env114  ,    struct List_116 *  ,    size_t  );
    struct env114 env;
};

struct env118 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1817;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1816;
    ;
};

struct Slice_120 {
    int32_t *  f_ptr;
    size_t  f_count;
};

struct List_119 {
    enum CAllocator_112  f_al;
    struct Slice_120  f_elements;
    size_t  f_count;
};

struct funenv118 {
    enum Unit_110  (*fun) (  struct env118  ,    struct List_119 *  );
    struct env118 env;
};

struct env117 {
    ;
    struct env118 envinst118;
    ;
    ;
    ;
    ;
};

struct funenv117 {
    enum Unit_110  (*fun) (  struct env117  ,    struct List_119 *  ,    int32_t  );
    struct env117 env;
};

struct env107 {
    ;
    ;
    ;
    struct env108 envinst108;
    struct env114 envinst114;
    ;
    struct env117 envinst117;
    ;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_112  al2333;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct Machine_121 {
    struct Slice_120  f_target_dash_joltage;
    struct Slice_113  f_buttons;
};

struct funenv107 {
    struct Machine_121  (*fun) (  struct env107  ,    struct DynStr_23  );
    struct env107 env;
};

struct Map_105 {
    struct LineIter_106  field0;
    struct funenv107  field1;
};

static struct Map_105 Map_105_Map (  struct LineIter_106  field0 , struct funenv107  field1 ) {
    return ( struct Map_105 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_105   into_dash_iter104 (    struct Map_105  self576 ) {
    return (  self576 );
}

struct env124 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_112  al2333;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct funenv124 {
    int32_t  (*fun) (  struct env124  ,    struct Machine_121  );
    struct env124 env;
};

struct Map_123 {
    struct Map_105  field0;
    struct funenv124  field1;
};

static struct Map_123 Map_123_Map (  struct Map_105  field0 , struct funenv124  field1 ) {
    return ( struct Map_123 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_123   into_dash_iter122 (    struct Map_123  self576 ) {
    return (  self576 );
}

struct Maybe_126 {
    enum {
        Maybe_126_None_t,
        Maybe_126_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_126_Just_s;
    } stuff;
};

static struct Maybe_126 Maybe_126_Just (  int32_t  field0 ) {
    return ( struct Maybe_126 ) { .tag = Maybe_126_Just_t, .stuff = { .Maybe_126_Just_s = { .field0 = field0 } } };
};

struct Maybe_127 {
    enum {
        Maybe_127_None_t,
        Maybe_127_Just_t,
    } tag;
    union {
        struct {
            struct Machine_121  field0;
        } Maybe_127_Just_s;
    } stuff;
};

static struct Maybe_127 Maybe_127_Just (  struct Machine_121  field0 ) {
    return ( struct Maybe_127 ) { .tag = Maybe_127_Just_t, .stuff = { .Maybe_127_Just_s = { .field0 = field0 } } };
};

struct Maybe_129 {
    enum {
        Maybe_129_None_t,
        Maybe_129_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_23  field0;
        } Maybe_129_Just_s;
    } stuff;
};

static struct Maybe_129 Maybe_129_Just (  struct DynStr_23  field0 ) {
    return ( struct Maybe_129 ) { .tag = Maybe_129_Just_t, .stuff = { .Maybe_129_Just_s = { .field0 = field0 } } };
};

struct StrConcat_136 {
    const char*  field0;
    size_t  field1;
};

static struct StrConcat_136 StrConcat_136_StrConcat (  const char*  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_136 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_135 {
    struct StrConcat_136  field0;
    const char*  field1;
};

static struct StrConcat_135 StrConcat_135_StrConcat (  struct StrConcat_136  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_135 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_134 {
    struct StrConcat_135  field0;
    size_t  field1;
};

static struct StrConcat_134 StrConcat_134_StrConcat (  struct StrConcat_135  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_134 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_133 {
    struct StrConcat_134  field0;
    char  field1;
};

static struct StrConcat_133 StrConcat_133_StrConcat (  struct StrConcat_134  field0 ,  char  field1 ) {
    return ( struct StrConcat_133 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_140 {
    const char*  field0;
    struct StrConcat_133  field1;
};

static struct StrConcat_140 StrConcat_140_StrConcat (  const char*  field0 ,  struct StrConcat_133  field1 ) {
    return ( struct StrConcat_140 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_139 {
    struct StrConcat_140  field0;
    char  field1;
};

static struct StrConcat_139 StrConcat_139_StrConcat (  struct StrConcat_140  field0 ,  char  field1 ) {
    return ( struct StrConcat_139 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_110   print_dash_str142 (    const char*  self1078 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1078 ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str147 (    size_t  self1130 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1130 ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str146 (    struct StrConcat_136  self1169 ) {
    struct StrConcat_136  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str142 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str147 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str145 (    struct StrConcat_135  self1169 ) {
    struct StrConcat_135  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str142 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str144 (    struct StrConcat_134  self1169 ) {
    struct StrConcat_134  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str145 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str147 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str148 (    char  self1084 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1084 ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str143 (    struct StrConcat_133  self1169 ) {
    struct StrConcat_133  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str144 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str141 (    struct StrConcat_140  self1169 ) {
    struct StrConcat_140  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str142 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str143 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str138 (    struct StrConcat_139  self1169 ) {
    struct StrConcat_139  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   panic137 (    struct StrConcat_133  errmsg1346 ) {
    ( (  print_dash_str138 ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_110_Unit );
}

static  char   or_dash_fail132 (    struct Maybe_8  x1359 ,    struct StrConcat_133  errmsg1361 ) {
    struct Maybe_8  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_8_None_t ) {
        ( (  panic137 ) ( (  errmsg1361 ) ) );
        return ( (  undefined34 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_8_Just_t ) {
        return ( dref1362 .stuff .Maybe_8_Just_s .field0 );
    }
}

static  struct Maybe_8   try_dash_get149 (    struct Slice_24  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp10 ( (  i1400 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_8) { .tag = Maybe_8_None_t } );
    }
    char *  elem_dash_ptr1401 = ( (  offset_dash_ptr36 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_8_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  char   get131 (    struct Slice_24  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail132 ) ( ( (  try_dash_get149 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar150 (  ) {
    return ( (  zeroed77 ) ( ) );
}

static  char   newline151 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  size_t   min154 (    size_t  l975 ,    size_t  r977 ) {
    if ( (  cmp10 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  struct Slice_24   subslice153 (    struct Slice_24  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    char *  begin_dash_ptr1422 = ( (  offset_dash_ptr36 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp10 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp10 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub18 ( ( (  min154 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct DynStr_23   substr152 (    struct DynStr_23  s1599 ,    size_t  from1601 ,    size_t  to1603 ) {
    return ( (struct DynStr_23) { .f_contents = ( (  subslice153 ) ( ( (  s1599 ) .f_contents ) ,  (  from1601 ) ,  (  to1603 ) ) ) } );
}

static  struct Maybe_129   next130 (    struct LineIter_106 *  self1736 ) {
    if ( ( (  cmp10 ( ( ( * (  self1736 ) ) .f_last ) , ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq6 ( ( (  get131 ) ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1736 ) ) .f_last ) ) ) , ( (  nullchar150 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_129) { .tag = Maybe_129_None_t } );
    }
    size_t  i1737 = ( ( * (  self1736 ) ) .f_last );
    while ( ( (  cmp10 ( (  i1737 ) , ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq6 ( ( (  get131 ) ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) ,  (  i1737 ) ) ) , ( (  newline151 ) ( ) ) ) ) ) ) {
        i1737 = (  op_dash_add17 ( (  i1737 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    struct DynStr_23  line1738 = ( (  substr152 ) ( ( ( * (  self1736 ) ) .f_og ) ,  ( ( * (  self1736 ) ) .f_last ) ,  (  i1737 ) ) );
    if ( (  cmp10 ( (  i1737 ) , ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1737 = (  op_dash_add17 ( (  i1737 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    (*  self1736 ) .f_last = (  i1737 );
    return ( ( Maybe_129_Just ) ( (  line1738 ) ) );
}

static  struct Maybe_127   next128 (    struct Map_105 *  dref578 ) {
    struct Maybe_129  dref581 = ( (  next130 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_129_None_t ) {
        return ( (struct Maybe_127) { .tag = Maybe_127_None_t } );
    }
    else if ( dref581.tag == Maybe_129_Just_t ) {
        struct funenv107  temp155 = ( (* dref578 ) .field1 );
        return ( ( Maybe_127_Just ) ( ( temp155.fun ( temp155.env ,  ( dref581 .stuff .Maybe_129_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_126   next125 (    struct Map_123 *  dref578 ) {
    struct Maybe_127  dref581 = ( (  next128 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_127_None_t ) {
        return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
    }
    else if ( dref581.tag == Maybe_127_Just_t ) {
        struct funenv124  temp156 = ( (* dref578 ) .field1 );
        return ( ( Maybe_126_Just ) ( ( temp156.fun ( temp156.env ,  ( dref581 .stuff .Maybe_127_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_106   into_dash_iter158 (    struct LineIter_106  self1733 ) {
    return (  self1733 );
}

static  struct Map_105   map157 (    struct LineIter_106  iterable585 ,   struct funenv107  fun587 ) {
    struct LineIter_106  it588 = ( (  into_dash_iter158 ) ( (  iterable585 ) ) );
    return ( ( Map_105_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Map_123   map159 (    struct Map_105  iterable585 ,   struct funenv124  fun587 ) {
    struct Map_105  it588 = ( (  into_dash_iter104 ) ( (  iterable585 ) ) );
    return ( ( Map_123_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

struct SliceIter_162 {
    struct Slice_113  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_161 {
    struct SliceIter_162  field0;
    size_t  field1;
};

static struct Drop_161 Drop_161_Drop (  struct SliceIter_162  field0 ,  size_t  field1 ) {
    return ( struct Drop_161 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_161   into_dash_iter160 (    struct Drop_161  self625 ) {
    return (  self625 );
}

struct Maybe_164 {
    enum {
        Maybe_164_None_t,
        Maybe_164_Just_t,
    } tag;
    union {
        struct {
            struct Button_29  field0;
        } Maybe_164_Just_s;
    } stuff;
};

static struct Maybe_164 Maybe_164_Just (  struct Button_29  field0 ) {
    return ( struct Maybe_164 ) { .tag = Maybe_164_Just_t, .stuff = { .Maybe_164_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_164   next165 (    struct SliceIter_162 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct Button_29  elem1465 = ( * ( (  offset_dash_ptr40 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_164   next163 (    struct Drop_161 *  dref627 ) {
    while ( (  cmp10 ( ( (* dref627 ) .field1 ) , (  from_dash_integral4 ( 0 ) ) ) == 2 ) ) {
        ( (  next165 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub18 ( ( (* dref627 ) .field1 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    return ( (  next165 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

static  struct SliceIter_162   into_dash_iter167 (    struct Slice_113  self1457 ) {
    return ( (struct SliceIter_162) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Drop_161   drop166 (    struct Slice_113  iterable632 ,    size_t  i634 ) {
    struct SliceIter_162  it635 = ( (  into_dash_iter167 ) ( (  iterable632 ) ) );
    return ( ( Drop_161_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

struct Range_169 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_169 Range_169_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_169 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_169   to168 (    int32_t  from654 ,    int32_t  to656 ) {
    return ( ( Range_169_Range ) ( (  from654 ) ,  (  to656 ) ) );
}

struct RangeIter_171 {
    struct Range_169  field0;
    int32_t  field1;
};

static struct RangeIter_171 RangeIter_171_RangeIter (  struct Range_169  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_171 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_171   into_dash_iter170 (    struct Range_169  dref663 ) {
    return ( ( RangeIter_171_RangeIter ) ( ( ( Range_169_Range ) ( ( dref663 .field0 ) ,  ( dref663 .field1 ) ) ) ,  ( dref663 .field0 ) ) );
}

static  struct Maybe_126   next172 (    struct RangeIter_171 *  self671 ) {
    struct RangeIter_171  dref672 = ( * (  self671 ) );
    if ( true ) {
        if ( (  cmp12 ( ( dref672 .field1 ) , ( dref672 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
        }
        struct Maybe_126  x676 = ( ( Maybe_126_Just ) ( ( dref672 .field1 ) ) );
        (*  self671 ) = ( ( RangeIter_171_RangeIter ) ( ( ( Range_169_Range ) ( ( dref672 .field0 .field0 ) ,  ( dref672 .field0 .field1 ) ) ) ,  (  op_dash_add15 ( ( dref672 .field1 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
        return (  x676 );
    }
}

struct FromIter_174 {
    int32_t  f_from;
};

static  struct FromIter_174   from173 (    int32_t  f680 ) {
    return ( (struct FromIter_174) { .f_from = (  f680 ) } );
}

static  struct FromIter_174   into_dash_iter175 (    struct FromIter_174  it683 ) {
    return (  it683 );
}

static  struct Maybe_126   next176 (    struct FromIter_174 *  dref685 ) {
    int32_t  v687 = ( ( (* dref685 ) ) .f_from );
    (* dref685 ) .f_from = (  op_dash_add15 ( ( ( (* dref685 ) ) .f_from ) , (  from_dash_integral3 ( 1 ) ) ) );
    return ( ( Maybe_126_Just ) ( (  v687 ) ) );
}

struct SliceIter_179 {
    struct Slice_30  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_178 {
    struct SliceIter_179  f_left_dash_it;
    struct FromIter_174  f_right_dash_it;
};

static  struct Zip_178   into_dash_iter177 (    struct Zip_178  self691 ) {
    return (  self691 );
}

struct Zip_181 {
    struct SliceIter_162  f_left_dash_it;
    struct FromIter_174  f_right_dash_it;
};

static  struct Zip_181   into_dash_iter180 (    struct Zip_181  self691 ) {
    return (  self691 );
}

struct SliceIter_184 {
    struct Slice_120  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_183 {
    struct SliceIter_184  f_left_dash_it;
    struct FromIter_174  f_right_dash_it;
};

static  struct Zip_183   into_dash_iter182 (    struct Zip_183  self691 ) {
    return (  self691 );
}

struct Zip_186 {
    struct SliceIter_184  f_left_dash_it;
    struct SliceIter_184  f_right_dash_it;
};

static  struct Zip_186   into_dash_iter185 (    struct Zip_186  self691 ) {
    return (  self691 );
}

struct Tuple2_189 {
    size_t  field0;
    int32_t  field1;
};

static struct Tuple2_189 Tuple2_189_Tuple2 (  size_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_189 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_188 {
    enum {
        Maybe_188_None_t,
        Maybe_188_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_189  field0;
        } Maybe_188_Just_s;
    } stuff;
};

static struct Maybe_188 Maybe_188_Just (  struct Tuple2_189  field0 ) {
    return ( struct Maybe_188 ) { .tag = Maybe_188_Just_t, .stuff = { .Maybe_188_Just_s = { .field0 = field0 } } };
};

struct Maybe_190 {
    enum {
        Maybe_190_None_t,
        Maybe_190_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_190_Just_s;
    } stuff;
};

static struct Maybe_190 Maybe_190_Just (  size_t  field0 ) {
    return ( struct Maybe_190 ) { .tag = Maybe_190_Just_t, .stuff = { .Maybe_190_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_190   next191 (    struct SliceIter_179 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_190) { .tag = Maybe_190_None_t } );
    }
    size_t  elem1465 = ( * ( (  offset_dash_ptr38 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_190_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_188   next187 (    struct Zip_178 *  self694 ) {
    struct Zip_178  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_190  dref696 = ( (  next191 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_190_None_t ) {
            return ( (struct Maybe_188) { .tag = Maybe_188_None_t } );
        }
        else if ( dref696.tag == Maybe_190_Just_t ) {
            struct Maybe_126  dref698 = ( (  next176 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_126_None_t ) {
                return ( (struct Maybe_188) { .tag = Maybe_188_None_t } );
            }
            else if ( dref698.tag == Maybe_126_Just_t ) {
                ( (  next191 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next176 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_188_Just ) ( ( ( Tuple2_189_Tuple2 ) ( ( dref696 .stuff .Maybe_190_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_126_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_194 {
    struct Button_29  field0;
    int32_t  field1;
};

static struct Tuple2_194 Tuple2_194_Tuple2 (  struct Button_29  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_194 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_193 {
    enum {
        Maybe_193_None_t,
        Maybe_193_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_194  field0;
        } Maybe_193_Just_s;
    } stuff;
};

static struct Maybe_193 Maybe_193_Just (  struct Tuple2_194  field0 ) {
    return ( struct Maybe_193 ) { .tag = Maybe_193_Just_t, .stuff = { .Maybe_193_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_193   next192 (    struct Zip_181 *  self694 ) {
    struct Zip_181  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_164  dref696 = ( (  next165 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_164_None_t ) {
            return ( (struct Maybe_193) { .tag = Maybe_193_None_t } );
        }
        else if ( dref696.tag == Maybe_164_Just_t ) {
            struct Maybe_126  dref698 = ( (  next176 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_126_None_t ) {
                return ( (struct Maybe_193) { .tag = Maybe_193_None_t } );
            }
            else if ( dref698.tag == Maybe_126_Just_t ) {
                ( (  next165 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next176 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_193_Just ) ( ( ( Tuple2_194_Tuple2 ) ( ( dref696 .stuff .Maybe_164_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_126_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_197 {
    int32_t  field0;
    int32_t  field1;
};

static struct Tuple2_197 Tuple2_197_Tuple2 (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_197 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_196 {
    enum {
        Maybe_196_None_t,
        Maybe_196_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_197  field0;
        } Maybe_196_Just_s;
    } stuff;
};

static struct Maybe_196 Maybe_196_Just (  struct Tuple2_197  field0 ) {
    return ( struct Maybe_196 ) { .tag = Maybe_196_Just_t, .stuff = { .Maybe_196_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_126   next198 (    struct SliceIter_184 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
    }
    int32_t  elem1465 = ( * ( (  offset_dash_ptr42 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_126_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_196   next195 (    struct Zip_183 *  self694 ) {
    struct Zip_183  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_126  dref696 = ( (  next198 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_126_None_t ) {
            return ( (struct Maybe_196) { .tag = Maybe_196_None_t } );
        }
        else if ( dref696.tag == Maybe_126_Just_t ) {
            struct Maybe_126  dref698 = ( (  next176 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_126_None_t ) {
                return ( (struct Maybe_196) { .tag = Maybe_196_None_t } );
            }
            else if ( dref698.tag == Maybe_126_Just_t ) {
                ( (  next198 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next176 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_196_Just ) ( ( ( Tuple2_197_Tuple2 ) ( ( dref696 .stuff .Maybe_126_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_126_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_196   next199 (    struct Zip_186 *  self694 ) {
    struct Zip_186  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_126  dref696 = ( (  next198 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_126_None_t ) {
            return ( (struct Maybe_196) { .tag = Maybe_196_None_t } );
        }
        else if ( dref696.tag == Maybe_126_Just_t ) {
            struct Maybe_126  dref698 = ( (  next198 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_126_None_t ) {
                return ( (struct Maybe_196) { .tag = Maybe_196_None_t } );
            }
            else if ( dref698.tag == Maybe_126_Just_t ) {
                ( (  next198 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next198 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_196_Just ) ( ( ( Tuple2_197_Tuple2 ) ( ( dref696 .stuff .Maybe_126_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_126_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct SliceIter_179   into_dash_iter201 (    struct Slice_30  self1457 ) {
    return ( (struct SliceIter_179) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Zip_178   zip200 (    struct Slice_30  left702 ,    struct FromIter_174  right704 ) {
    struct SliceIter_179  left_dash_it705 = ( (  into_dash_iter201 ) ( (  left702 ) ) );
    struct FromIter_174  right_dash_it706 = ( (  into_dash_iter175 ) ( (  right704 ) ) );
    return ( (struct Zip_178) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_181   zip202 (    struct Slice_113  left702 ,    struct FromIter_174  right704 ) {
    struct SliceIter_162  left_dash_it705 = ( (  into_dash_iter167 ) ( (  left702 ) ) );
    struct FromIter_174  right_dash_it706 = ( (  into_dash_iter175 ) ( (  right704 ) ) );
    return ( (struct Zip_181) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct SliceIter_184   into_dash_iter204 (    struct Slice_120  self1457 ) {
    return ( (struct SliceIter_184) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Zip_183   zip203 (    struct Slice_120  left702 ,    struct FromIter_174  right704 ) {
    struct SliceIter_184  left_dash_it705 = ( (  into_dash_iter204 ) ( (  left702 ) ) );
    struct FromIter_174  right_dash_it706 = ( (  into_dash_iter175 ) ( (  right704 ) ) );
    return ( (struct Zip_183) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_186   zip205 (    struct Slice_120  left702 ,    struct Slice_120  right704 ) {
    struct SliceIter_184  left_dash_it705 = ( (  into_dash_iter204 ) ( (  left702 ) ) );
    struct SliceIter_184  right_dash_it706 = ( (  into_dash_iter204 ) ( (  right704 ) ) );
    return ( (struct Zip_186) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

struct TakeWhile_207 {
    struct Scanner_101  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_207   into_dash_iter206 (    struct TakeWhile_207  self741 ) {
    return (  self741 );
}

static  struct Maybe_8   next210 (    struct SliceIter_102 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp10 ( (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_8) { .tag = Maybe_8_None_t } );
    }
    char  elem1465 = ( * ( (  offset_dash_ptr36 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add17 ( (  off1464 ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( ( Maybe_8_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_8   next209 (    struct Scanner_101 *  self2396 ) {
    return ( (  next210 ) ( ( & ( ( * (  self2396 ) ) .f_s ) ) ) );
}

static  struct Maybe_8   next208 (    struct TakeWhile_207 *  self744 ) {
    struct Maybe_8  mx745 = ( (  next209 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_8  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_8_None_t ) {
        return ( (struct Maybe_8) { .tag = Maybe_8_None_t } );
    }
    else if ( dref746.tag == Maybe_8_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_8_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_8_Just ) ( ( dref746 .stuff .Maybe_8_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_8) { .tag = Maybe_8_None_t } );
        }
    }
}

static  struct TakeWhile_207   take_dash_while211 (    struct Scanner_101 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_207) { .f_it = ( (  into_dash_iter100 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

struct env213 {
    struct Scanner_101 *  it925;
    ;
};

struct funenv213 {
    struct Maybe_8  (*fun) (  struct env213  ,    int32_t  );
    struct env213 env;
};

static  enum Unit_110   for_dash_each212 (    struct Range_169  iterable819 ,   struct funenv213  fun821 ) {
    struct RangeIter_171  temp214 = ( (  into_dash_iter170 ) ( (  iterable819 ) ) );
    struct RangeIter_171 *  it822 = ( &temp214 );
    while ( ( true ) ) {
        struct Maybe_126  dref823 = ( (  next172 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_126_None_t ) {
            return ( Unit_110_Unit );
        }
        else if ( dref823.tag == Maybe_126_Just_t ) {
            struct funenv213  temp215 = (  fun821 );
            ( temp215.fun ( temp215.env ,  ( dref823 .stuff .Maybe_126_Just_s .field0 ) ) );
        }
    }
    return ( Unit_110_Unit );
}

struct env217 {
    ;
    ;
    struct Slice_30  new_dash_slice1822;
};

struct funenv217 {
    enum Unit_110  (*fun) (  struct env217  ,    struct Tuple2_189  );
    struct env217 env;
};

static  enum Unit_110   for_dash_each216 (    struct Zip_178  iterable819 ,   struct funenv217  fun821 ) {
    struct Zip_178  temp218 = ( (  into_dash_iter177 ) ( (  iterable819 ) ) );
    struct Zip_178 *  it822 = ( &temp218 );
    while ( ( true ) ) {
        struct Maybe_188  dref823 = ( (  next187 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_188_None_t ) {
            return ( Unit_110_Unit );
        }
        else if ( dref823.tag == Maybe_188_Just_t ) {
            struct funenv217  temp219 = (  fun821 );
            ( temp219.fun ( temp219.env ,  ( dref823 .stuff .Maybe_188_Just_s .field0 ) ) );
        }
    }
    return ( Unit_110_Unit );
}

struct env221 {
    ;
    ;
    struct Slice_113  new_dash_slice1822;
};

struct funenv221 {
    enum Unit_110  (*fun) (  struct env221  ,    struct Tuple2_194  );
    struct env221 env;
};

static  enum Unit_110   for_dash_each220 (    struct Zip_181  iterable819 ,   struct funenv221  fun821 ) {
    struct Zip_181  temp222 = ( (  into_dash_iter180 ) ( (  iterable819 ) ) );
    struct Zip_181 *  it822 = ( &temp222 );
    while ( ( true ) ) {
        struct Maybe_193  dref823 = ( (  next192 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_193_None_t ) {
            return ( Unit_110_Unit );
        }
        else if ( dref823.tag == Maybe_193_Just_t ) {
            struct funenv221  temp223 = (  fun821 );
            ( temp223.fun ( temp223.env ,  ( dref823 .stuff .Maybe_193_Just_s .field0 ) ) );
        }
    }
    return ( Unit_110_Unit );
}

struct env225 {
    ;
    ;
    struct Slice_120  new_dash_slice1822;
};

struct funenv225 {
    enum Unit_110  (*fun) (  struct env225  ,    struct Tuple2_197  );
    struct env225 env;
};

static  enum Unit_110   for_dash_each224 (    struct Zip_183  iterable819 ,   struct funenv225  fun821 ) {
    struct Zip_183  temp226 = ( (  into_dash_iter182 ) ( (  iterable819 ) ) );
    struct Zip_183 *  it822 = ( &temp226 );
    while ( ( true ) ) {
        struct Maybe_196  dref823 = ( (  next195 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_196_None_t ) {
            return ( Unit_110_Unit );
        }
        else if ( dref823.tag == Maybe_196_Just_t ) {
            struct funenv225  temp227 = (  fun821 );
            ( temp227.fun ( temp227.env ,  ( dref823 .stuff .Maybe_196_Just_s .field0 ) ) );
        }
    }
    return ( Unit_110_Unit );
}

struct env230 {
    int32_t  x1575;
};

struct funenv230 {
    int32_t  (*fun) (  struct env230  ,    int32_t  );
    struct env230 env;
};

struct env229 {
    ;
    struct Slice_120  s1529;
    struct funenv230  fun1531;
    ;
    ;
};

struct funenv229 {
    enum Unit_110  (*fun) (  struct env229  ,    int32_t  );
    struct env229 env;
};

static  enum Unit_110   for_dash_each228 (    struct Range_169  iterable819 ,   struct funenv229  fun821 ) {
    struct RangeIter_171  temp231 = ( (  into_dash_iter170 ) ( (  iterable819 ) ) );
    struct RangeIter_171 *  it822 = ( &temp231 );
    while ( ( true ) ) {
        struct Maybe_126  dref823 = ( (  next172 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_126_None_t ) {
            return ( Unit_110_Unit );
        }
        else if ( dref823.tag == Maybe_126_Just_t ) {
            struct funenv229  temp232 = (  fun821 );
            ( temp232.fun ( temp232.env ,  ( dref823 .stuff .Maybe_126_Just_s .field0 ) ) );
        }
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   for_dash_each233 (    struct Map_123  iterable819 ,    enum Unit_110 (*  fun821 )(    int32_t  ) ) {
    struct Map_123  temp234 = ( (  into_dash_iter122 ) ( (  iterable819 ) ) );
    struct Map_123 *  it822 = ( &temp234 );
    while ( ( true ) ) {
        struct Maybe_126  dref823 = ( (  next125 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_126_None_t ) {
            return ( Unit_110_Unit );
        }
        else if ( dref823.tag == Maybe_126_Just_t ) {
            ( (  fun821 ) ( ( dref823 .stuff .Maybe_126_Just_s .field0 ) ) );
        }
    }
    return ( Unit_110_Unit );
}

struct Maybe_236 {
    enum {
        Maybe_236_None_t,
        Maybe_236_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_236_Just_s;
    } stuff;
};

static struct Maybe_236 Maybe_236_Just (  int64_t  field0 ) {
    return ( struct Maybe_236 ) { .tag = Maybe_236_Just_t, .stuff = { .Maybe_236_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_236   reduce235 (    struct TakeWhile_207  iterable838 ,    struct Maybe_236  base840 ,    struct Maybe_236 (*  fun842 )(    char  ,    struct Maybe_236  ) ) {
    struct Maybe_236  x843 = (  base840 );
    struct TakeWhile_207  it844 = ( (  into_dash_iter206 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_8  dref845 = ( (  next208 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_8_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_8_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_8_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_236  temp237;
    return (  temp237 );
}

static  size_t   reduce238 (    struct TakeWhile_207  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_207  it844 = ( (  into_dash_iter206 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_8  dref845 = ( (  next208 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_8_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_8_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_8_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp239;
    return (  temp239 );
}

static  size_t   lam241 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add17 ( (  x852 ) , (  from_dash_integral4 ( 1 ) ) ) );
}

static  size_t   count240 (    struct TakeWhile_207  it849 ) {
    return ( (  reduce238 ) ( (  it849 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  lam241 ) ) );
}

static  struct SliceIter_102   into_dash_iter244 (    struct SliceIter_102  self1460 ) {
    return (  self1460 );
}

static  struct Maybe_8   head242 (    struct SliceIter_102  it887 ) {
    struct SliceIter_102  temp243 = ( (  into_dash_iter244 ) ( (  it887 ) ) );
    return ( (  next210 ) ( ( &temp243 ) ) );
}

static  struct Maybe_8   head245 (    struct TakeWhile_207  it887 ) {
    struct TakeWhile_207  temp246 = ( (  into_dash_iter206 ) ( (  it887 ) ) );
    return ( (  next208 ) ( ( &temp246 ) ) );
}

static  bool   null247 (    struct TakeWhile_207  it890 ) {
    struct Maybe_8  dref891 = ( (  head245 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_8_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_8   lam213 (   struct env213 env ,    int32_t  dref928 ) {
    return ( (  next209 ) ( ( env.it925 ) ) );
}

static  enum Unit_110   drop_prime_248 (    struct Scanner_101 *  it925 ,    size_t  n927 ) {
    struct env213 envinst213 = {
        .it925 =  it925 ,
    };
    ( (  for_dash_each212 ) ( ( (  to168 ) ( (  from_dash_integral3 ( 1 ) ) ,  ( (  size_dash_i3299 ) ( (  n927 ) ) ) ) ) ,  ( (struct funenv213){ .fun = lam213, .env = envinst213 } ) ) );
    return ( Unit_110_Unit );
}

static  int32_t   min249 (    int32_t  l975 ,    int32_t  r977 ) {
    if ( (  cmp12 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  enum Unit_110   print_dash_str250 (    int32_t  self1106 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1106 ) ) );
    return ( Unit_110_Unit );
}

struct StrConcat_253 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_253 StrConcat_253_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_253 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_252 {
    struct StrConcat_253  field0;
    char  field1;
};

static struct StrConcat_252 StrConcat_252_StrConcat (  struct StrConcat_253  field0 ,  char  field1 ) {
    return ( struct StrConcat_252 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_110   print_dash_str254 (    struct StrConcat_253  self1169 ) {
    struct StrConcat_253  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str142 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str142 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str251 (    struct StrConcat_252  self1169 ) {
    struct StrConcat_252  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str254 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

struct StrConcat_257 {
    const char*  field0;
    struct StrConcat_252  field1;
};

static struct StrConcat_257 StrConcat_257_StrConcat (  const char*  field0 ,  struct StrConcat_252  field1 ) {
    return ( struct StrConcat_257 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_256 {
    struct StrConcat_257  field0;
    char  field1;
};

static struct StrConcat_256 StrConcat_256_StrConcat (  struct StrConcat_257  field0 ,  char  field1 ) {
    return ( struct StrConcat_256 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_110   print_dash_str258 (    struct StrConcat_257  self1169 ) {
    struct StrConcat_257  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str142 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str251 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   print_dash_str255 (    struct StrConcat_256  self1169 ) {
    struct StrConcat_256  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str258 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

struct StrConcat_260 {
    int32_t  field0;
    char  field1;
};

static struct StrConcat_260 StrConcat_260_StrConcat (  int32_t  field0 ,  char  field1 ) {
    return ( struct StrConcat_260 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_110   print_dash_str259 (    struct StrConcat_260  self1169 ) {
    struct StrConcat_260  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str250 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_110_Unit );
}

static  struct TakeWhile_207   chars261 (    struct TakeWhile_207  self1285 ) {
    return (  self1285 );
}

static  int32_t   char_dash_i32262 (    char  c1312 ) {
    return ( (  cast_dash_on_dash_zeroed87 ) ( (  c1312 ) ) );
}

static  enum Unit_110   panic263 (    struct StrConcat_252  errmsg1346 ) {
    ( (  print_dash_str255 ) ( ( ( StrConcat_256_StrConcat ) ( ( ( StrConcat_257_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   panic264 (    const char*  errmsg1346 ) {
    ( (  print_dash_str251 ) ( ( ( StrConcat_252_StrConcat ) ( ( ( StrConcat_253_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   assert265 (    bool  cond1352 ,    const char*  msg1354 ) {
    if ( ( ! (  cond1352 ) ) ) {
        ( (  print_dash_str251 ) ( ( ( StrConcat_252_StrConcat ) ( ( ( StrConcat_253_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1354 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    }
    return ( Unit_110_Unit );
}

static  struct DynStr_23   or_dash_fail266 (    struct Maybe_129  x1359 ,    struct StrConcat_252  errmsg1361 ) {
    struct Maybe_129  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_129_None_t ) {
        ( (  panic263 ) ( (  errmsg1361 ) ) );
        return ( (  undefined22 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_129_Just_t ) {
        return ( dref1362 .stuff .Maybe_129_Just_s .field0 );
    }
}

static  int64_t   or_dash_fail267 (    struct Maybe_236  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_236  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_236_None_t ) {
        ( (  panic264 ) ( (  errmsg1361 ) ) );
        return ( (  undefined26 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_236_Just_t ) {
        return ( dref1362 .stuff .Maybe_236_Just_s .field0 );
    }
}

static  struct Button_29   or_dash_fail268 (    struct Maybe_164  x1359 ,    struct StrConcat_133  errmsg1361 ) {
    struct Maybe_164  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_164_None_t ) {
        ( (  panic137 ) ( (  errmsg1361 ) ) );
        return ( (  undefined28 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_164_Just_t ) {
        return ( dref1362 .stuff .Maybe_164_Just_s .field0 );
    }
}

static  int32_t   or_dash_fail269 (    struct Maybe_126  x1359 ,    struct StrConcat_133  errmsg1361 ) {
    struct Maybe_126  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_126_None_t ) {
        ( (  panic137 ) ( (  errmsg1361 ) ) );
        return ( (  undefined32 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_126_Just_t ) {
        return ( dref1362 .stuff .Maybe_126_Just_s .field0 );
    }
}

static  int32_t   or_dash_fail270 (    struct Maybe_126  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_126  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_126_None_t ) {
        ( (  panic264 ) ( (  errmsg1361 ) ) );
        return ( (  undefined32 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_126_Just_t ) {
        return ( dref1362 .stuff .Maybe_126_Just_s .field0 );
    }
}

static  struct Slice_113   empty271 (  ) {
    return ( (struct Slice_113) { .f_ptr = ( (  null_dash_ptr90 ) ( ) ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Slice_30   empty272 (  ) {
    return ( (struct Slice_30) { .f_ptr = ( (  null_dash_ptr91 ) ( ) ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct Slice_120   empty273 (  ) {
    return ( (struct Slice_120) { .f_ptr = ( (  null_dash_ptr92 ) ( ) ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  char *   get_dash_ptr274 (    struct Slice_24  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp10 ( (  i1394 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic137 ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1395 = ( (  offset_dash_ptr36 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  size_t *   get_dash_ptr275 (    struct Slice_30  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp10 ( (  i1394 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic137 ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    size_t *  elem_dash_ptr1395 = ( (  offset_dash_ptr38 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Button_29 *   get_dash_ptr276 (    struct Slice_113  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp10 ( (  i1394 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic137 ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Button_29 *  elem_dash_ptr1395 = ( (  offset_dash_ptr40 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  int32_t *   get_dash_ptr277 (    struct Slice_120  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp10 ( (  i1394 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic137 ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    int32_t *  elem_dash_ptr1395 = ( (  offset_dash_ptr42 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Maybe_164   try_dash_get278 (    struct Slice_113  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp10 ( (  i1400 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    struct Button_29 *  elem_dash_ptr1401 = ( (  offset_dash_ptr40 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_164_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  struct Maybe_126   try_dash_get279 (    struct Slice_120  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp10 ( (  i1400 ) , (  from_dash_integral4 ( 0 ) ) ) == 0 ) || (  cmp10 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
    }
    int32_t *  elem_dash_ptr1401 = ( (  offset_dash_ptr42 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_126_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  struct Button_29   get280 (    struct Slice_113  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail268 ) ( ( (  try_dash_get278 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  int32_t   get281 (    struct Slice_120  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail269 ) ( ( (  try_dash_get279 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_110   set282 (    struct Slice_24  slice1409 ,    size_t  i1411 ,    char  x1413 ) {
    char *  ep1414 = ( (  get_dash_ptr274 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_110_Unit );
}

static  enum Unit_110   set283 (    struct Slice_30  slice1409 ,    size_t  i1411 ,    size_t  x1413 ) {
    size_t *  ep1414 = ( (  get_dash_ptr275 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_110_Unit );
}

static  enum Unit_110   set284 (    struct Slice_113  slice1409 ,    size_t  i1411 ,    struct Button_29  x1413 ) {
    struct Button_29 *  ep1414 = ( (  get_dash_ptr276 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_110_Unit );
}

static  enum Unit_110   set285 (    struct Slice_120  slice1409 ,    size_t  i1411 ,    int32_t  x1413 ) {
    int32_t *  ep1414 = ( (  get_dash_ptr277 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_110_Unit );
}

static  struct Slice_113   subslice286 (    struct Slice_113  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    struct Button_29 *  begin_dash_ptr1422 = ( (  offset_dash_ptr40 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6494 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp10 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp10 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_113) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub18 ( ( (  min154 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_113) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  enum Unit_110   swap287 (    struct Slice_113  s1435 ,    size_t  l1437 ,    size_t  r1439 ) {
    struct Button_29  x1440 = ( (  get280 ) ( (  s1435 ) ,  (  l1437 ) ) );
    ( (  set284 ) ( (  s1435 ) ,  (  l1437 ) ,  ( (  get280 ) ( (  s1435 ) ,  (  r1439 ) ) ) ) );
    ( (  set284 ) ( (  s1435 ) ,  (  r1439 ) ,  (  x1440 ) ) );
    return ( Unit_110_Unit );
}

static  enum Ordering_11   cmp289 (    struct Button_29  dref2323 ,    struct Button_29  dref2325 ) {
    return ( (  cmp10 ) ( ( ( dref2325 .field0 ) .f_count ) ,  ( ( dref2323 .field0 ) .f_count ) ) );
}

static  enum Unit_110   sort288 (    struct Slice_113  slice1449 ) {
    if ( (  cmp10 ( ( (  slice1449 ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) != 2 ) ) {
        return ( Unit_110_Unit );
    }
    struct Button_29  pivot1450 = ( (  get280 ) ( (  slice1449 ) ,  (  from_dash_integral4 ( 0 ) ) ) );
    size_t  l1451 = (  from_dash_integral4 ( 0 ) );
    size_t  r1452 = (  op_dash_sub18 ( ( (  slice1449 ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    while ( ( true ) ) {
        while ( (  cmp289 ( ( (  get280 ) ( (  slice1449 ) ,  (  l1451 ) ) ) , (  pivot1450 ) ) == 0 ) ) {
            l1451 = (  op_dash_add17 ( (  l1451 ) , (  from_dash_integral4 ( 1 ) ) ) );
        }
        while ( (  cmp289 ( ( (  get280 ) ( (  slice1449 ) ,  (  r1452 ) ) ) , (  pivot1450 ) ) == 2 ) ) {
            r1452 = (  op_dash_sub18 ( (  r1452 ) , (  from_dash_integral4 ( 1 ) ) ) );
        }
        if ( (  cmp10 ( (  l1451 ) , (  r1452 ) ) != 0 ) ) {
            break;
        }
        ( (  swap287 ) ( (  slice1449 ) ,  (  l1451 ) ,  (  r1452 ) ) );
        l1451 = (  op_dash_add17 ( (  l1451 ) , (  from_dash_integral4 ( 1 ) ) ) );
        r1452 = (  op_dash_sub18 ( (  r1452 ) , (  from_dash_integral4 ( 1 ) ) ) );
    }
    size_t  p1453 = (  r1452 );
    ( (  sort288 ) ( ( (  subslice286 ) ( (  slice1449 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  op_dash_add17 ( (  p1453 ) , (  from_dash_integral4 ( 1 ) ) ) ) ) ) ) );
    ( (  sort288 ) ( ( (  subslice286 ) ( (  slice1449 ) ,  (  op_dash_add17 ( (  p1453 ) , (  from_dash_integral4 ( 1 ) ) ) ) ,  ( (  slice1449 ) .f_count ) ) ) ) );
    return ( Unit_110_Unit );
}

static  struct SliceIter_102   into_dash_iter290 (    struct Slice_24  self1457 ) {
    return ( (struct SliceIter_102) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral4 ( 0 ) ) } );
}

static  int32_t   elem_dash_get291 (    struct Slice_120  self1502 ,    size_t  idx1504 ) {
    return ( (  get281 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  enum Unit_110   lam229 (   struct env229 env ,    int32_t  i1533 ) {
    struct funenv230  temp293 = ( env.fun1531 );
    return ( (  set285 ) ( ( env.s1529 ) ,  ( (  i32_dash_size96 ) ( (  i1533 ) ) ) ,  ( temp293.fun ( temp293.env ,  (  elem_dash_get291 ( ( env.s1529 ) , ( (  i32_dash_size96 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_110   map292 (    struct Slice_120  s1529 ,   struct funenv230  fun1531 ) {
    struct env229 envinst229 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each228 ) ( ( (  to168 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i3299 ) ( (  op_dash_sub18 ( ( (  s1529 ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv229){ .fun = lam229, .env = envinst229 } ) ) );
    return ( Unit_110_Unit );
}

static  enum CAllocator_112   idc294 (  ) {
    return ( CAllocator_112_CAllocator );
}

static  struct Slice_24   allocate295 (    enum CAllocator_112  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize44 ) ( ) ) ) .f_size );
    char *  ptr1564 = ( (  cast_dash_ptr63 ) ( ( ( malloc ) ( (  op_dash_mul19 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_30   allocate296 (    enum CAllocator_112  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize47 ) ( ) ) ) .f_size );
    size_t *  ptr1564 = ( (  cast_dash_ptr70 ) ( ( ( malloc ) ( (  op_dash_mul19 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_30) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_113   allocate297 (    enum CAllocator_112  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize50 ) ( ) ) ) .f_size );
    struct Button_29 *  ptr1564 = ( (  cast_dash_ptr72 ) ( ( ( malloc ) ( (  op_dash_mul19 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_113) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_120   allocate298 (    enum CAllocator_112  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize53 ) ( ) ) ) .f_size );
    int32_t *  ptr1564 = ( (  cast_dash_ptr74 ) ( ( ( malloc ) ( (  op_dash_mul19 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_120) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  enum Unit_110   free299 (    enum CAllocator_112  dref1566 ,    struct Slice_30  slice1568 ) {
    if (!(  dref1566 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr69 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   free300 (    enum CAllocator_112  dref1566 ,    struct Slice_113  slice1568 ) {
    if (!(  dref1566 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr71 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   free301 (    enum CAllocator_112  dref1566 ,    struct Slice_120  slice1568 ) {
    if (!(  dref1566 == CAllocator_112_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr68 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_110_Unit );
}

static  int32_t   lam230 (   struct env230 env ,    int32_t  dref1577 ) {
    return ( env.x1575 );
}

static  struct Slice_120   default302 (    enum CAllocator_112  al1571 ,    size_t  count1573 ,    int32_t  x1575 ) {
    struct Slice_120  s1576 = ( (  allocate298 ) ( (  al1571 ) ,  (  count1573 ) ) );
    struct env230 envinst230 = {
        .x1575 =  x1575 ,
    };
    ( (  map292 ) ( (  s1576 ) ,  ( (struct funenv230){ .fun = lam230, .env = envinst230 } ) ) );
    return (  s1576 );
}

static  struct SliceIter_102   chars303 (    struct DynStr_23  self1593 ) {
    return ( (  into_dash_iter290 ) ( ( (  self1593 ) .f_contents ) ) );
}

static  struct LineIter_106   lines304 (    struct DynStr_23  s1730 ) {
    return ( (struct LineIter_106) { .f_og = (  s1730 ) , .f_last = (  from_dash_integral4 ( 0 ) ) } );
}

static  bool   is_dash_digit305 (    char  c1759 ) {
    return ( (  cmp12 ( ( (  char_dash_i32262 ) ( (  c1759 ) ) ) , ( (  char_dash_i32262 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp12 ( ( (  char_dash_i32262 ) ( (  c1759 ) ) ) , ( (  char_dash_i32262 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_126   parse_dash_digit306 (    char  c1762 ) {
    if ( ( (  is_dash_digit305 ) ( (  c1762 ) ) ) ) {
        return ( ( Maybe_126_Just ) ( (  op_dash_sub16 ( ( (  char_dash_i32262 ) ( (  c1762 ) ) ) , ( (  char_dash_i32262 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
    }
}

static  struct Maybe_236   sequence_dash_maybe308 (    char  e1768 ,    struct Maybe_236  b1770 ) {
    struct Maybe_236  dref1771 = (  b1770 );
    if ( dref1771.tag == Maybe_236_None_t ) {
        return ( (struct Maybe_236) { .tag = Maybe_236_None_t } );
    }
    else if ( dref1771.tag == Maybe_236_Just_t ) {
        struct Maybe_126  dref1773 = ( (  parse_dash_digit306 ) ( (  e1768 ) ) );
        if ( dref1773.tag == Maybe_126_None_t ) {
            return ( (struct Maybe_236) { .tag = Maybe_236_None_t } );
        }
        else if ( dref1773.tag == Maybe_126_Just_t ) {
            return ( ( Maybe_236_Just ) ( (  op_dash_add13 ( (  op_dash_mul14 ( ( dref1771 .stuff .Maybe_236_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i6495 ) ( ( dref1773 .stuff .Maybe_126_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_236   parse_dash_int307 (    struct TakeWhile_207  s1765 ) {
    struct TakeWhile_207  cs1775 = ( (  chars261 ) ( (  s1765 ) ) );
    struct Maybe_8  dref1776 = ( (  head245 ) ( (  cs1775 ) ) );
    if ( dref1776.tag == Maybe_8_Just_t ) {
        return ( (  reduce235 ) ( (  cs1775 ) ,  ( ( Maybe_236_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe308 ) ) );
    }
    else if ( dref1776.tag == Maybe_8_None_t ) {
        return ( (struct Maybe_236) { .tag = Maybe_236_None_t } );
    }
}

static  struct List_111   mk309 (    enum CAllocator_112  al1811 ) {
    struct Slice_113  elements1812 = ( (  empty271 ) ( ) );
    return ( (struct List_111) { .f_al = (  al1811 ) , .f_elements = (  elements1812 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct List_116   mk310 (    enum CAllocator_112  al1811 ) {
    struct Slice_30  elements1812 = ( (  empty272 ) ( ) );
    return ( (struct List_116) { .f_al = (  al1811 ) , .f_elements = (  elements1812 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  struct List_119   mk311 (    enum CAllocator_112  al1811 ) {
    struct Slice_120  elements1812 = ( (  empty273 ) ( ) );
    return ( (struct List_119) { .f_al = (  al1811 ) , .f_elements = (  elements1812 ) , .f_count = (  from_dash_integral4 ( 0 ) ) } );
}

static  enum Unit_110   lam217 (   struct env217 env ,    struct Tuple2_189  dref1823 ) {
    return ( (  set283 ) ( ( env.new_dash_slice1822 ) ,  ( (  i32_dash_size96 ) ( ( dref1823 .field1 ) ) ) ,  ( dref1823 .field0 ) ) );
}

static  enum Unit_110   grow_dash_if_dash_full115 (   struct env115 env ,    struct List_116 *  list1821 ) {
    if ( (  eq5 ( ( ( * (  list1821 ) ) .f_count ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        (*  list1821 ) .f_elements = ( (  allocate296 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( env.starting_dash_size1816 ) ) );
    } else {
        if ( (  eq5 ( ( ( * (  list1821 ) ) .f_count ) , ( ( ( * (  list1821 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_30  new_dash_slice1822 = ( (  allocate296 ) ( ( ( * (  list1821 ) ) .f_al ) ,  (  op_dash_mul19 ( ( ( * (  list1821 ) ) .f_count ) , ( env.growth_dash_factor1817 ) ) ) ) );
            struct env217 envinst217 = {
                .new_dash_slice1822 =  new_dash_slice1822 ,
            };
            ( (  for_dash_each216 ) ( ( (  zip200 ) ( ( ( * (  list1821 ) ) .f_elements ) ,  ( (  from173 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv217){ .fun = lam217, .env = envinst217 } ) ) );
            ( (  free299 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( ( * (  list1821 ) ) .f_elements ) ) );
            (*  list1821 ) .f_elements = (  new_dash_slice1822 );
        }
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   lam221 (   struct env221 env ,    struct Tuple2_194  dref1823 ) {
    return ( (  set284 ) ( ( env.new_dash_slice1822 ) ,  ( (  i32_dash_size96 ) ( ( dref1823 .field1 ) ) ) ,  ( dref1823 .field0 ) ) );
}

static  enum Unit_110   grow_dash_if_dash_full109 (   struct env109 env ,    struct List_111 *  list1821 ) {
    if ( (  eq5 ( ( ( * (  list1821 ) ) .f_count ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        (*  list1821 ) .f_elements = ( (  allocate297 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( env.starting_dash_size1816 ) ) );
    } else {
        if ( (  eq5 ( ( ( * (  list1821 ) ) .f_count ) , ( ( ( * (  list1821 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_113  new_dash_slice1822 = ( (  allocate297 ) ( ( ( * (  list1821 ) ) .f_al ) ,  (  op_dash_mul19 ( ( ( * (  list1821 ) ) .f_count ) , ( env.growth_dash_factor1817 ) ) ) ) );
            struct env221 envinst221 = {
                .new_dash_slice1822 =  new_dash_slice1822 ,
            };
            ( (  for_dash_each220 ) ( ( (  zip202 ) ( ( ( * (  list1821 ) ) .f_elements ) ,  ( (  from173 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv221){ .fun = lam221, .env = envinst221 } ) ) );
            ( (  free300 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( ( * (  list1821 ) ) .f_elements ) ) );
            (*  list1821 ) .f_elements = (  new_dash_slice1822 );
        }
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   lam225 (   struct env225 env ,    struct Tuple2_197  dref1823 ) {
    return ( (  set285 ) ( ( env.new_dash_slice1822 ) ,  ( (  i32_dash_size96 ) ( ( dref1823 .field1 ) ) ) ,  ( dref1823 .field0 ) ) );
}

static  enum Unit_110   grow_dash_if_dash_full118 (   struct env118 env ,    struct List_119 *  list1821 ) {
    if ( (  eq5 ( ( ( * (  list1821 ) ) .f_count ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        (*  list1821 ) .f_elements = ( (  allocate298 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( env.starting_dash_size1816 ) ) );
    } else {
        if ( (  eq5 ( ( ( * (  list1821 ) ) .f_count ) , ( ( ( * (  list1821 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_120  new_dash_slice1822 = ( (  allocate298 ) ( ( ( * (  list1821 ) ) .f_al ) ,  (  op_dash_mul19 ( ( ( * (  list1821 ) ) .f_count ) , ( env.growth_dash_factor1817 ) ) ) ) );
            struct env225 envinst225 = {
                .new_dash_slice1822 =  new_dash_slice1822 ,
            };
            ( (  for_dash_each224 ) ( ( (  zip203 ) ( ( ( * (  list1821 ) ) .f_elements ) ,  ( (  from173 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv225){ .fun = lam225, .env = envinst225 } ) ) );
            ( (  free301 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( ( * (  list1821 ) ) .f_elements ) ) );
            (*  list1821 ) .f_elements = (  new_dash_slice1822 );
        }
    }
    return ( Unit_110_Unit );
}

static  enum Unit_110   add114 (   struct env114 env ,    struct List_116 *  list1828 ,    size_t  elem1830 ) {
    struct funenv115  temp312 = ( (struct funenv115){ .fun = grow_dash_if_dash_full115, .env =  env.envinst115  } );
    ( temp312.fun ( temp312.env ,  (  list1828 ) ) );
    ( (  set283 ) ( ( ( * (  list1828 ) ) .f_elements ) ,  ( ( * (  list1828 ) ) .f_count ) ,  (  elem1830 ) ) );
    (*  list1828 ) .f_count = (  op_dash_add17 ( ( ( * (  list1828 ) ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   add108 (   struct env108 env ,    struct List_111 *  list1828 ,    struct Button_29  elem1830 ) {
    struct funenv109  temp313 = ( (struct funenv109){ .fun = grow_dash_if_dash_full109, .env =  env.envinst109  } );
    ( temp313.fun ( temp313.env ,  (  list1828 ) ) );
    ( (  set284 ) ( ( ( * (  list1828 ) ) .f_elements ) ,  ( ( * (  list1828 ) ) .f_count ) ,  (  elem1830 ) ) );
    (*  list1828 ) .f_count = (  op_dash_add17 ( ( ( * (  list1828 ) ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_110_Unit );
}

static  enum Unit_110   add117 (   struct env117 env ,    struct List_119 *  list1828 ,    int32_t  elem1830 ) {
    struct funenv118  temp314 = ( (struct funenv118){ .fun = grow_dash_if_dash_full118, .env =  env.envinst118  } );
    ( temp314.fun ( temp314.env ,  (  list1828 ) ) );
    ( (  set285 ) ( ( ( * (  list1828 ) ) .f_elements ) ,  ( ( * (  list1828 ) ) .f_count ) ,  (  elem1830 ) ) );
    (*  list1828 ) .f_count = (  op_dash_add17 ( ( ( * (  list1828 ) ) .f_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_110_Unit );
}

static  struct Slice_30   to_dash_slice315 (    struct List_116  l1887 ) {
    size_t *  ptr1888 = ( ( (  l1887 ) .f_elements ) .f_ptr );
    return ( (struct Slice_30) { .f_ptr = (  ptr1888 ) , .f_count = ( (  l1887 ) .f_count ) } );
}

static  struct Slice_113   to_dash_slice316 (    struct List_111  l1887 ) {
    struct Button_29 *  ptr1888 = ( ( (  l1887 ) .f_elements ) .f_ptr );
    return ( (struct Slice_113) { .f_ptr = (  ptr1888 ) , .f_count = ( (  l1887 ) .f_count ) } );
}

static  struct Slice_120   to_dash_slice317 (    struct List_119  l1887 ) {
    int32_t *  ptr1888 = ( ( (  l1887 ) .f_elements ) .f_ptr );
    return ( (struct Slice_120) { .f_ptr = (  ptr1888 ) , .f_count = ( (  l1887 ) .f_count ) } );
}

static  enum Unit_110   println318 (    int32_t  s1937 ) {
    ( (  print_dash_str259 ) ( ( ( StrConcat_260_StrConcat ) ( (  s1937 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    return ( Unit_110_Unit );
}

static  struct Maybe_129   try_dash_read_dash_contents319 (    const char*  filename2364 ,    enum CAllocator_112  al2366 ) {
    FILE *  file2367 = ( ( fopen ) ( (  filename2364 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null93 ) ( (  file2367 ) ) ) ) {
        return ( (struct Maybe_129) { .tag = Maybe_129_None_t } );
    }
    ( ( fseek ) ( (  file2367 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_end21 ) ( ) ) ) );
    int32_t  file_dash_size2368 = ( ( ftell ) ( (  file2367 ) ) );
    ( ( fseek ) ( (  file2367 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_set20 ) ( ) ) ) );
    struct Slice_24  file_dash_buf2369 = ( ( (  allocate295 ) ( (  al2366 ) ,  (  op_dash_add17 ( ( (  i32_dash_size96 ) ( (  file_dash_size2368 ) ) ) , (  from_dash_integral4 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2369 ) .f_ptr ) ,  (  from_dash_integral3 ( 1 ) ) ,  (  file_dash_size2368 ) ,  (  file2367 ) ) );
    ( (  set282 ) ( (  file_dash_buf2369 ) ,  ( (  i32_dash_size96 ) ( (  file_dash_size2368 ) ) ) ,  ( (  nullchar150 ) ( ) ) ) );
    ( ( fclose ) ( (  file2367 ) ) );
    struct DynStr_23  str2370 = ( (struct DynStr_23) { .f_contents = (  file_dash_buf2369 ) } );
    return ( ( Maybe_129_Just ) ( (  str2370 ) ) );
}

static  struct DynStr_23   read_dash_contents320 (    const char*  filename2373 ,    enum CAllocator_112  al2375 ) {
    return ( (  or_dash_fail266 ) ( ( (  try_dash_read_dash_contents319 ) ( (  filename2373 ) ,  (  al2375 ) ) ) ,  ( ( StrConcat_252_StrConcat ) ( ( ( StrConcat_253_StrConcat ) ( ( "could not open file " ) ,  (  filename2373 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  struct Scanner_101   mk321 (    struct DynStr_23  s2402 ) {
    return ( (struct Scanner_101) { .f_s = ( (  chars303 ) ( (  s2402 ) ) ) } );
}

static  struct Maybe_236   scan_dash_int322 (    struct Scanner_101 *  sc2405 ) {
    struct TakeWhile_207  digit_dash_chars2406 = ( (  take_dash_while211 ) ( (  sc2405 ) ,  (  is_dash_digit305 ) ) );
    if ( ( (  null247 ) ( (  digit_dash_chars2406 ) ) ) ) {
        return ( (struct Maybe_236) { .tag = Maybe_236_None_t } );
    }
    ( (  drop_prime_248 ) ( (  sc2405 ) ,  ( (  count240 ) ( (  digit_dash_chars2406 ) ) ) ) );
    return ( (  parse_dash_int307 ) ( (  digit_dash_chars2406 ) ) );
}

static  struct Maybe_236   int323 (    struct Scanner_101 *  sc2409 ) {
    return ( (  scan_dash_int322 ) ( (  sc2409 ) ) );
}

static  bool   try_dash_char324 (    struct Scanner_101 *  sc2415 ,    char  char2417 ) {
    if ( (  eq7 ( ( (  head242 ) ( ( ( * (  sc2415 ) ) .f_s ) ) ) , ( ( Maybe_8_Just ) ( (  char2417 ) ) ) ) ) ) {
        ( (  drop_prime_248 ) ( (  sc2415 ) ,  (  from_dash_integral4 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

struct env325 {
    struct Machine_121  m2336;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Slice_120  s2337;
    ;
    ;
    ;
};

struct funenv325 {
    struct Maybe_126  (*fun) (  struct env325  ,    int32_t  ,    size_t  );
    struct env325 env;
};

static  struct Maybe_126   rec325 (   struct env325 env ,    int32_t  i2340 ,    size_t  button_dash_i2342 ) {
    bool  all_dash_match2343 = ( true );
    struct Zip_186  temp326 =  into_dash_iter185 ( ( (  zip205 ) ( ( ( env.m2336 ) .f_target_dash_joltage ) ,  ( env.s2337 ) ) ) );
    while (true) {
        struct Maybe_196  __cond327 =  next199 (&temp326);
        if (  __cond327 .tag == 0 ) {
            break;
        }
        struct Tuple2_197  dref2344 =  __cond327 .stuff .Maybe_196_Just_s .field0;
        if ( (  cmp12 ( ( dref2344 .field0 ) , ( dref2344 .field1 ) ) == 0 ) ) {
            return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
        } else {
            if ( (  cmp12 ( ( dref2344 .field0 ) , ( dref2344 .field1 ) ) == 2 ) ) {
                all_dash_match2343 = ( false );
                break;
            }
        }
    }
    if ( (  all_dash_match2343 ) ) {
        return ( ( Maybe_126_Just ) ( (  i2340 ) ) );
    }
    struct Drop_161  temp328 =  into_dash_iter160 ( ( (  drop166 ) ( ( ( env.m2336 ) .f_buttons ) ,  (  button_dash_i2342 ) ) ) );
    while (true) {
        struct Maybe_164  __cond329 =  next163 (&temp328);
        if (  __cond329 .tag == 0 ) {
            break;
        }
        struct Button_29  dref2347 =  __cond329 .stuff .Maybe_164_Just_s .field0;
        int32_t  max_dash_b_dash_app2349 = (  from_dash_integral3 ( 9999 ) );
        struct SliceIter_179  temp330 =  into_dash_iter201 ( ( dref2347 .field0 ) );
        while (true) {
            struct Maybe_190  __cond331 =  next191 (&temp330);
            if (  __cond331 .tag == 0 ) {
                break;
            }
            size_t  idx2351 =  __cond331 .stuff .Maybe_190_Just_s .field0;
            max_dash_b_dash_app2349 = ( (  min249 ) ( (  op_dash_sub16 ( (  elem_dash_get291 ( ( ( env.m2336 ) .f_target_dash_joltage ) , (  idx2351 ) ) ) , (  elem_dash_get291 ( ( env.s2337 ) , (  idx2351 ) ) ) ) ) ,  (  max_dash_b_dash_app2349 ) ) );
        }
        struct SliceIter_179  temp332 =  into_dash_iter201 ( ( dref2347 .field0 ) );
        while (true) {
            struct Maybe_190  __cond333 =  next191 (&temp332);
            if (  __cond333 .tag == 0 ) {
                break;
            }
            size_t  idx2353 =  __cond333 .stuff .Maybe_190_Just_s .field0;
            ( (  set285 ) ( ( env.s2337 ) ,  (  idx2353 ) ,  (  op_dash_add15 ( (  elem_dash_get291 ( ( env.s2337 ) , (  idx2353 ) ) ) , (  max_dash_b_dash_app2349 ) ) ) ) );
        }
        struct RangeIter_171  temp334 =  into_dash_iter170 ( ( (  to168 ) ( (  from_dash_integral3 ( 1 ) ) ,  (  max_dash_b_dash_app2349 ) ) ) );
        while (true) {
            struct Maybe_126  __cond335 =  next172 (&temp334);
            if (  __cond335 .tag == 0 ) {
                break;
            }
            int32_t  app_dash_num2355 =  __cond335 .stuff .Maybe_126_Just_s .field0;
            int32_t  app_dash_num2356 = (  op_dash_add15 ( (  op_dash_sub16 ( (  max_dash_b_dash_app2349 ) , (  app_dash_num2355 ) ) ) , (  from_dash_integral3 ( 1 ) ) ) );
            struct funenv325  temp336 = ( (struct funenv325){ .fun = rec325, .env =  env  } );
            struct Maybe_126  dref2357 = ( temp336.fun ( temp336.env ,  (  op_dash_add15 ( (  i2340 ) , (  app_dash_num2356 ) ) ) ,  (  op_dash_add17 ( (  button_dash_i2342 ) , (  from_dash_integral4 ( 1 ) ) ) ) ) );
            if ( dref2357.tag == Maybe_126_None_t ) {
            }
            else if ( dref2357.tag == Maybe_126_Just_t ) {
                return ( ( Maybe_126_Just ) ( ( dref2357 .stuff .Maybe_126_Just_s .field0 ) ) );
            }
            struct SliceIter_179  temp337 =  into_dash_iter201 ( ( dref2347 .field0 ) );
            while (true) {
                struct Maybe_190  __cond338 =  next191 (&temp337);
                if (  __cond338 .tag == 0 ) {
                    break;
                }
                size_t  idx2360 =  __cond338 .stuff .Maybe_190_Just_s .field0;
                ( (  set285 ) ( ( env.s2337 ) ,  (  idx2360 ) ,  (  op_dash_sub16 ( (  elem_dash_get291 ( ( env.s2337 ) , (  idx2360 ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
            }
        }
    }
    return ( (struct Maybe_126) { .tag = Maybe_126_None_t } );
}

static  int32_t   joltage_dash_config124 (   struct env124 env ,    struct Machine_121  m2336 ) {
    struct Slice_120  s2337 = ( (  default302 ) ( ( env.al2333 ) ,  ( ( (  m2336 ) .f_target_dash_joltage ) .f_count ) ,  (  from_dash_integral3 ( 0 ) ) ) );
    struct env325 envinst325 = {
        .m2336 =  m2336 ,
        .s2337 =  s2337 ,
    };
    struct funenv325  temp339 = ( (struct funenv325){ .fun = rec325, .env =  envinst325  } );
    struct Maybe_126  res2361 = ( temp339.fun ( temp339.env ,  (  from_dash_integral3 ( 0 ) ) ,  (  from_dash_integral4 ( 0 ) ) ) );
    ( (  free301 ) ( ( env.al2333 ) ,  (  s2337 ) ) );
    return ( (  or_dash_fail270 ) ( (  res2361 ) ,  ( "expect result" ) ) );
}

static  struct Machine_121   lam107 (   struct env107 env ,    struct DynStr_23  line2392 ) {
    struct Scanner_101  temp340 = ( (  mk321 ) ( ( (  line2392 ) ) ) );
    struct Scanner_101 *  sc2418 = ( &temp340 );
    ( (  assert265 ) ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ,  ( "expect [" ) ) );
    while ( ( ! ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "]" ) ) ) ) ) ) ) {
        ( (  drop_prime_248 ) ( (  sc2418 ) ,  (  from_dash_integral4 ( 1 ) ) ) );
    }
    ( (  drop_prime_248 ) ( (  sc2418 ) ,  (  from_dash_integral4 ( 1 ) ) ) );
    struct List_111  temp341 = ( (  mk309 ) ( ( env.al2333 ) ) );
    struct List_111 *  buttons2419 = ( &temp341 );
    while ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ) ) ) {
        struct List_116  temp342 = ( (  mk310 ) ( ( env.al2333 ) ) );
        struct List_116 *  button2420 = ( &temp342 );
        while ( ( true ) ) {
            int64_t  i2421 = ( (  or_dash_fail267 ) ( ( (  int323 ) ( (  sc2418 ) ) ) ,  ( "expect index" ) ) );
            struct funenv114  temp343 = ( (struct funenv114){ .fun = add114, .env =  env.envinst114  } );
            ( temp343.fun ( temp343.env ,  (  button2420 ) ,  ( (  i64_dash_size98 ) ( (  i2421 ) ) ) ) );
            if ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) {
                break;
            }
            ( (  assert265 ) ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( "expect comma" ) ) );
        }
        ( (  drop_prime_248 ) ( (  sc2418 ) ,  (  from_dash_integral4 ( 1 ) ) ) );
        struct funenv108  temp344 = ( (struct funenv108){ .fun = add108, .env =  env.envinst108  } );
        ( temp344.fun ( temp344.env ,  (  buttons2419 ) ,  ( ( Button_29_Button ) ( ( (  to_dash_slice315 ) ( ( * (  button2420 ) ) ) ) ) ) ) );
    }
    struct Slice_113  buttons2422 = ( (  to_dash_slice316 ) ( ( * (  buttons2419 ) ) ) );
    ( (  sort288 ) ( (  buttons2422 ) ) );
    struct List_119  temp345 = ( (  mk311 ) ( ( env.al2333 ) ) );
    struct List_119 *  target_dash_joltage2423 = ( &temp345 );
    ( (  assert265 ) ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "{" ) ) ) ) ) ,  ( "expect {" ) ) );
    while ( ( true ) ) {
        int64_t  i2424 = ( (  or_dash_fail267 ) ( ( (  int323 ) ( (  sc2418 ) ) ) ,  ( "expect index" ) ) );
        struct funenv117  temp346 = ( (struct funenv117){ .fun = add117, .env =  env.envinst117  } );
        ( temp346.fun ( temp346.env ,  (  target_dash_joltage2423 ) ,  ( (  i64_dash_i3297 ) ( (  i2424 ) ) ) ) );
        if ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "}" ) ) ) ) ) ) {
            break;
        }
        ( (  assert265 ) ( ( (  try_dash_char324 ) ( (  sc2418 ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( "expect comma" ) ) );
    }
    struct Slice_120  target_dash_joltage2425 = ( (  to_dash_slice317 ) ( ( * (  target_dash_joltage2423 ) ) ) );
    return ( (struct Machine_121) { .f_target_dash_joltage = (  target_dash_joltage2425 ) , .f_buttons = (  buttons2422 ) } );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1816 = ( (  from_dash_integral4 ( 8 ) ) );
    size_t  growth_dash_factor1817 = ( (  from_dash_integral4 ( 2 ) ) );
    size_t  shrink_dash_factor1818 = ( (  from_dash_integral4 ( 8 ) ) );
    struct env115 envinst115 = {
        .growth_dash_factor1817 =  growth_dash_factor1817 ,
        .starting_dash_size1816 =  starting_dash_size1816 ,
    };
    struct env109 envinst109 = {
        .growth_dash_factor1817 =  growth_dash_factor1817 ,
        .starting_dash_size1816 =  starting_dash_size1816 ,
    };
    struct env118 envinst118 = {
        .growth_dash_factor1817 =  growth_dash_factor1817 ,
        .starting_dash_size1816 =  starting_dash_size1816 ,
    };
    struct env114 envinst114 = {
        .envinst115 = envinst115 ,
    };
    struct env108 envinst108 = {
        .envinst109 = envinst109 ,
    };
    struct env117 envinst117 = {
        .envinst118 = envinst118 ,
    };
    enum CAllocator_112  al2333 = ( (  idc294 ) ( ) );
    struct env124 envinst124 = {
        .al2333 =  al2333 ,
    };
    struct env107 envinst107 = {
        .envinst108 = envinst108 ,
        .envinst114 = envinst114 ,
        .envinst117 = envinst117 ,
        .al2333 =  al2333 ,
    };
    ( (  for_dash_each233 ) ( ( (  map159 ) ( ( (  map157 ) ( ( (  lines304 ) ( ( (  read_dash_contents320 ) ( ( "day-test" ) ,  (  al2333 ) ) ) ) ) ,  ( (struct funenv107){ .fun = lam107, .env = envinst107 } ) ) ) ,  ( (struct funenv124){ .fun = joltage_dash_config124, .env =  envinst124  } ) ) ) ,  (  println318 ) ) );
}
