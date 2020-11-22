//
//  ContainerProtocol.h
//  17.IteratorPattern
//
//  Created by Layne on 2020/11/9.
//

#import "IteratorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ContainerProtocol <NSObject>

- (id<IteratorProtocol>)getIterator;

@end

NS_ASSUME_NONNULL_END
