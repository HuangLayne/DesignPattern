//
//  StateProtocol.h
//  21.StatePattern
//
//  Created by Layne on 2020/11/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Context;
@protocol StateProtocol <NSObject>

- (void)doAction:(Context*)context;

@end

NS_ASSUME_NONNULL_END
