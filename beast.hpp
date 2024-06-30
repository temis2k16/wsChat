//
// Copyright (c) 2018 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/vinniefalco/CppCon2018
//

#pragma once

#include <boost/beast.hpp>
#include <boost/asio.hpp>

namespace asio = boost::asio;                    // namespace asio
using tcp = asio::ip::tcp;                       // from <boost/asio/ip/tcp.hpp>
namespace beast = boost::beast;
namespace websocket = boost::beast::websocket;   // from <boost/beast/websocket.hpp>
using error_code = boost::system::error_code;