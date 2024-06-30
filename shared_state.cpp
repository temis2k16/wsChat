#include "shared_state.hpp"
#include "websocket_session.hpp"

void shared_state::join(websocket_session& session)
{
    sessions_.insert(&session);
}

void shared_state::leave(websocket_session& session)
{
    sessions_.erase(&session);
}

void shared_state::send(std::string message)
{
    auto const ss = std::make_shared<std::string const>(std::move(message));

    for(auto session : sessions_)
        session->send(ss);
}
