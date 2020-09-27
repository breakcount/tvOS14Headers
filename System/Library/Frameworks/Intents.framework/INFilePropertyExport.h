/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INDateComponentsRange, INPerson, NSNumber;


@protocol INFilePropertyExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * qualifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) INDateComponentsRange * dateComponentsRange; 
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSNumber * quantity; 
@required
-(NSString *)name;
-(id)init;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setName:(id)arg1;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(INPerson *)person;
-(void)setPerson:(id)arg1;
-(NSNumber *)quantity;
-(void)setQuantity:(id)arg1;
-(NSString *)qualifier;
-(void)setQualifier:(id)arg1;
-(INDateComponentsRange *)dateComponentsRange;
-(void)setDateComponentsRange:(id)arg1;

@end
