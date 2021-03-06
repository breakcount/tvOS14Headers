/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData;

@interface ACFHTTPMethod : NSObject {

	NSString* _name;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (retain) NSData * body;                            //@synthesize body=_body - In the implementation block
+(id)method;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id*)arg4 ;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end

