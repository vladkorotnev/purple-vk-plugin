// Vk.com authentication.

#pragma once

#include <connection.h>

#include "common.h"

typedef function_ptr<void(const string& auth_token, const string& user_id)> AuthSuccessCb;

// Starts authentication process with given user id, password, client id and scope. Either success_cb or
// error_cb is called upon finishing authorization.
// NOTE: you should really call VkData::authenticate instead of this function.
void vk_auth_user(PurpleConnection* gc, const string& email, const string& password, const string& client_id,
                  const string& scope, bool imitate_mobile_client, const AuthSuccessCb& success_cb, const ErrorCb& error_cb = nullptr);
