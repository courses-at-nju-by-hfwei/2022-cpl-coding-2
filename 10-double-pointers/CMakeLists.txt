add_executable(selection-sort-strings selection-sort-strings.c)

add_executable(echo echo.c)
add_executable(echo-escaped echo-escaped.c)

add_executable(scores scores.c)
add_executable(game-of-life-pointer game-of-life-pointer.c)

add_executable(merge-2 merge.c)
add_executable(integrate integrate.c)
target_link_libraries(integrate m)
add_executable(sort sort.c)

add_executable(decl decl.c)