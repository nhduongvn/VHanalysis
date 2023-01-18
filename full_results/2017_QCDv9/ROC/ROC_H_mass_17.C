#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_17()
{
//=========Macro generated from canvas: ROC_H_mass_17/ROC_H_mass_17
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_17 = new TCanvas("ROC_H_mass_17", "ROC_H_mass_17",0,0,600,600);
   ROC_H_mass_17->SetHighLightColor(2);
   ROC_H_mass_17->Range(0,0,1,1);
   ROC_H_mass_17->SetFillColor(0);
   ROC_H_mass_17->SetBorderMode(0);
   ROC_H_mass_17->SetBorderSize(2);
   ROC_H_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx13[40] = {
   0,
   0,
   0.0006787914,
   0.01815357,
   0.05843972,
   0.1051168,
   0.1560964,
   0.2198776,
   0.2969059,
   0.3700778,
   0.4352844,
   0.496521,
   0.5526927,
   0.6031271,
   0.6455994,
   0.6836534,
   0.7163834,
   0.7507204,
   0.7788967,
   0.8031848,
   0.8249833,
   0.8457373,
   0.8652462,
   0.8797585,
   0.8933086,
   0.9058192,
   0.9170747,
   0.9270282,
   0.9368143,
   0.9451745,
   0.952894,
   0.9593789,
   0.9658379,
   0.9709881,
   0.9761326,
   0.981051,
   0.9856244,
   0.989536,
   0.9941481,
   0.9972474};
   Double_t Graph_fy13[40] = {
   0,
   0,
   0.0003376048,
   0.003525554,
   0.01416915,
   0.02965822,
   0.04889421,
   0.07216172,
   0.1109749,
   0.1714674,
   0.2491995,
   0.3524759,
   0.4817706,
   0.6151726,
   0.7111677,
   0.763579,
   0.7928793,
   0.8169878,
   0.8386422,
   0.8569386,
   0.8718902,
   0.8860884,
   0.8996219,
   0.9124284,
   0.9225733,
   0.9313115,
   0.9396673,
   0.9468725,
   0.9528739,
   0.9611013,
   0.9655039,
   0.9704873,
   0.9754104,
   0.979328,
   0.9833483,
   0.9874335,
   0.9900733,
   0.9933013,
   0.995412,
   0.9973869};
   TGraph *graph = new TGraph(40,Graph_fx13,Graph_fy13);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Tagging Only",100,0,1.096972);
   Graph_Graph13->SetMinimum(0);
   Graph_Graph13->SetMaximum(1.097126);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx14[40] = {
   0,
   0,
   1.181425e-08,
   0.006113192,
   0.04569135,
   0.1033852,
   0.163008,
   0.225406,
   0.2866122,
   0.3519944,
   0.4221732,
   0.4902101,
   0.5551954,
   0.6257305,
   0.683811,
   0.7258879,
   0.7682979,
   0.8018273,
   0.8307862,
   0.8621501,
   0.8861063,
   0.907347,
   0.9200424,
   0.9308762,
   0.940086,
   0.949661,
   0.9576459,
   0.962758,
   0.9677666,
   0.9730129,
   0.9764312,
   0.9796371,
   0.9829055,
   0.9857627,
   0.9882817,
   0.9907123,
   0.993284,
   0.9956553,
   0.997393,
   0.9989111};
   Double_t Graph_fy14[40] = {
   0,
   0,
   0,
   0,
   0.002046798,
   0.008333196,
   0.01399694,
   0.02277898,
   0.05228625,
   0.09498095,
   0.1733371,
   0.2891961,
   0.4539945,
   0.6517676,
   0.8089654,
   0.8682229,
   0.8908829,
   0.9135982,
   0.927478,
   0.9394018,
   0.9467539,
   0.9553044,
   0.9613244,
   0.9648367,
   0.9685859,
   0.9728587,
   0.9739707,
   0.9759789,
   0.9808484,
   0.9835669,
   0.9855295,
   0.9871899,
   0.9916271,
   0.992852,
   0.994534,
   0.9967809,
   0.9981749,
   0.9986928,
   0.9995053,
   1};
   graph = new TGraph(40,Graph_fx14,Graph_fy14);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Mass-Matching Prioritized",100,0,1.098802);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(1.1);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx15[40] = {
   0,
   0,
   0.0006619202,
   0.01817782,
   0.05797004,
   0.1045509,
   0.1556673,
   0.2187603,
   0.2951494,
   0.3676881,
   0.4334704,
   0.495372,
   0.5516451,
   0.6030541,
   0.6454372,
   0.6838108,
   0.7162978,
   0.7505585,
   0.7785765,
   0.8031546,
   0.8248125,
   0.8456491,
   0.8651111,
   0.8795231,
   0.8930638,
   0.9057774,
   0.916969,
   0.926898,
   0.9368544,
   0.9451439,
   0.9527833,
   0.9594003,
   0.9657954,
   0.9709811,
   0.976214,
   0.9810942,
   0.9856942,
   0.9895782,
   0.9941451,
   0.9972324};
   Double_t Graph_fy15[40] = {
   0,
   0,
   0.0002916706,
   0.003122889,
   0.01384678,
   0.03003026,
   0.05032211,
   0.0743876,
   0.1143603,
   0.1737304,
   0.250489,
   0.3491205,
   0.4713093,
   0.5957201,
   0.6886021,
   0.7406119,
   0.7722057,
   0.7981323,
   0.8207304,
   0.8408019,
   0.8562434,
   0.8724356,
   0.8878436,
   0.9011718,
   0.9126311,
   0.92257,
   0.9316947,
   0.9396634,
   0.9463054,
   0.9558633,
   0.9609767,
   0.9668116,
   0.9724203,
   0.9768319,
   0.9809204,
   0.985606,
   0.9887832,
   0.9921257,
   0.9945317,
   0.9967944};
   graph = new TGraph(40,Graph_fx15,Graph_fy15);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Tagging Prioritized",100,0,1.096956);
   Graph_Graph15->SetMinimum(0);
   Graph_Graph15->SetMaximum(1.096474);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetTitleOffset(1);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetTitleOffset(1);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04994555, 1.048857);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.122807,0.3,0.332807,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ROC_H_mass_17->Modified();
   ROC_H_mass_17->cd();
   ROC_H_mass_17->SetSelected(ROC_H_mass_17);
}
