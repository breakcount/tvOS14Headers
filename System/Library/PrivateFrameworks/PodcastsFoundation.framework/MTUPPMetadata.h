/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface MTUPPMetadata : NSManagedObject

@property (nonatomic,retain) NSString * metadataIdentifier; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double bookmarkTime; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (assign,nonatomic) long long playCount; 
@end

