/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INPriceRange;


@protocol INRidePartySizeOptionExport <NSObject,JSExport>
@property (assign,nonatomic) NSRange partySizeRange; 
@property (nonatomic,copy) NSString * sizeDescription; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@required
-(id)init;
-(void)setPriceRange:(id)arg1;
-(INPriceRange *)priceRange;
-(NSRange)partySizeRange;
-(void)setPartySizeRange:(NSRange)arg1;
-(NSString *)sizeDescription;
-(void)setSizeDescription:(id)arg1;

@end

