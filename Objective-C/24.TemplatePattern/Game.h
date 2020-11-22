//
//  Game.h
//  24.TemplatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Game : NSObject

- (void)initialize;
- (void)startPlay;
- (void)endPlay;
- (void)play;

@end

NS_ASSUME_NONNULL_END
