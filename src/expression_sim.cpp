/***************************************************************************
   expression_sim.cpp   -  sim specific expressions

   Christoph Kirst
   christoph@nld.ds.mpg.de 
   Max Planck Institue for Dynamics and Self-Organisation Göttingen
   HU Berlin, BCCN Göttingen & Berlin (2008)
****************************************************************************/
#include "expression_sim.h"

EXPR_NAME_IMPL(ExprIterator,             "Iterator")
EXPR_NAME_IMPL(ExprIteratorIter,         "Iteration")
EXPR_NAME_IMPL(ExprIteratorTotal,        "Iterations")
EXPR_NAME_IMPL(ExprCreator,              "Creator")


int ExprIterator::level(-1);
int ExprIterator::count(-1);
int ExprIterator::n_iters(-1);

ExprIterator::IteratorCounterStatusT ExprIterator::counter_status(ExprIterator::CNdef);

ExprIterator::IteratorListT ExprIterator::iterators;
ExprIterator::IteratorOrderT ExprIterator::ordering; 

ExprCreator::CreatorListT ExprCreator::creators;
