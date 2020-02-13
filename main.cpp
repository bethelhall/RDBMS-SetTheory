#include<bits/stdc+.h>
using namespace std;

string file_path = "./data/";

const char separator = ' ';
const int nameWidth = 22;
const int numWidth = 2;

template<typename T> void printElement(T t, const int& width){
	cout << left << setw(width) << setfill(separator) << t;
}

struct data_unit{
	char type;
	int intu;
	string stru;
	data_unit(char type, string s){
		this->type =  type;
		switch(type){
			case '1':
				this->intu = atoi(s.c_str());
				break;
			case '2':
				this->stru = s;
				break;
		}
	}
	string data(){
		switch(this->type){
			case '1':
				return to_string(this->intu);
			case '2':
				return this->stru
		}
	}
}

struct Table_row{
	vector <data_unit> row;
}

struct Table{
	string table_name;
	vector <string> table_attr;
	vector <char. table_attr_type;
	vector <Table_row> table_row;
	
	int no_of_attribute(){
		return this-> table_attr.size();
	}

	int no_of_record(){
		return this-> table_row.size();
	}
}
