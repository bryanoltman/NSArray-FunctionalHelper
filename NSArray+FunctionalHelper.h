//
//  NSArray+FunctionalHelper.h
//  Hudl
//
//  Created by Erik Person on 3/24/11.
//  Copyright 2011 Agile Sports Technologies, Inc. All rights reserved.
//

@interface NSArray (FunctionalHelper)
- (BOOL)all:(BOOL (^)(id obj))testBlock;
- (BOOL)any:(BOOL (^)(id obj))testBlock;
- (id)first;
- (id)find:(BOOL (^)(id obj))testBlock;
- (NSArray *)where:(BOOL (^)(id obj))textBlock;
- (void)each:(void (^)(id obj))block;
- (NSArray *)map:(id (^)(id obj))block;
- (NSArray *)select:(id (^)(id obj))block;
- (NSArray *)selectMany:(NSArray *(^)(id obj))block;
- (NSArray *)distinct;
- (NSDictionary *)toDictionary:(id (^)(id obj))block;
- (CGFloat)sum:(CGFloat (^)(id obj))block;
- (NSArray *)skip:(NSUInteger)count;
- (NSArray *)take:(NSUInteger)count;
- (NSArray *)reverse;
- (NSArray *)without:(id)object;
- (id)minimum:(id (^)(id obj))block;
- (id)maximum:(id (^)(id obj))block;
@end

@interface NSSet (FunctionalHelper)
- (BOOL)all:(BOOL (^)(id obj))testBlock;
- (BOOL)any:(BOOL (^)(id obj))testBlock;
- (id)find:(BOOL (^)(id obj))testBlock;
- (NSSet *)where:(BOOL (^)(id obj))textBlock;
- (void)each:(void (^)(id obj))block;
- (NSSet *)map:(id (^)(id obj))block;
- (NSSet *)select:(id (^)(id obj))block;
- (NSSet *)selectMany:(NSArray *(^)(id obj))block;
- (NSDictionary *)toDictionary:(id (^)(id obj))block;
- (CGFloat)sum:(CGFloat (^)(id obj))block;
- (NSSet *)without:(id)object;
- (id)minimum:(id (^)(id obj))block;
- (id)maximum:(id (^)(id obj))block;
@end
