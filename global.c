/*
 *******************************************************************************
 * Copyright (c) 2018 Edgeworx, Inc.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0
 *
 * SPDX-License-Identifier: EPL-2.0
 *******************************************************************************
*/

#include "global.h"

const char *IOFOG = "iofog";
const char *ID = "id";
const char *CONFIG = "config";

const int PORT_IOFOG = 54321;
const char *SELFNAME = "SELFNAME";
const char *SSL = "SSL";
const short SSL_DEFAULT = 0;
const char *HOST_DEFAULT = "127.0.0.1";

const char *URL_GET_CONFIG = "/v2/config/get";
const char *URL_GET_NEXT_MESSAGES = "/v2/messages/next";
const char *URL_GET_PUBLISHERS_MESSAGES = "/v2/messages/query";
const char *URL_POST_MESSAGE = "/v2/messages/new";
const char *URL_GET_CONTROL_WS = "/v2/control/socket/id/";
const char *URL_GET_MESSAGE_WS = "/v2/message/socket/id/";

const char *APPLICATION_JSON = "application/json";
const char *HTTP = "http";
const char *HTTPS = "https";
const char *WS = "ws";
const char *WSS = "wss";

const unsigned char CODE_ACK = 0xB;
const unsigned char CODE_CONTROL_SIGNAL = 0xC;
const unsigned char CODE_MSG = 0xD;
const unsigned char CODE_RECEIPT = 0xE;

const int WS_ATTEMPT_LIMIT = 5;
const int WS_CONNECT_TIMEOUT = 1; // todo second

const char *TIME_FRAME_START = "timeframestart";
const char *TIME_FRAME_END = "timeframeend";
const char *COUNT = "count";
const char *MESSAGES = "messages";
const char *PUBLISHERS = "publishers";
