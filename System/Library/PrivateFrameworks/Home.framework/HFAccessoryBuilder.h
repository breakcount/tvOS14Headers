/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>
#import <libobjc.A.dylib/HFNamedItemBuilder.h>

@class NSString, HFRoomBuilder, NSArray, HFNamingComponents, HMAccessory;

@interface HFAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder, HFNamedItemBuilder> {

	BOOL isFavorite;
	BOOL _skipPropagateFavoriteToServices;
	NSString* name;
	HFRoomBuilder* room;
	HFNamingComponents* _namingComponent;

}

@property (nonatomic,retain) HFNamingComponents * namingComponent;              //@synthesize namingComponent=_namingComponent - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL skipPropagateFavoriteToServices;              //@synthesize skipPropagateFavoriteToServices=_skipPropagateFavoriteToServices - In the implementation block
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)originalName;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(HMAccessory *)accessory;
-(HFRoomBuilder *)room;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(id)accessories;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(void)setSkipPropagateFavoriteToServices:(BOOL)arg1 ;
-(HFNamingComponents *)namingComponent;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(BOOL)_shouldUpdateNilNameWithRoomName;
-(BOOL)skipPropagateFavoriteToServices;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
@end

