/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCKeyValueSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSArray* _sectionKeyValues;

}

@property (nonatomic,retain) NSString * sectionTitle;                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSArray * sectionKeyValues;              //@synthesize sectionKeyValues=_sectionKeyValues - In the implementation block
+(id)sectionWithLocalizedArray:(id)arg1 title:(id)arg2 footer:(id)arg3 ;
+(id)sectionWithKeyValues:(id)arg1 ;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 keyValues:(id)arg3 ;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
-(NSArray *)sectionKeyValues;
-(void)setSectionKeyValues:(NSArray *)arg1 ;
@end

