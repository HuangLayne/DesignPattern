//
//  Memento.h
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Memento : NSObject

- (instancetype)initWithState:(NSString*)state;
- (NSString*)getState;

@end

NS_ASSUME_NONNULL_END
