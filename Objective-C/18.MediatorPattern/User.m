//
//  User.m
//  18.MediatorPattern
//
//  Created by Layne on 2020/11/11.
//

#import "User.h"
#import "ChatRoom.h"

@implementation User

- (instancetype)initWithName:(NSString*)name {
    self = [super init];
    if (self) {
        _name = name;
    }
    return self;
}

- (void)sendMessage:(NSString*)message {
    [ChatRoom showMessage:self Message:message];
}

@end
