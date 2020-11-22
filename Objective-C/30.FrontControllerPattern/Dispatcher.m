//
//  Dispatcher.m
//  30.FrontControllerPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Dispatcher.h"
#import "HomeView.h"
#import "StudentView.h"

@implementation Dispatcher {
    StudentView* _studentView;
    HomeView* _homeView;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _studentView = [[StudentView alloc] init];
        _homeView = [[HomeView alloc] init];
    }
    return self;
}

- (void)dispatch:(NSString*)request {
    if ([request isEqualToString:@"STUDENT"]) {
        [_studentView show];
    } else {
        [_homeView show];
    }
}

@end
