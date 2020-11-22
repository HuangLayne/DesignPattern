//
//  CareTaker.h
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import "Memento.h"

NS_ASSUME_NONNULL_BEGIN

@interface CareTaker : NSObject

- (void)add:(Memento*)state;
- (Memento*)get:(int)index;

@end

NS_ASSUME_NONNULL_END
