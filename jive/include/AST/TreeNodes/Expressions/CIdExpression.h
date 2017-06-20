#pragma once

#include <string>
#include "IExpression.h"
#include "CSymbol.h"

class CIdExpression : public IExpression
{
public:
   	CIdExpression( CSymbol *_name );

   	void Accept( IVisitor *visitor ) override;

	flyweight<std::string> getName() const;

   	CSymbol *name;
};