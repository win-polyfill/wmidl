add_executable(wmidl)

target_sources(wmidl PRIVATE
  client.c
  expr.c
  expr.h
  hash.c
  hash.h
  header.c
  header.h
  parser.h
  proxy.c
  register.c
  server.c
  typegen.c
  typegen.h
  typelib.c
  typelib.h
  typelib_struct.h
  typetree.c
  typetree.h
  utils.c
  utils.h
  widl.c
  widl.h
  widl.man.in
  widltypes.h
  write_msft.c
)

# in $pwd
# bison -d parser.y
# bison -d ../wrc/ppy.y
# flex -o parser.lex.c parser.l
# flex -o ppl.lex.c ../wrc/ppl.l



target_sources(wmidl PRIVATE
  parser.lex.c
  parser.tab.c
  ppl.lex.c
  ppy.tab.c
)

target_sources(wmidl PRIVATE
  ../wrc/wpp.c
)


if(CMAKE_C_COMPILER_ID STREQUAL "MSVC")
  target_compile_options(wmidl PRIVATE /wd4996 /wd4090 /wd4244)
endif()
