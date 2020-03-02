#include "indexer/ftypes_sponsored.hpp"

#include "indexer/classificator.hpp"

#include "private.h"

namespace ftypes
{
BaseSponsoredChecker::BaseSponsoredChecker(std::string const & sponsoredType)
{
  m_types.push_back(classif().GetTypeByPath({"sponsored", sponsoredType}));
}

IsSponsoredChecker::IsSponsoredChecker()
  : BaseChecker(1)
{
  m_types.push_back(classif().GetTypeByPath({"sponsored"}));
}
}  // namespace ftypes
