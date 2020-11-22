//
//  IteratorProtocol.h
//  17.IteratorPattern
//
//  Created by Layne on 2020/11/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IteratorProtocol <NSObject>

- (BOOL)hasNext;
- (instancetype)next;

@end

NS_ASSUME_NONNULL_END
