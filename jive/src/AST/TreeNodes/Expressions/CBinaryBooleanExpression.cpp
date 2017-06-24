#include "CBinaryBooleanExpression.h"

CBinaryBooleanExpression::CBinaryBooleanExpression( IExpression *_leftOperand, jive::TBooleanOperation _operation, IExpression *_rightOperand) : \
	leftOperand( _leftOperand ), operation( _operation ), rightOperand( _rightOperand ) {}
 
void CBinaryBooleanExpression::Accept( IVisitor *visitor ) {
	visitor->Visit(this);
}