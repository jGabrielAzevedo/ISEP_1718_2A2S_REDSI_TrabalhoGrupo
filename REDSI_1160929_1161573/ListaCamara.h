#pragma once

#include <string>
#include <list>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Camara.h"


class ListaCamaras : public ListaProdutos
{
    public:
        ListaCamaras();
        virtual ~ListaCamaras();
		vector<Camara> getList(); //tem de se mudar o tipo de dados
		bool importdata(string conditions);
		bool insertElement(Camara *c);
		bool updateElement(Camara *c);
		bool deleteElement(Camara *c);
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();
    private:
		vector<Camara> *camaras;
		vector<Camara> *insertList;
		vector<Camara> *updateList;
		vector<Camara> *deleteList;
};
