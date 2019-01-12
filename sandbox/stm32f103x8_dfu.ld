/* Define memory regions. */
MEMORY
{
	rom (rx) : ORIGIN = 0x08002000, LENGTH = 56K
	ram (rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

/* Include the common ld script. */
INCLUDE cortex-m-generic.ld
