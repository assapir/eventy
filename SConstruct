#!/usr/bin/python3

import sys

env = Environment()
source_dir = env.Dir('#').abspath + '/src'
bin = env.Dir('#').abspath + '/bin'
platform = sys.platform
if platform == 'linux' or platform == 'linux2':
    env.Append(CXXFLAGS='-Werror')
elif platform == 'win32':
    env.Append(CXXFLAGS='-WX -nologo -W4 -DWIN64')

env.Append(CPPPATH=source_dir)

Export('env')

program = SConscript('src/samples/SConscript',
                     variant_dir=bin + '/samples', duplicate=0)
impl = SConscript('src/impl/SConscript', variant_dir=bin +
                  '/eventy',  duplicate=0)
