// Loading data into MYSQL

#include <iostream>
#include <mysql.h>   // Mysql Connector

using namespace std;
 
void insertIntoDataBase(const string& stock, float price) 
{
	MYSQL * conn;
	
	conn= mysql_init(NULL);
	
	if (conn && mysql_real_connect(conn, "localhost", "root", "sUmitra#12", "stock", 3306, NULL, 0)) 
	{
	string query = "INSERT INTO stock_prices (stock_name, price) VALUES ('" + stock + " ', " + to_string(price) + ")";
	mysql_query(conn, query.c_str());
	} else 
	{
		cout << "Database Connection Failed!" <<endl;

	}

}

int main() 
{
	insertIntoDataBase("AAPL", 150.50);
	cout << "Data Loaded Successfully!" <<endl;
	return 0;
}