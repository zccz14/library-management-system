
void print_status(int errorcode);

int add_license(MYSQL* conn, int id);

int delete_license(MYSQL* conn, int id);

int show_license(MYSQL* conn);

int add_book(MYSQL* conn, int id, int count);

int show_book(MYSQL* conn);

int show_book_id(MYSQL* conn, int id);

int lend_book(MYSQL* conn, int license_id, int book_id);

int return_book(MYSQL* conn, int license_id, int book_id);