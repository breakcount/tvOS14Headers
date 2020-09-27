/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	NSMutableDictionary* _parsedTokenResults;

}

@property (nonatomic,copy,readonly) NSString * serverInstance; 
@property (nonatomic,copy,readonly) NSDictionary * tokenResults; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)serverInstance;
-(NSDictionary *)tokenResults;
-(id)tokenResultForAccountDSID:(id)arg1 ;
@end

