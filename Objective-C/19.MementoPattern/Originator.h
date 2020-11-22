//
//  Originator.h
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import "Memento.h"

NS_ASSUME_NONNULL_BEGIN

@interface Originator : NSObject

- (void)setState:(NSString*)state;
- (NSString*)getState;
- (Memento*)saveStateToMemento;
- (void)getStateFromMemento:(Memento*)memento;

@end

NS_ASSUME_NONNULL_END
