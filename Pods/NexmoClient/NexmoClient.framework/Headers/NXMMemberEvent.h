//
//  NXMMemberEvent.h
//  NexmoNClient
//
//  Copyright © 2018 Vonage. All rights reserved.
//

#import "NXMEvent.h"

@class NXMMember;
@class NXMUser;
@class NXMMediaSettings;
@class NXMChannel;

/**
 * Represents a member event that is received on an `NXMConversation`.
 */
@interface NXMMemberEvent : NXMEvent

/// The member of the event.
@property (nonatomic, readonly, nonnull) NXMMember *member;

/// The state of the member.
@property (nonatomic) NXMMemberState state;

/// The media settings of the member.
@property (nonatomic, readonly, nullable) NXMMediaSettings *media;

/// The member's `NXMChannel` data.
@property (nonatomic, readonly, nullable) NXMChannel *channel;

/// The knocking ID.
@property (nonatomic, copy, nullable) NSString *knockingId;
@property (nonatomic, readonly, nullable) NSString *invitedBy;

@end
