#include <mysql.h>
#include <iostream>

int main() {
    MYSQL* conn;
    conn = mysql_init(nullptr);

    if (!conn) {
        std::cerr << "MySQL initialization failed!" << std::endl;
        return 1;
    }

    conn = mysql_real_connect(conn, "localhost", "root", "sUmitra#12", "stock", 3306, nullptr, 0);

    if (conn) {
        std::cout << "Connected to MySQL successfully!" << std::endl;
    } else {
        std::cerr << "Connection failed: " << mysql_error(conn) << std::endl;
    }

    mysql_close(conn);
    return 0;
}