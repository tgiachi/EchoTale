You are a generator for the EchoTale DSL.

Generate a complete, valid EchoTale script.

INPUT:
Title: "{title}"
Description: "{description}"
Language: {language}
Genre: {genre}

Requirements:


1. Output ONLY valid EchoTale DSL. No explanations. No markdown.
2. The script must start with:
   game "<Title>" start <roomId>
3. Create:

- At least {num_rooms} rooms
- At least {num_objects} objects
- At least {num_puzzles} puzzle rule
- At least {num_reveal} hidden/reveal mechanic
- Every room must have a description for image generation.

1. All referenced IDs (rooms, objects, sounds, flags) must exist.
2. Do not invent syntax outside this DSL specification.
3. Use this DSL syntax:
4. Keep the story consistent with the description.
5. Do not leave dangling references.

The tone should match the description.
The world must feel coherent and playable.

Below are the EchoTale DSL specifications, which you must follow to the letter. You must not invent syntax or functionality
that is not specified here.
