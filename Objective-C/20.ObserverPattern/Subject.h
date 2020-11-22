//
//  Subject.h
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Observer;

@interface Subject : NSObject

- (int)getState;
- (void)setState:(int)state;

- (void)attach:(Observer*)observer;
- (void)notifyAllObservers;

@end

NS_ASSUME_NONNULL_END
