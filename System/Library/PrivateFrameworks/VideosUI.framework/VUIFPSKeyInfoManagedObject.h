/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData, NSURL, NSNumber, VUIVideoManagedObject;

@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL allowsManualRenewal; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) BOOL isInvalid; 
@property (assign,nonatomic) BOOL isLowValue; 
@property (nonatomic,retain) NSData * keyData; 
@property (nonatomic,copy) NSURL * keyURI; 
@property (nonatomic,copy) NSNumber * playbackDuration; 
@property (nonatomic,copy) NSDate * playbackExpirationStartDate; 
@property (nonatomic,copy) NSDate * renewalDate; 
@property (nonatomic,copy) NSNumber * renewalInterval; 
@property (nonatomic,copy) NSDate * retrievalDate; 
@property (nonatomic,retain) VUIVideoManagedObject * video; 
+(id)fetchRequest;
@end

