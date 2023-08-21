ENTRY(reset)

MEMORY
{
	memo(rwx) : ORIGIN = 0x00000000 , LENGTH = 64M
}


SECTIONS

{
    . = 0x10000;
	.reset . :
	{
		startup.o(.text)
	}>memo
	.text :
	{
		*(.text) *(.rodata)
	}>memo
	.data :
	{
		*(.data)
	}>memo
	.bss :
	{
		*(.bss) *(COMMON)
	}>memo
	. = . + 0x1000;
	stack_top = .;
}