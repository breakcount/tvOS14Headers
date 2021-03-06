/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BMDiscoverabilitySignalEvent : NSObject {

	NSString* _identifier;
	NSString* _bundleID;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(NSString *)bundleID;
-(NSString *)context;
-(id)initWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
@end

