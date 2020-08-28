/**
 * @file Stock.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef STOCK_H_
#define STOCK_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Stock Stock;

Stock* stock_create(void);
void stock_destroy(Stock** stock);
void stock_buy(Stock* stock);
void stock_sell(Stock* stock);

#ifdef __cplusplus
}
#endif
#endif  // STOCK_H_
