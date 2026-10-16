// volume_fade.inc.c

f32 proxFadeVolume = 1.f;
struct Object *proxFadeObject;
f32 proxFadeDist;
u64 proxFadeTimestamp;

void bhv_volume_fade() {
    // init and process last frame
    if (proxFadeTimestamp != gGlobalTimer) {
        proxFadeVolume = 1.f;
        if (proxFadeObject) {
            u16 near = GET_BPARAM12(proxFadeObject->oBehParams);
            u16 far = GET_BPARAM34(proxFadeObject->oBehParams);

            proxFadeVolume = (CLAMP(proxFadeDist, near, far) - near) / (far - near);
        }

        proxFadeTimestamp = gGlobalTimer;

        proxFadeDist = 65536;
        proxFadeObject = NULL;
    }

    u16 far = GET_BPARAM34(o->oBehParams);

    f32 dist = dist_between_objects(o, gMarioObject);
    if (dist < far && dist < proxFadeDist) {
        proxFadeObject = o;
        proxFadeDist = dist;
    }
}