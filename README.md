# Quine
A simple straightforward quine.  Not the shortest possible, but [a] it's fairly readable, and [b] I wrote it completely from scratch, not borrowing any ideas or tricks from anyplace.

Verify easily with this command sequence:<tt>
                                            gcc quine.c -o tmp-1.exe ; 
                                            ./tmp-1.exe >tmp-1.c ; 
                                            gcc tmp-1.c -o tmp-2.exe ; 
                                            ./tmp-2.exe >tmp-2.c ; 
                                            diff tmp-1.c tmp-2.c
</tt>

