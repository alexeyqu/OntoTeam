#pragma once

#include "IRT.h"
#include "CJiveEnvironment.h"

namespace IRT
{

using jive::CJiveEnvironment;

class IExp;
class CCONST;
class CNAME;
class CTEMP;
class CBINOP;
class CMEM;
class CCALL;
class CESEQ;

class IStm;
class CMOVE;
class CEXP;
class CJUMP;
class CCJUMP;
class CSEQ;
class CLABEL;

class CExpList;
class CStmList;

class IIRTVisitor
{
public:	
    IIRTVisitor( CJiveEnvironment *_jiveEnv, std::ostream &_outputStream ) : \
		jiveEnv( _jiveEnv ), outputStream( _outputStream ) {}

    virtual void Visit( CCONST *exp ) = 0;
    virtual void Visit( CNAME *exp ) = 0;
    virtual void Visit( CTEMP *exp ) = 0;
    virtual void Visit( CBINOP *exp ) = 0;
    virtual void Visit( CMEM *exp ) = 0;
    virtual void Visit( CCALL *exp ) = 0;
    virtual void Visit( CESEQ *exp ) = 0;

    virtual void Visit( CMOVE *stm ) = 0;
    virtual void Visit( CEXP *stm ) = 0;
    virtual void Visit( CJUMP *stm ) = 0;
    virtual void Visit( CCJUMP *stm ) = 0;
    virtual void Visit( CSEQ *stm ) = 0;
    virtual void Visit( CLABEL *stm ) = 0;

    virtual void Visit( CExpList *exp ) = 0;
    virtual void Visit( CStmList *stm ) = 0;

protected:
	CJiveEnvironment *jiveEnv;
	std::ostream &outputStream;
};

}
