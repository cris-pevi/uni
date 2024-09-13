function loadMarkdown(file) {
    fetch(file)
        .then(response => response.text())
        .then(text => {
            const md = window.markdownit({
                html: true,          // Permitir HTML dentro de Markdown
                linkify: true,       // Convertir URLs en enlaces
                typographer: true    // Aplicar transformaciones tipográficas inteligentes
            });
            const html = md.render(text);
            document.getElementById('content').innerHTML = html;
        })
        .catch(error => console.error('Error cargando el archivo:', error));
}
