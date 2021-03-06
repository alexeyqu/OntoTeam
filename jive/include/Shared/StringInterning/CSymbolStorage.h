#pragma once

#include "CSymbol.h"
#include <unordered_map>

namespace IRT // TODO for now, later make it global
{

using ST::CSymbol;

template<class Object>
class CSymbolStorage 
{
public:
	CSymbolStorage<Object>() {};

	void insertObject( CSymbol *symbol, Object value ) { table[symbol] = value; }

	typedef typename std::unordered_map<CSymbol *, Object>::const_iterator tableIt;

	tableIt getBegin() const { return table.begin(); }

	tableIt getEnd() const { return table.end(); }

	Object getObject( CSymbol *symbol ) const {
		auto result = table.find( symbol );
		return result != table.end() ? result->second : NULL;
	}

	int size() const { return table.size(); }

private:
	std::unordered_map<CSymbol *, Object> table;
};

}