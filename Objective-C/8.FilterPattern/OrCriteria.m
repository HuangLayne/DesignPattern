//
//  OrCriteria.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "OrCriteria.h"

@implementation OrCriteria {
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
    NSMutableArray<Person *> *otherCriteriaItems = [_otherCriteria meetCriteria:persons];

    for (Person *person in otherCriteriaItems) {
        if (![firstCriteriaPersons containsObject:person]) {
            [firstCriteriaPersons addObject:person];
        }
    }
    return firstCriteriaPersons;
}

@end
