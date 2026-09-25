# Crown & Chaos — expansion experiment

This branch is a separate technical experiment for evaluating pokeemerald-expansion as a foundation for Crown & Chaos.

## Rules for this experiment

- Keep the existing Butano Crown & Chaos project untouched.
- Preserve Crown & Chaos story and character decisions rather than treating this as a replacement design.
- First prove the fork can build reliably in GitHub Actions and produce a testable GBA artifact.
- Migrate content in small, reversible steps after the baseline build is green.
- Use original Crown & Chaos art and content for new material.

## Initial migration targets

1. Establish a reproducible CI build.
2. Create a Crown & Chaos test entry point/title identity.
3. Prototype John and Crownhaven.
4. Prototype Tideling as John's starter.
5. Compare battle, party, save, map and event workflows with the existing Butano build.

No decision to abandon the existing project is implied by this branch.

CI trigger marker: workflows enabled on fork.


## Revised scope: enhanced-adventure route

We are no longer replacing the whole base adventure. Keep the mature engine, world structure, battles, catching, party, PC, items, shops, saving, and most existing content intact, then layer Crown & Chaos features on top.

Priority custom features:
1. Customisable player character (John), starting with practical appearance choices.
2. Candy as a recurring character with an optional love-story arc woven into selected events.
3. Special Eevee: bright blue eyes, white diamond-like marking, mystery revealed gradually.
4. A unique late-game evolution for the special Eevee, using original Crown & Chaos art/data.
5. Add a small curated roster of original Fakemon, beginning with Tideling and Emberoo.
6. Add only the custom locations/events needed to support these arcs rather than rebuilding every map.

Development rule: preserve existing systems wherever possible and make small reversible changes with a green CI build after each milestone.


## Player customisation implementation plan

The existing new-game flow already selects a player presentation and name before entering the world. Preserve that stable flow for the first playable custom build.

Phase A (safe first implementation):
- John remains the player's chosen name; do not hard-code it into save data.
- Treat the existing two player avatar sets as the first appearance presets while the custom art is prepared.
- Keep all movement modes (walking, bike, surf, field move, fishing, watering) mapped consistently to the selected preset.
- Do not alter the save-block layout for cosmetic choices yet.

Phase B:
- Add original Crown & Chaos player sprite/palette sets and a simple appearance-choice screen.
- Persist the cosmetic preset only after the sprite pipeline and CI build are proven.
- Keep appearance cosmetic: it must not alter story progression, battles, stats, or compatibility with existing maps.

This staged approach avoids a save-format change before the first customised ROM is testable.
