// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Nautiluscoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NAUTILUSCOIN_RPCCLIENT_H
#define NAUTILUSCOIN_RPCCLIENT_H

#include "json/json_spirit_reader_template.h"
#include "json/json_spirit_utils.h"
#include "json/json_spirit_writer_template.h"

json_spirit::Array RPCConvertValues(const std::string& strMethod, const std::vector<std::string>& strParams);

#endif // NAUTILUSCOIN_RPCCLIENT_H
