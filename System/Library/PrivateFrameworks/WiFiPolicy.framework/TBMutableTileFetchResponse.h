/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TBFetchResponse.h>

@class NSArray, NSError, NSSet, NSDictionary, NSMutableSet, NSString;

@interface TBMutableTileFetchResponse : NSObject <TBFetchResponse> {

	NSError* error;
	NSArray* results;
	NSDictionary* resultsByBSSID;
	NSMutableSet* _mutableTiles;

}

@property (nonatomic,retain) NSMutableSet * mutableTiles;                  //@synthesize mutableTiles=_mutableTiles - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSError *)error;
-(NSArray *)results;
-(NSSet *)tiles;
-(void)addResponse:(id)arg1 ;
-(NSDictionary *)resultsByBSSID;
-(NSMutableSet *)mutableTiles;
-(void)setMutableTiles:(NSMutableSet *)arg1 ;
@end
