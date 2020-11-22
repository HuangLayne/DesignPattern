//
//  CriteriaSingle.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "CriteriaSingle.h"

@implementation CriteriaSingle

- (nonnull NSMutableArray<Person *> *)meetCriteria:(nonnull NSMutableArray<Person *> *)persons {
    NSMutableArray<Person *> *singlePersons = [[NSMutableArray alloc] init];
    for (Person *person in persons) {
        if (NSOrderedSame == [person.maritalStatus compare:@"SINGLE" options:NSCaseInsensitiveSearch]) {
            [singlePersons addObject:person];
        }
    }
    return singlePersons;
}

@end
