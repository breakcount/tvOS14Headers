/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol INIntentResponseDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) Class facadeClass; 
@property (nonatomic,readonly) Class dataClass; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,copy,readonly) NSDictionary * slotsByName; 
@required
-(NSString *)name;
-(id)init;
-(NSString *)type;
-(Class)facadeClass;
-(Class)dataClass;
-(BOOL)isPrivate;
-(NSDictionary *)slotsByName;

@end
