#ifndef LOGGER_H
#define LOGGER_H

extern void logger(const char *filename,
                   int line,
                   char level,
                   const char *fmt, ...) __attribute__((format (printf, 4, 5)));

#define LOGI(...) logger(__FILE__, __LINE__, 'I', __VA_ARGS__)
#define LOGD(...) logger(__FILE__, __LINE__, 'D', __VA_ARGS__)
#define LOGW(...) logger(__FILE__, __LINE__, 'W', __VA_ARGS__)
#define LOGE(...) logger(__FILE__, __LINE__, 'E', __VA_ARGS__)

#endif /* LOGGER_H */
