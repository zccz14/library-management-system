# library-management-system
（数据库作业）使用 C 语言编写基于 MySQL 的图书管理系统
# 部署
按照 `src/db_config_sample.h` 配置 `src/db_config.h`

在src目录中编译 `$ make`

导入`schema.sql`

# 运行
`$ ./app`

# API
## 创建借书证
`1 id`
新建一个ID为id的借书证。
## 删除借书证
`2 id`
删除ID为id的借书证。
## 增减书目
`3 id count`
如果书目不存在就创建一个。
## 借阅图书
`4 license_id book_id`
## 归还图书
`5 license_id book_id`
