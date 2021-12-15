/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_CIRC     GRAVE              // ^ (dead)
#define DE_SS       MINUS              // ß
#define DE_ACUT     EQUAL              // ´ (dead)

// Row 2
#define DE_Q        Q                  // Q
#define DE_W        W                  // W
#define DE_E        E                  // E
#define DE_R        R                  // R
#define DE_T        T                  // T
#define DE_Z        Y                  // Z
#define DE_U        U                  // U
#define DE_I        I                  // I
#define DE_O        O                  // O
#define DE_P        P                  // P
#define DE_UE       LEFT_BRACKET       // Ü
#define DE_PLUS     RIGHT_BRACKET      // +

// Row 3
#define DE_A        A                  // A
#define DE_S        S                  // S
#define DE_D        D                  // D
#define DE_F        F                  // F
#define DE_G        G                  // G
#define DE_H        H                  // H
#define DE_J        J                  // J
#define DE_K        K                  // K
#define DE_L        L                  // L
#define DE_OE       SEMICOLON          // Ö
#define DE_AE       SINGLE_QUOTE       // Ä
#define DE_HASH     NON_US_HASH        // #

// Row 4
#define DE_LABK     NON_US_BACKSLASH   // <
#define DE_Y        Z                  // Y
#define DE_X        X                  // X
#define DE_C        C                  // C
#define DE_V        V                  // V
#define DE_B        B                  // B
#define DE_N        N                  // N
#define DE_M        M                  // M
#define DE_COMM     COMMA              // ,
#define DE_DOT      PERIOD             // .
#define DE_MINS     SLASH              // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_DEG      LS(DE_CIRC)       // °
#define DE_EXLM     LS(NUMBER_1)      // !
#define DE_DQUO     LS(NUMBER_2)      // "
#define DE_SECT     LS(NUMBER_3)      // §
#define DE_DLR      LS(NUMBER_4)      // $
#define DE_PERC     LS(NUMBER_5)      // %
#define DE_AMPR     LS(NUMBER_6)      // &
#define DE_SLSH     LS(NUMBER_7)      // /
#define DE_LPRN     LS(NUMBER_8)      // (
#define DE_RPRN     LS(NUMBER_9)      // )
#define DE_EQL      LS(NUMBER_0)      // =
#define DE_QUES     LS(DE_SS)         // ?
#define DE_GRV      LS(DE_ACUT)       // ` (dead)
// Row 2
#define DE_ASTR     LS(DE_PLUS)       // *
// Row 3
#define DE_QUOT     LS(DE_HASH)       // '
// Row 4
#define DE_RABK     LS(DE_LABK)       // >
#define DE_SCLN     LS(DE_COMM)       // ;
#define DE_COLN     LS(DE_DOT)        // :
#define DE_UNDS     LS(DE_MINS)       // _

/* Alted symbols (Mac)
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_EURO     RA(DE_E)          // €
// Win
#define DE_W_LBRC   RA(NUMBER_8)      // [
#define DE_W_RBRC   RA(NUMBER_9)      // ]
#define DE_W_PIPE   RA(DE_LABK)       // |
#define DE_W_LCBR   RA(NUMBER_7)      // {
#define DE_W_RCBR   RA(NUMBER_0)      // }
#define DE_W_AT     RA(DE_Q)          // @
#define DE_W_TILD   RA(DE_PLUS)       // ~
// Mac
#define DE_M_LBRC   LA(NUMBER_5)      // [
#define DE_M_RBRC   LA(NUMBER_6)      // ]
#define DE_M_PIPE   LA(NUMBER_7)      // |
#define DE_M_LCBR   LA(NUMBER_8)      // {
#define DE_M_RCBR   LA(NUMBER_9)      // }
#define DE_M_AT     LA(DE_L)          // @
#define DE_M_TILD   LA(DE_N)          // ~

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
// Win
#define DE_W_BSLS   RA(DE_SS)         // (backslash)
// Mac
#define DE_M_BSLS   LS(LA(NUMBER_7))  // (backslash)
