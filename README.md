# Error
```
Checking Build System
Performing download step (git clone) for 'scapix-bin-populate'
Cloning into 'bin'...
fatal: not a git repository (or any of the parent directories): .git
CMake Error at Temp/apps/scapix-example/build/_deps/scapix-bin-subbuild/scapix-bin-populate-prefix/tmp/scapix-bin-populate-gitclone.cmake:40 (message):
  Failed to checkout tag: '7'
```
# Steps to Reproduce
1) git clone https://github.com/calebbergman/scapix-example.git
3) cd scapix-example
2) git clone https://github.com/scapix-com/scapix
4) cmake -B ./build .
