from lexer import Lexer
from parser import Parser
from codegen import CodeGen
import sys
import os
#input
fname = sys.argv[1]


with open(fname) as f:
    text_input = f.read()

#lexical analysis
lexer = Lexer().get_lexer()
tokens = lexer.lex(text_input)

#initialize codegen
codegen = CodeGen()

module = codegen.module
builder = codegen.builder
printf = codegen.printf

#parser
pg = Parser(module, builder, printf)
pg.parse()
parser = pg.get_parser()
parser.parse(tokens).eval()

#ouput file
#Use codegen to create assembly code
codegen.create_ir()
codegen.save_ir("output.ll")

#create .exe
os.system("clear")
print('Creating executable file')
os.system("llc -filetype=obj output.ll")
os.system("gcc output.o -o "+ sys.argv[2])

os.system("rm -f output.ll")
os.system("rm -f output.o")
print('Compiling Completed')
