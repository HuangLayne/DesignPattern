//
//  Game.m
//  24.TemplatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Game.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation Game

- (void)initialize {
    MethodNotImplemented();
}

- (void)startPlay {
    MethodNotImplemented();
}

- (void)endPlay {
    MethodNotImplemented();
}

- (void)play {
    //初始化游戏
    [self initialize];

    //开始游戏
    [self startPlay];

    //结束游戏
    [self endPlay];
}

@end
