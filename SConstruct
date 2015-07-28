cxx_flags = Split('''-std=c++1y 
                     -Wno-c++98-compat 
                     -O0 
                     -g 
                     -fcolor-diagnostics''')
build_env = Environment(CXXFLAGS = cxx_flags)
main_program = 'ScratchProgram.cc'
build_env.Program(source = main_program)
