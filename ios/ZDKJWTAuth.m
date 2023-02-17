#import "ZDKJWTAuth.h"

@implementation ZDKJWTAuth

- (void)getToken:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    completion(self.token, NULL);
}

-(instancetype)initWithToken:(NSString *)token {
    self = [super init];
    if (self) {
        _token = token;
    }
    
    return self;
}

@end

