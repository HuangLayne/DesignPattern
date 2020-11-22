//
//  OctalObserver.h
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "Observer.h"

NS_ASSUME_NONNULL_BEGIN

@class Subject;
@interface OctalObserver : Observer

- (instancetype)initWithSubject:(Subject*)subject;

@end

NS_ASSUME_NONNULL_END
