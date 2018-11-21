#!/usr/bin/python3

import sys

env = Environment()
source_dir = env.Dir('#').abspath + '/src'

env.Append(CPPPATH = source_dir)

Export('env')

program = SConscript('src/Samples/SConscript',  variant_dir='bin/samples', duplicate=0)
impl = SConscript('src/Impl/SConscript', variant_dir='bin/impl',  duplicate=0)
