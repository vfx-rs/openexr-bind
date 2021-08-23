
import os
import sys
import re

in_path = sys.argv[1]
out_path = sys.argv[2]
abi_path = sys.argv[3]

abi = {}
with open(abi_path) as f:
    for l in f.readlines():
        name, size, align = l[:-1].split('|')
        abi[name] = (size, align)

print(abi)

re_size = re.compile('%SIZE(.+)%')
re_align = re.compile('%ALIGN(.+)%')

def size_repl(m):
    s = m.group(1)
    size, _ = abi[s]
    return size

def align_repl(m):
    s = m.group(1)
    _, align = abi[s]
    return align

for root, dirs, files in os.walk(in_path):
    print('root', root)
    print('dirs', dirs)
    for file in files:
        full_path = os.path.join(root, file)
        rel_path = os.path.relpath(full_path, in_path)
        rel_head = os.path.split(rel_path)[0]

        new_head = os.path.join(out_path, rel_head)

        if not os.path.exists(new_head):
            os.makedirs(new_head)
        
        new_fn = os.path.join(new_head, file)

        # Now read in the file contents replace all the markers, and write it 
        # out to the actual include directory
        # print('reading %s' % full_path)
        txt_in = ''
        print('cargo:warning=editing file %s' % full_path)
        with open(full_path) as f_in:
            txt_in = f_in.read()

            txt_in = re_size.sub(size_repl, txt_in)
            txt_in = re_align.sub(align_repl, txt_in)
            
        # print('writing %s' % new_fn)
        with open(new_fn, 'w') as f_out:
            f_out.write(txt_in)
