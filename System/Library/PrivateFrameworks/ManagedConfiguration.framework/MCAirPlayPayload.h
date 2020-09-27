/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload {

	NSArray* _whitelistDestinations;
	NSArray* _destinationsWithPasswords;
	NSArray* _titlesAndDescriptions;

}

@property (nonatomic,retain) NSArray * titlesAndDescriptions;                  //@synthesize titlesAndDescriptions=_titlesAndDescriptions - In the implementation block
@property (nonatomic,retain) NSArray * whitelistDestinations;                  //@synthesize whitelistDestinations=_whitelistDestinations - In the implementation block
@property (nonatomic,retain) NSArray * destinationsWithPasswords;              //@synthesize destinationsWithPasswords=_destinationsWithPasswords - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setWhitelistDestinations:(NSArray *)arg1 ;
-(void)setDestinationsWithPasswords:(NSArray *)arg1 ;
-(NSArray *)whitelistDestinations;
-(NSArray *)destinationsWithPasswords;
-(NSArray *)titlesAndDescriptions;
-(void)setTitlesAndDescriptions:(NSArray *)arg1 ;
@end
