/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REScriptToken, NSDictionary, REScriptASTNode, NSString;

@interface _RESymbolDefinition : NSObject {

	unsigned long long _type;
	REScriptToken* _token;
	NSDictionary* _options;
	REScriptASTNode* _value;
	id _objectValue;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) REScriptToken * token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) REScriptASTNode * value;                //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id objectValue;                         //@synthesize objectValue=_objectValue - In the implementation block
-(NSString *)name;
-(unsigned long long)type;
-(REScriptASTNode *)value;
-(void)setValue:(REScriptASTNode *)arg1 ;
-(NSDictionary *)options;
-(REScriptToken *)token;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(id)initWithToken:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

