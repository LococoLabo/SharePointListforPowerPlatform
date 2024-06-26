= 統合機能でSharePointリストをもっと便利に使いこなそう！
SharePointリストの「統合」機能は、他のMicrosoftサービスと連携するための機能です。
SharePointリストからは主に3つのMicrosoftサービスと連携することができます。
- Power Apps
- Power Automate
- Power BI

これらはPower Platformと呼ばれるMicrosoftのサービスで、以下のように活用できます。

* **Power Appsを使用すると**、SharePointリストをデータソースとしてカスタムアプリを作成し、データ入力や表示を直感的に行うことができます。
* **Power Automateを使用すると**、SharePointリストをトリガーとして自動化されたワークフローを作成し、手動の業務プロセスを効率化できます。
* **Power BIを使用すると**、SharePointリストのデータを視覚化し、レポートやダッシュボードを作成してデータの洞察を得ることができます。

この章では、これら3つについて簡単に使い方を説明していきます。

==== Power Platformって？

Power Platformは、Microsoftが提供するローコード開発ツール群の総称で、
Power Apps、Power Automate、Power BIの3つのサービスが含まれます。
これらのサービスは、企業のデジタルトランスフォーメーションを支援し、
業務プロセスの自動化、アプリケーションの迅速な開発、およびデータの可視化を実現します。

* **Power Apps**: カスタムアプリをすばやく開発できるプラットフォームです。
ドラッグ＆ドロップの直感的なインターフェースで、
コーディングの知識がなくてもアプリを作成できます。

* **Power Automate**: ワークフローの自動化ツールで、
様々なアプリケーションやサービス間でのデータの流れを自動化します。
手動で管理しなければならない作業の削減に役立ちます。

* **Power BI**: データの可視化ツールで、データを直感的に分析し、
インタラクティブなレポートを作成します。データに基づく意思決定を支援します。

== Power Apps

=== Power Appsについて

Power Appsは、ユーザーがカスタムビジネスアプリケーションを迅速に構築するためのプラットフォームです。
特にコーディングの経験がないビジネスユーザーでも、ドラッグ＆ドロップでアプリを作成できる点が特徴です。
アプリはモバイルデバイスやWebブラウザで動作し、SharePointリストをデータソースとして利用することで、さまざまなビジネスプロセスを効率化できます。

=== Power Appsの活用例

* **データ入力アプリ**: SharePointリストをデータソースに使用して、簡単なデータ入力フォームを作成。
* **プロジェクト管理アプリ**: プロジェクトの進捗状況を管理するためのアプリケーション。
* **顧客フィードバックアプリ**: 顧客からのフィードバックを収集し、SharePointリストに保存。

=== Power Appsで備品管理リストの入力をもっと良くしてみる！

Power Appsを使って、SharePointリスト「備品管理リスト」の入力フォームをカスタマイズし、ユーザーが簡単にデータを入力できるようにしてみましょう。

**手順**:
1. **Power Apps Studioを開く**: Office 365からPower Appsを起動し、新しいキャンバスアプリを作成します。
2. **データソースの追加**: SharePointリスト「備品管理リスト」をデータソースとして追加します。
3. **フォームのデザイン**: ドラッグ＆ドロップでテキストボックスやドロップダウンリストを配置し、フォームをデザインします。
4. **データバリデーション**: 入力チェックや必須項目を設定して、入力ミスを防ぎます。
5. **アプリの保存と公開**: 完成したアプリを保存し、公開します。

@image(power_apps_equipment_management.jpg)

== Power Automate

=== Power Automateについて

Power Automateは、業務プロセスを自動化するためのツールです。
SharePointリストと連携して、リストのデータを基に自動的にタスクを実行するワークフローを作成できます。例えば、新しいアイテムが追加されたときに通知を送信したり、承認プロセスを自動化することができます。

=== Power Automateの活用例

* **通知の自動送信**: リストにアイテムが追加された際に、担当者に通知を送る。
* **承認ワークフロー**: アイテムが追加または更新されたときに、承認者に自動で承認依頼を送る。
* **データの同期**: SharePointリストと他のシステム（例えばExcelやCRM）との間でデータを自動的に同期。

=== Power Automateのテンプレート一覧

Power Automateでは、多くのテンプレートが用意されており、簡単に利用することができます。

* **新規アイテム追加時のメール通知**
* **リストアイテム変更時の承認フロー**
* **リストデータの定期バックアップ**

各テンプレートは、利用シナリオに応じてカスタマイズ可能です。

@image(power_automate_templates.jpg)

=== Power Automateで備品管理リストに記録された際に通知を受け取る機能を追加してみる！

Power Automateを使用して、備品管理リストに新しいアイテムが追加された際に、担当者に通知を送るフローを作成しましょう。

**手順**:
1. **Power Automateを開く**: Office 365からPower Automateを起動し、新しいフローを作成します。
2. **トリガーの選択**: 「SharePoint - アイテムが作成されたとき」をトリガーとして選択します。
3. **アクションの追加**: 「メールを送信」アクションを追加し、送信先やメール内容を設定します。
4. **フローのテストと保存**: フローをテストし、正常に動作することを確認してから保存します。

@image(power_automate_equipment_notification.jpg)

== Power BI

=== Power BIについて

Power BIは、データの視覚化と分析を行うためのツールです。SharePointリストのデータをリアルタイムで表示し、インタラクティブなレポートやダッシュボードを作成することができます。これにより、ビジネスインサイトを得るための強力な手段となります。

=== Power BIの活用例

* **販売データのダッシュボード**: 販売実績やトレンドを視覚化。
* **プロジェクト進捗レポート**: プロジェクトの進捗状況をリアルタイムで表示。
* **顧客分析レポート**: 顧客の行動や傾向を分析し、マーケティング戦略に役立てる。

* **データ接続**: Power BI Desktopを使用して、SharePointリストのデータに接続します。
* **データモデリング**: データを適切にモデリングし、関係性を設定します。
* **ビジュアルの追加**: グラフやチャートを追加してデータを視覚化します。
* **ダッシュボードの共有**: 完成したレポートやダッシュボードをPower BIサービスを通じて共有します。

@image(power_bi_dashboard.jpg)
