I used I = 32 here because there seems to be 16 bytes Before the data array and then the secret is written 16 bytes later.
I print those 16 bytes but I got "?" and "??" on different runs. It must some sort of header data I feel like but it does not print.
Anyway I was able to find this initial solution by just printing a page and then narrowing it down from there. I found that this text section
does occur at 0x1010 which is pretty fun, that means we are on the second page if I am correct and our attack program ends on the 4th page or the 5th?
sbrk(0) returns 0x4000. I think that the array occurs in the text section but, I am really unsure because its not really a predefined string.


Discord : pickledlampshade if you are the goat of ELF i guess. Anyway, Xv6 pwned ez dubs i guess 
