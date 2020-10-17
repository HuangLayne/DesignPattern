/**
 * @file cmap.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "cmap.h"

#include <map>

using namespace std;

typedef map<int64_t, void *> CMap;

void *cmap_create() {
    CMap *data = new CMap();
    return data;
}

void cmap_put(void *data, int64_t key, void *value) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return;
    (*map_data)[key] = value;
}

void *cmap_get(void *data, int64_t key) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return NULL;

    CMap::iterator it = map_data->find(key);
    if (it != map_data->end()) {
        return it->second;
    }
    return NULL;
}

int cmap_remove(void *data, int64_t key) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return -1;
    map_data->erase(key);
    return 0;
}

size_t cmap_size(void *data) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return 0;

    return map_data->size();
}

size_t cmap_max_size(void *data) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return 0;

    return map_data->max_size();
}

void *cmap_index_get(void *data, int index) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data || map_data->empty()) return NULL;

    CMap::iterator it;
    it = map_data->begin();

    for (int i = 0; i < index; i++) {
        it = it++;
        if (it == map_data->end()) {
            return NULL;
        }
    }

    return it->second;
}

void cmap_traversal_handle(void *data, void *parm, int (*enu)(void *parm, int64_t key, void *elem)) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data || map_data->empty()) return;

    CMap::iterator it;

    for (it = map_data->begin(); it != map_data->end(); ++it) {
        enu(parm, it->first, it->second);
    }
}

void cmap_get_all_keys_and_values(void *data, int64_t *keys, void **values) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data || map_data->empty()) return;

    CMap::iterator it;

    int index = 0;
    for (it = map_data->begin(); it != map_data->end(); ++it) {
        if (NULL != keys) {
            keys[index] = it->first;
        }
        if (NULL != values) {
            values[index] = it->second;
        }
        index++;
    }
}

void cmap_get_all_keys(void *data, int64_t *toArray) { cmap_get_all_keys_and_values(data, toArray, NULL); }

void cmap_get_all_values(void *data, void **toArray) { cmap_get_all_keys_and_values(data, NULL, toArray); }

int64_t cmap_get_key_for_value(void *data, char *value) {
    int errorRet = -1;

    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data || map_data->empty()) return errorRet;

    CMap::iterator it;
    for (it = map_data->begin(); it != map_data->end(); ++it) {
        char *stringValue = (char *)it->second;
        if (strcmp(stringValue, value) == 0) {
            return it->first;
        }
    }

    return errorRet;
}

int64_t cmap_get_min_key(void *data) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data || map_data->empty()) return -1;

    CMap::iterator it = map_data->begin();

    int64_t min_key = it->first;

    for (; it != map_data->end(); ++it) {
        min_key = min_key < it->first ? min_key : it->first;
    }

    return min_key;
}

void cmap_clear(void *data) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return;

    map_data->clear();
}

void cmap_destroy(void *data) {
    CMap *map_data = reinterpret_cast<CMap *>(data);
    if (!map_data) return;

    map_data->clear();
    delete (map_data);
}
