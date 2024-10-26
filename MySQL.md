```shell
$ mysql -u sxh -p
mysql: Deprecated program name. It will be removed in a future release, use '/usr/bin/mariadb' instead
Enter password:
Welcome to the MariaDB monitor.  Commands end with ; or \g.
Your MariaDB connection id is 3
Server version: 11.4.3-MariaDB Arch Linux

Copyright (c) 2000, 2018, Oracle, MariaDB Corporation Ab and others.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

MariaDB [(none)]>
MariaDB [(none)]> help;

General information about MariaDB can be found at
http://mariadb.org

List of all client commands:
Note that all text commands must be first on line and end with ';'
?         (\?) Synonym for `help'.
charset   (\C) Switch to another charset. Might be needed for processing binlog with multi-byte charsets.
clear     (\c) Clear the current input statement.
connect   (\r) Reconnect to the server. Optional arguments are db and host.
delimiter (\d) Set statement delimiter.
edit      (\e) Edit command with $EDITOR.
ego       (\G) Send command to MariaDB server, display result vertically.
exit      (\q) Exit mysql. Same as quit.
go        (\g) Send command to MariaDB server.
help      (\h) Display this help.
nopager   (\n) Disable pager, print to stdout.
notee     (\t) Don't write into outfile.
nowarning (\w) Don't show warnings after every statement.
pager     (\P) Set PAGER [to_pager]. Print the query results via PAGER.
print     (\p) Print current command.
prompt    (\R) Change your mysql prompt.
quit      (\q) Quit mysql.
costs     (\Q) Toggle showing query costs after each query
rehash    (\#) Rebuild completion hash.
sandbox   (\-) Disallow commands that access the file system (except \P without an argument and \e).
source    (\.) Execute an SQL script file. Takes a file name as an argument.
status    (\s) Get status information from the server.
system    (\!) Execute a system shell command.
tee       (\T) Set outfile [to_outfile]. Append everything into given outfile.
use       (\u) Use another database. Takes database name as argument.
warnings  (\W) Show warnings after every statement.

For server side help, type 'help contents'

MariaDB [(none)]> exit;
Bye
```

## 一、绪论

## 1.0 在 deepin 上安装配置 MySQL

```shell
$ sudo apt-get install mariadb-server
$ sudo mariadb-install-db --user=mysql --basedir=/usr --datadir=/var/lib/mysql
$ sudo systemctl start mysqld && sudo systemctl enable mysqld
$ sudo mysql_secure_installation
$ sudo vim /etc/mysql/my.cnf
[mysqld]
character-set-server=utf8mb4
collation-server=utf8mb4_unicode_ci
[client]
default-character-set=utf8mb4
[mysql]
default-character-set=utf8mb4
$ sudo vim /etc/mysql/mariadb.conf.d/50-server.cnf
bind-address = 0.0.0.0
$ sudo systemctl restart mysql
$ ss -antp | grep 3306
LISTEN     0      80           0.0.0.0:3306         0.0.0.0:*
$ sudo iptables -A INPUT -p tcp --dport 3306 -j ACCEPT
$ mysql -u root -p
CREATE USER 'sxh'@'localhost' IDENTIFIED BY '123123';
CREATE USER 'sxh'@'%' IDENTIFIED BY '123123';
GRANT ALL PRIVILEGES ON *.* TO 'sxh'@'localhost' WITH GRANT OPTION; 
GRANT ALL PRIVILEGES ON *.* TO 'sxh'@'%' WITH GRANT OPTION;
FLUSH PRIVILEGES;
EXIT;
$ mysql -u sxh -p
EXIT;
```

## 1.1 数据库系统概述

### 1.1.1 数据库的 4 个基本概念

