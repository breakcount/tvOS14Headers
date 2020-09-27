/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISResourceMetadata.h>
@class NSString, NSNumber;


@protocol ISResourceMetadata <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSNumber * dimension; 
@property (readonly) NSNumber * scale; 
@property (readonly) BOOL selectedVariant; 
@required
-(NSString *)name;
-(NSNumber *)scale;
-(NSNumber *)dimension;
-(BOOL)selectedVariant;

@end


@class NSString, NSNumber;

@interface ISResourceMetadata : NSObject <ISResourceMetadata> {

	BOOL _selectedVariant;
	NSNumber* _diension;
	NSString* _name;
	NSNumber* _scale;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * dimension;                            //@synthesize diension=_diension - In the implementation block
@property (retain) NSNumber * scale;                                //@synthesize scale=_scale - In the implementation block
@property (assign) BOOL selectedVariant;                            //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataWithFileName:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)scale;
-(NSNumber *)dimension;
-(void)setScale:(NSNumber *)arg1 ;
-(void)setDimension:(NSNumber *)arg1 ;
-(BOOL)selectedVariant;
-(void)setSelectedVariant:(BOOL)arg1 ;
@end
