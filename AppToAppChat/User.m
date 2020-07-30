//
//  User.m
//  AppToAppChat
//
//  Created by Abdulhakim Ajetunmobi on 24/07/2020.
//  Copyright © 2020 Vonage. All rights reserved.
//

#import "User.h"

@implementation User

- (instancetype)initWithName:(NSString *)name uuid:(NSString *)uuid jwt:(NSString *)jwt chatPartnerName:(NSString *)chatPartnerName {
    if (self = [super init])
    {
        _name = name;
        _uuid = uuid;
        _jwt = jwt;
        _chatPartnerName = chatPartnerName;
        _conversationId = @"CONVERSATION_ID";
    }
    return self;
}

+ (instancetype)Alice {
    return [[User alloc] initWithName:@"Alice" uuid:@"ALICE_USERID" jwt:@"ALICE_JWT" chatPartnerName:@"Bob"];
}

+ (instancetype)Bob {
    return [[User alloc] initWithName:@"Bob" uuid:@"BOB_USERID" jwt:@"BOB_JWT" chatPartnerName:@"Alice"];
}

@end
