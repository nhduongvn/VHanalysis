#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_17/ROC_Z_dR_Bj1_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_17 = new TCanvas("ROC_Z_dR_Bj1_17", "ROC_Z_dR_Bj1_17",0,0,600,600);
   ROC_Z_dR_Bj1_17->SetHighLightColor(2);
   ROC_Z_dR_Bj1_17->Range(-0.2901876,-0.1615385,1.238794,1.184615);
   ROC_Z_dR_Bj1_17->SetFillColor(0);
   ROC_Z_dR_Bj1_17->SetBorderMode(0);
   ROC_Z_dR_Bj1_17->SetBorderSize(2);
   ROC_Z_dR_Bj1_17->SetGridx();
   ROC_Z_dR_Bj1_17->SetGridy();
   ROC_Z_dR_Bj1_17->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj1_17->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj1_17->SetBottomMargin(0.12);
   ROC_Z_dR_Bj1_17->SetFrameBorderMode(0);
   ROC_Z_dR_Bj1_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx175[30] = {
   0,
   0.03272027,
   0.1903723,
   0.3445854,
   0.4643174,
   0.5492117,
   0.6211447,
   0.6775741,
   0.725058,
   0.7682642,
   0.8032623,
   0.836736,
   0.8633852,
   0.889379,
   0.9112142,
   0.9323446,
   0.9533015,
   0.9685528,
   0.9775872,
   0.9855421,
   0.9897414,
   0.9936223,
   0.995452,
   0.9974181,
   0.9985046,
   0.999107,
   0.9996912,
   0.9999008,
   0.9999308,
   0.9999853};
   Double_t Graph_fy175[30] = {
   0,
   0.04061373,
   0.1922462,
   0.3739365,
   0.5236371,
   0.6380417,
   0.7193699,
   0.7792431,
   0.8222411,
   0.8578469,
   0.884059,
   0.9069432,
   0.9272779,
   0.9431031,
   0.958065,
   0.9715053,
   0.9824424,
   0.9903952,
   0.9938752,
   0.9959867,
   0.9970862,
   0.9977987,
   0.9989005,
   0.9990999,
   0.9996457,
   0.9998717,
   0.9999797,
   0.9999797,
   0.9999898,
   1};
   TGraph *graph = new TGraph(30,Graph_fx175,Graph_fy175);
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
   
   TH1F *Graph_Graph175 = new TH1F("Graph_Graph175","Tagging Only",100,0,1.099984);
   Graph_Graph175->SetMinimum(0);
   Graph_Graph175->SetMaximum(1.1);
   Graph_Graph175->SetDirectory(0);
   Graph_Graph175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph175->SetLineColor(ci);
   Graph_Graph175->GetXaxis()->SetLabelFont(42);
   Graph_Graph175->GetXaxis()->SetTitleOffset(1);
   Graph_Graph175->GetXaxis()->SetTitleFont(42);
   Graph_Graph175->GetYaxis()->SetLabelFont(42);
   Graph_Graph175->GetYaxis()->SetTitleFont(42);
   Graph_Graph175->GetZaxis()->SetLabelFont(42);
   Graph_Graph175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph175->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph175);
   
   TLatex *   tex = new TLatex(0.189996,0.2941867,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(176);
      tex = new TLatex(0.3429132,0.4768983,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(177);
      tex = new TLatex(0.4867527,0.660676,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(178);
      tex = new TLatex(0.6010149,0.8295773,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(179);
      tex = new TLatex(0.6814157,0.8784702,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(180);
      tex = new TLatex(0.7432368,0.9349556,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(181);
      tex = new TLatex(0.8088465,0.969199,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(182);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx183[30] = {
   0,
   0.0004097154,
   0.1444964,
   0.3435365,
   0.4867527,
   0.6010149,
   0.6814157,
   0.7432368,
   0.8088465,
   0.8502908,
   0.8772242,
   0.9037435,
   0.9229301,
   0.937485,
   0.9472165,
   0.9656892,
   0.9766991,
   0.9821085,
   0.9880852,
   0.9926388,
   0.9945505,
   0.9981461,
   0.9989505,
   0.9991385,
   0.9996767,
   0.9998199,
   0.9998277,
   0.9998708,
   0.999996,
   0.9999981};
   Double_t Graph_fy183[30] = {
   0,
   0.0004085703,
   0.09781628,
   0.3277095,
   0.560676,
   0.7295773,
   0.8384702,
   0.8949556,
   0.929199,
   0.9543987,
   0.9672541,
   0.9727921,
   0.9797272,
   0.9827005,
   0.987403,
   0.9917733,
   0.9941667,
   0.9960857,
   0.9976435,
   0.9980995,
   0.9988692,
   0.9988692,
   0.9992303,
   0.9995914,
   0.9999526,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx183,Graph_fy183);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph183 = new TH1F("Graph_Graph183","Mass-Matching Prioritized",100,0,1.099998);
   Graph_Graph183->SetMinimum(0);
   Graph_Graph183->SetMaximum(1.1);
   Graph_Graph183->SetDirectory(0);
   Graph_Graph183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph183->SetLineColor(ci);
   Graph_Graph183->GetXaxis()->SetLabelFont(42);
   Graph_Graph183->GetXaxis()->SetTitleOffset(1);
   Graph_Graph183->GetXaxis()->SetTitleFont(42);
   Graph_Graph183->GetYaxis()->SetLabelFont(42);
   Graph_Graph183->GetYaxis()->SetTitleFont(42);
   Graph_Graph183->GetZaxis()->SetLabelFont(42);
   Graph_Graph183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph183->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph183);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx184[30] = {
   0,
   0.03263805,
   0.189996,
   0.3429132,
   0.4634142,
   0.548591,
   0.6204613,
   0.6771581,
   0.7250786,
   0.7685496,
   0.8033805,
   0.8369497,
   0.8634736,
   0.8896213,
   0.9114708,
   0.9326073,
   0.953525,
   0.9686101,
   0.977701,
   0.9856381,
   0.9898339,
   0.9936838,
   0.9955382,
   0.9974388,
   0.9985044,
   0.9991222,
   0.9996957,
   0.9999017,
   0.9999321,
   0.9999855};
   Double_t Graph_fy184[30] = {
   0,
   0.04129126,
   0.1941867,
   0.3768983,
   0.5261143,
   0.6402739,
   0.7207464,
   0.7807508,
   0.8237308,
   0.8591888,
   0.8853943,
   0.9082032,
   0.9282717,
   0.9435739,
   0.9581627,
   0.9718113,
   0.9825242,
   0.9904461,
   0.9938421,
   0.9959682,
   0.997232,
   0.9979273,
   0.9990025,
   0.9991972,
   0.9996543,
   0.9998748,
   0.9999802,
   0.9999802,
   0.9999901,
   1};
   graph = new TGraph(30,Graph_fx184,Graph_fy184);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph184 = new TH1F("Graph_Graph184","Tagging Prioritized",100,0,1.099984);
   Graph_Graph184->SetMinimum(0);
   Graph_Graph184->SetMaximum(1.1);
   Graph_Graph184->SetDirectory(0);
   Graph_Graph184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph184->SetLineColor(ci);
   Graph_Graph184->GetXaxis()->SetLabelFont(42);
   Graph_Graph184->GetXaxis()->SetTitleOffset(1);
   Graph_Graph184->GetXaxis()->SetTitleFont(42);
   Graph_Graph184->GetYaxis()->SetLabelFont(42);
   Graph_Graph184->GetYaxis()->SetTitleFont(42);
   Graph_Graph184->GetZaxis()->SetLabelFont(42);
   Graph_Graph184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph184->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph184);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999991, 1.049998);
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
   ROC_Z_dR_Bj1_17->Modified();
   ROC_Z_dR_Bj1_17->cd();
   ROC_Z_dR_Bj1_17->SetSelected(ROC_Z_dR_Bj1_17);
}
