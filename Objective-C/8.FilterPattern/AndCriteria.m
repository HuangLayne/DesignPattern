//
//  AndCriteria.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "AndCriteria.h"

@implementation AndCriteria {
    id<CriteriaProtocol> _criteria;
    id<CriteriaProtocol> _otherCriteria;
}

- (instancetype)initWithCriteria:(id<CriteriaProtocol>)criteria OtherCriteria:(id<CriteriaProtocol>)otherCriteria {
    self = [super init];
    if (self) {
        _criteria = criteria;
        _otherCriteria = otherCriteria;
    }
    return self;
    ;
}

- (nonnull NSMutableArray<Person *> *)meetCriteria:(nonnull NSMutableArray<Person *> *)persons {
    NSMutableArray<Person *> *firstCriteriaPersons = [_criteria meetCriteria:persons];
    return [_otherCriteria meetCriteria:firstCriteriaPersons];
}

@end
