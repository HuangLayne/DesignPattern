//
//  Context.h
//  21.StatePattern
//
//  Created by Layne on 2020/11/19.
//

#import "StateProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Context : NSObject

- (void)setState:(id<StateProtocol>)state;

- (id<StateProtocol>)getState;

@end

NS_ASSUME_NONNULL_END
