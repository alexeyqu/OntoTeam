#pragma once

#include "IEntity.h"

namespace AST 
{

class CCompoundClass : public IEntity
{
public:
	CCompoundClass( CCompoundClass *_class1, CClass *_class2 ) : \
		class1( _class1 ), class2( _class2 ) {}

	void Accept( IVisitor *visitor ) override { visitor->Visit( this ); }

	CCompoundClass *getNextClass() const { return class1; }
	CClass *getClass() const { return class2; }

private:
	CCompoundClass *class1;
	CClass *class2;
};

}