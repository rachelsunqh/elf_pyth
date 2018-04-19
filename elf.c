#ifdef X86_64_BIT

#else


#endif

#define EI_NIDENT	16
typedef struct {
	unsigned char e_ident[EI_NIDENT];
	Elf_Half	e_type;
	Elf_Half	e_machine;
	Elf_Word	e_version;
	Elf_Addr	e_entry;
        Elf_Off		e_phoff;
	Elf_Off       	e_shoff;
	Elf_Word	e_flags;
	Elf_Half	e_ehsize;
	Elf_Half	e_phentsize;
	Elf_Half	e_phnum;
	Elf_Half	e_shentsize;
	Elf_Half	e_shnum;
	Elf_Half	e_shstrndx;
}Elf_ehdr;

typedef struct {
	Elf_Word	sh_name;
	Elf_Word	sh_type;
	Elf_Word	sh_flags;
	Elf_Addr	sh_addr;
	Elf_off		sh_offset;
	Elf_Word	sh_size;
	Elf_Word	sh_link;
	Elf_Word	sh_info;
	Elf_Word	sh_addralign;
	Elf_Word	sh_entsize;
}Elf_Shdr;

typedef struct {
	Elf_Word	p_type;
	Elf_Off		p_offset;
	Elf_Addr	p_vaddr;
	Elf_Addr	p_paddr;
	Elf_Word	p_filesz;
	Elf_Word	p_memsz;
	Elf_Word	p_flags;
	Elf_Word	p_align;
}Elf_phdr;

static Elf_Ehdr *my_Elf_get_ehdr(int fd)
{


}

static Elf_Shdr *my_Elf_get_shdr(int fd,int index)
{


}


static Elf_Phdr *my_Elf_get_phdr(int fd,int index)
{

}

static Elf_section * my_get_section(int fd,int index,char *sec_name)
{


}

static Elf_Segment *Elf_get_segment(int fd,int index,char *seg_name)
{

}


struct Elf_operations {
	Elf_Ehdr *Elf_get_ehdr(int fd);
	Elf_Shdr *Elf_get_shdr(int fd,int index);
	Elf_Phdr *Elf_get_phdr(int fd,int index);
	Elf_Section *Elf_get_section(int fd,int index,char *sec_name);
	Elf_Segment *Elf_get_segment(int fd,int index,char *seg_name);
};
#define ELF_PTH		(32)
struct Elf_format {
	unsigned char	file_name[ELF_PTH];
	int		fd;
	struct Elf_operations	elf_opt;
};

static void print_elf_ehdr(struct Elf_format *elf_handler)
{
}

static void print_elf_shdr(struct Elf_format *elf_handler)
{
}

static void print_elf_phdr(struct Elf_format *elf_handler)
{
}


static void print_elf_section(struct Elf_format *elf_handler)
{
}

static void print_elf_segment(struct Elf_format *elf_handler)
{
}

int main(int argc,char *argv[])
{
	int ret = 0;
	
	struct Elf_format elf_hander;

	strcmpy(elf_handler.file_name,argv[1],strlen(argv[1]));
	elf_handler.fd = open(elf_handler.file_name,);
	if(0 > elf_handler.fd){
		return -EINVAL;
	}	
	
	elf_handler.elf_opt.Elf_get_ehdr = my_Elf_get_ehdr;
	elf_handler.elf_opt.Elf_get_shdr = my_Elf_get_shdr;
	elf_handler.elf_opt.Elf_get_phdr = my_Elf_get_phdr;
	elf_handler.elf_opt.Elf_get_section = my_Elf_get_section;
	elf_handler.elf_opt.Elf_get_segment = my_Elf_get_segment;



}








