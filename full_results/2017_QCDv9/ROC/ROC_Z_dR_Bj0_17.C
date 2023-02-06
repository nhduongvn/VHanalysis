#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_17/ROC_Z_dR_Bj0_17
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_17 = new TCanvas("ROC_Z_dR_Bj0_17", "ROC_Z_dR_Bj0_17",0,0,600,600);
   ROC_Z_dR_Bj0_17->SetHighLightColor(2);
   ROC_Z_dR_Bj0_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_17->SetFillColor(0);
   ROC_Z_dR_Bj0_17->SetBorderMode(0);
   ROC_Z_dR_Bj0_17->SetBorderSize(2);
   ROC_Z_dR_Bj0_17->SetGridx();
   ROC_Z_dR_Bj0_17->SetGridy();
   ROC_Z_dR_Bj0_17->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_17->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_17->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_17->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx151[30] = {
   0,
   0.0326444,
   0.1796633,
   0.3261498,
   0.4447014,
   0.5418646,
   0.6148689,
   0.6767437,
   0.7278815,
   0.7677338,
   0.8064923,
   0.8406869,
   0.8672604,
   0.8913672,
   0.9149941,
   0.934058,
   0.9522439,
   0.9635153,
   0.9750039,
   0.9830718,
   0.9891652,
   0.9920559,
   0.9957087,
   0.9971356,
   0.9981726,
   0.9989236,
   0.9991513,
   0.9995347,
   0.9998838,
   0.9999882};
   Double_t Graph_fy151[30] = {
   0,
   0.04003556,
   0.1812225,
   0.358919,
   0.5063596,
   0.6214019,
   0.7067726,
   0.7662982,
   0.8120172,
   0.8461316,
   0.8752386,
   0.9014488,
   0.9192947,
   0.9345981,
   0.9493298,
   0.9644706,
   0.9765112,
   0.9854579,
   0.9904094,
   0.9945144,
   0.9968545,
   0.9980832,
   0.9989813,
   0.9990674,
   0.9995768,
   0.9998417,
   0.9999828,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx151,Graph_fy151);
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
   
   TH1F *Graph_Graph151 = new TH1F("Graph_Graph151","Tagging Only",100,0,1.099987);
   Graph_Graph151->SetMinimum(0);
   Graph_Graph151->SetMaximum(1.1);
   Graph_Graph151->SetDirectory(0);
   Graph_Graph151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph151->SetLineColor(ci);
   Graph_Graph151->GetXaxis()->SetLabelFont(42);
   Graph_Graph151->GetXaxis()->SetTitleOffset(1);
   Graph_Graph151->GetXaxis()->SetTitleFont(42);
   Graph_Graph151->GetYaxis()->SetLabelFont(42);
   Graph_Graph151->GetYaxis()->SetTitleFont(42);
   Graph_Graph151->GetZaxis()->SetLabelFont(42);
   Graph_Graph151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph151->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph151);
   
   TLatex *   tex = new TLatex(0.3154182,0.4163665,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(152);
      tex = new TLatex(0.5032637,0.7320114,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(153);
      tex = new TLatex(0.6703762,0.8973959,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(154);
      tex = new TLatex(0.764579,0.9339559,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(155);
      tex = new TLatex(0.8305781,0.9800759,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(156);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx157[30] = {
   0,
   0.04932702,
   0.3154182,
   0.5032637,
   0.6703762,
   0.764579,
   0.8305781,
   0.8914833,
   0.9173433,
   0.942617,
   0.9552501,
   0.9650947,
   0.974854,
   0.9838383,
   0.9889997,
   0.9935954,
   0.9941311,
   0.9963346,
   0.9966584,
   0.9971217,
   0.9974286,
   0.9994499,
   0.999486,
   0.9996569,
   0.9996604,
   0.9999962,
   0.9999992,
   0.9999995,
   0.9999998,
   0.9999999};
   Double_t Graph_fy157[30] = {
   0,
   0.04937486,
   0.3163665,
   0.6320114,
   0.7973959,
   0.8939559,
   0.9400759,
   0.9658633,
   0.978946,
   0.9862089,
   0.9913333,
   0.9948887,
   0.9970967,
   0.9973748,
   0.9985136,
   0.9991525,
   0.9991525,
   0.9992916,
   0.9998609,
   0.9999305,
   0.9999305,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx157,Graph_fy157);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph157 = new TH1F("Graph_Graph157","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph157->SetMinimum(0);
   Graph_Graph157->SetMaximum(1.1);
   Graph_Graph157->SetDirectory(0);
   Graph_Graph157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph157->SetLineColor(ci);
   Graph_Graph157->GetXaxis()->SetLabelFont(42);
   Graph_Graph157->GetXaxis()->SetTitleOffset(1);
   Graph_Graph157->GetXaxis()->SetTitleFont(42);
   Graph_Graph157->GetYaxis()->SetLabelFont(42);
   Graph_Graph157->GetYaxis()->SetTitleFont(42);
   Graph_Graph157->GetZaxis()->SetLabelFont(42);
   Graph_Graph157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph157->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph157);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx158[30] = {
   0,
   0.03305231,
   0.1792255,
   0.3255825,
   0.443854,
   0.5417185,
   0.6144464,
   0.6763031,
   0.7277982,
   0.7678021,
   0.8064326,
   0.8408046,
   0.8673473,
   0.8912479,
   0.9146151,
   0.9335637,
   0.9518555,
   0.9631485,
   0.9749306,
   0.9830716,
   0.9891788,
   0.9920758,
   0.9956931,
   0.9971066,
   0.9981883,
   0.9989451,
   0.9991684,
   0.9995456,
   0.9998863,
   0.9999881};
   Double_t Graph_fy158[30] = {
   0,
   0.04119806,
   0.1855122,
   0.3641666,
   0.5103599,
   0.6245261,
   0.7073209,
   0.7661335,
   0.8116269,
   0.8448547,
   0.8727156,
   0.8980796,
   0.9173044,
   0.9334661,
   0.9487714,
   0.9645017,
   0.9773509,
   0.9859463,
   0.9911442,
   0.9946923,
   0.9972427,
   0.9984177,
   0.9991262,
   0.9992,
   0.999637,
   0.9998642,
   0.9999852,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx158,Graph_fy158);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph158 = new TH1F("Graph_Graph158","Tagging Prioritized",100,0,1.099987);
   Graph_Graph158->SetMinimum(0);
   Graph_Graph158->SetMaximum(1.1);
   Graph_Graph158->SetDirectory(0);
   Graph_Graph158->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph158->SetLineColor(ci);
   Graph_Graph158->GetXaxis()->SetLabelFont(42);
   Graph_Graph158->GetXaxis()->SetTitleOffset(1);
   Graph_Graph158->GetXaxis()->SetTitleFont(42);
   Graph_Graph158->GetYaxis()->SetLabelFont(42);
   Graph_Graph158->GetYaxis()->SetTitleFont(42);
   Graph_Graph158->GetZaxis()->SetLabelFont(42);
   Graph_Graph158->GetZaxis()->SetTitleOffset(1);
   Graph_Graph158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph158);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999999, 1.05);
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
   ROC_Z_dR_Bj0_17->Modified();
   ROC_Z_dR_Bj0_17->cd();
   ROC_Z_dR_Bj0_17->SetSelected(ROC_Z_dR_Bj0_17);
}
