#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_17()
{
//=========Macro generated from canvas: ROC_H_mass_17/ROC_H_mass_17
//=========  (Tue Jan 24 15:01:26 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_17 = new TCanvas("ROC_H_mass_17", "ROC_H_mass_17",0,0,600,600);
   ROC_H_mass_17->SetHighLightColor(2);
   ROC_H_mass_17->Range(-0.2898722,-0.1615385,1.237447,1.184615);
   ROC_H_mass_17->SetFillColor(0);
   ROC_H_mass_17->SetBorderMode(0);
   ROC_H_mass_17->SetBorderSize(2);
   ROC_H_mass_17->SetGridx();
   ROC_H_mass_17->SetGridy();
   ROC_H_mass_17->SetLeftMargin(0.15709);
   ROC_H_mass_17->SetRightMargin(0.1234783);
   ROC_H_mass_17->SetBottomMargin(0.12);
   ROC_H_mass_17->SetFrameBorderMode(0);
   ROC_H_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx80[40] = {
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
   Double_t Graph_fy80[40] = {
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
   TGraph *graph = new TGraph(40,Graph_fx80,Graph_fy80);
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
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph80 = new TH1F("Graph_Graph80","Tagging Only",100,0,1.096972);
   Graph_Graph80->SetMinimum(0);
   Graph_Graph80->SetMaximum(1.097126);
   Graph_Graph80->SetDirectory(0);
   Graph_Graph80->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph80->SetLineColor(ci);
   Graph_Graph80->GetXaxis()->SetLabelFont(42);
   Graph_Graph80->GetXaxis()->SetTitleOffset(1);
   Graph_Graph80->GetXaxis()->SetTitleFont(42);
   Graph_Graph80->GetYaxis()->SetLabelFont(42);
   Graph_Graph80->GetYaxis()->SetTitleFont(42);
   Graph_Graph80->GetZaxis()->SetLabelFont(42);
   Graph_Graph80->GetZaxis()->SetTitleOffset(1);
   Graph_Graph80->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph80);
   
   TLatex *   tex = new TLatex(0.05843972,0.07416915,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(81);
      tex = new TLatex(0.1051168,0.08965822,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(82);
      tex = new TLatex(0.1560964,0.1088942,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(83);
      tex = new TLatex(0.2198776,0.1321617,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(84);
      tex = new TLatex(0.2969059,0.1709749,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(85);
      tex = new TLatex(0.3700778,0.2314674,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(86);
      tex = new TLatex(0.4352844,0.3091995,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(87);
      tex = new TLatex(0.496521,0.4124759,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(88);
      tex = new TLatex(0.5526927,0.5417706,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(89);
      tex = new TLatex(0.6031271,0.6751726,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(90);
      tex = new TLatex(0.6455994,0.7711677,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(91);
      tex = new TLatex(0.6836534,0.823579,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(92);
      tex = new TLatex(0.7163834,0.8528793,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(93);
      tex = new TLatex(0.7507204,0.8769878,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(94);
      tex = new TLatex(0.7788967,0.8986422,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(95);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx96[40] = {
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
   Double_t Graph_fy96[40] = {
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
   graph = new TGraph(40,Graph_fx96,Graph_fy96);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","Mass-Matching Prioritized",100,0,1.098802);
   Graph_Graph96->SetMinimum(0);
   Graph_Graph96->SetMaximum(1.1);
   Graph_Graph96->SetDirectory(0);
   Graph_Graph96->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph96->SetLineColor(ci);
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetTitleOffset(1);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetTitleOffset(1);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph96);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx97[40] = {
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
   Double_t Graph_fy97[40] = {
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
   graph = new TGraph(40,Graph_fx97,Graph_fy97);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph97 = new TH1F("Graph_Graph97","Tagging Prioritized",100,0,1.096956);
   Graph_Graph97->SetMinimum(0);
   Graph_Graph97->SetMaximum(1.096474);
   Graph_Graph97->SetDirectory(0);
   Graph_Graph97->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph97->SetLineColor(ci);
   Graph_Graph97->GetXaxis()->SetLabelFont(42);
   Graph_Graph97->GetXaxis()->SetTitleOffset(1);
   Graph_Graph97->GetXaxis()->SetTitleFont(42);
   Graph_Graph97->GetYaxis()->SetLabelFont(42);
   Graph_Graph97->GetYaxis()->SetTitleFont(42);
   Graph_Graph97->GetZaxis()->SetLabelFont(42);
   Graph_Graph97->GetZaxis()->SetTitleOffset(1);
   Graph_Graph97->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph97);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04994555, 1.048857);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
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
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_mass_17->Modified();
   ROC_H_mass_17->cd();
   ROC_H_mass_17->SetSelected(ROC_H_mass_17);
}
