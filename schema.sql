create table license (
    id int primary key
);

create table book (
    id int primary key,
    count int
);

create table lend (
    license_id int not null,
    book_id int not null,
    returned tinyint(1),
    foreign key (license_id) references license (id) on delete cascade on update cascade,
    foreign key (book_id) references book (id) on delete cascade on update cascade 
);
