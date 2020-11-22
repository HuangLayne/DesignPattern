//
//  NameRepository.m
//  17.IteratorPattern
//
//  Created by Layne on 2020/11/9.
//

#import "NameRepository.h"

@interface NameRepository ()
@property(readonly) NSArray<NSString *> *names;
@end

@interface NameIterator : NSObject <IteratorProtocol>
@end

@implementation NameIterator {
    NameRepository *_nameRepository;
    int _index;
}

- (instancetype)initWithNameRepository:(NameRepository *)nameRepository {
    self = [super init];
    if (self) {
        _index = 0;
        _nameRepository = nameRepository;
    }
    return self;
}

- (BOOL)hasNext {
    return (_index < [[_nameRepository names] count]);
}

- (nonnull instancetype)next {
    return [[_nameRepository names] objectAtIndex:_index++];
}

@end

@implementation NameRepository

- (instancetype)init {
    self = [super init];
    if (self) {
        _names = [[NSArray alloc] initWithObjects:@"Robert", @"John", @"Julie", @"Lora", nil];
    }
    return self;
}

- (nonnull id<IteratorProtocol>)getIterator {
    return [[NameIterator alloc] initWithNameRepository:self];
}

@end
