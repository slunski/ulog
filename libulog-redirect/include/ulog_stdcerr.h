/**
 * Copyright (C) 2014 Parrot S.A.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * libulog-stdcerr: redirect stdcerr logging to ulog.
 *
 */

#ifndef _ULOG_STDCERR_H_
#define _ULOG_STDCERR_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * Redirect stdcerr log to ulog.
 */
void ulog_stdcerr_redirect(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* !_ULOG_STDCERR_H_ */
