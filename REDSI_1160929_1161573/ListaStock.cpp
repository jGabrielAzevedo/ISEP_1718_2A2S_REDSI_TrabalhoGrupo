#include "ListaStock.h"
#include "stdafx.h"

using namespace std;

ListaStock::ListaStock(){
    //ctor
}

ListaStock::~ListaStock(){
    //dtor
}

vector<Stock> ListaStock::getList(){
	return *stocks;
}

bool ListaStock::importdata(string conditions) {
	//C�digo SQL
	return true;
}

bool ListaStock::insertElement(Stock *s){
	return false;
}

bool ListaStock::updateElement(Stock *s){
	return false;
}

bool ListaStock::deleteElement(Stock *s){
	return false;
}

bool ListaStock::exportData(){
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaStock::exportInsertData(){
	//C�digo SQL
	return false;
}

bool ListaStock::exportUpdateData(){
	//C�digo SQL
	return false;
}

bool ListaStock::exportDeleteData(){
	//C�digo SQL
	return false;
}