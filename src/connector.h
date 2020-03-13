/*
 * Copyright (c) 2020 Calin Culianu <calin.culianu@gmail.com>
 * Copyright (c) 2020 ASICseer https://asicseer.com
 * Copyright 2014-2016 Con Kolivas
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.  See COPYING for more details.
 */

#ifndef CONNECTOR_H
#define CONNECTOR_H

int64_t connector_newclientid(pool_t *ckp);
void connector_upstream_msg(pool_t *ckp, char *msg);
void connector_add_message(pool_t *ckp, json_t *val);
char *connector_stats(void *data, const int runtime);
void connector_send_fd(pool_t *ckp, const int fdno, const int sockd);
void *connector(void *arg);

#endif /* CONNECTOR_H */
