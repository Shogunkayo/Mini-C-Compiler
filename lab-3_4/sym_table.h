#define SYM_TABLE_VOID 0
#define SYM_TABLE_CHAR 1
#define SYM_TABLE_INT 2
#define SYM_TABLE_FLOAT 3
#define SYM_TABLE_DOUBLE 4

typedef struct SYMBOL {
	char *name;
	int size;
	int type;
	char *val;
	int lineno;
	int scope;
	
	struct SYMBOL *next;
} symbol;

typedef struct SYMBOL_TABLE {
	struct SYMBOL *head;
} table;

static table *t;

table *init_table();
void put_symbol(char *name, int size, int type, int lineno, int scope);
symbol *get_symbol(char *name, int scope);
int check_symbol(char *name, int scope);
int insert_val(char *name, char *val, int scope);
int get_type(char *val);
int get_size(int type);
void display();
char *type_correction(int type, char *val);
char *get_negative(char *val);
