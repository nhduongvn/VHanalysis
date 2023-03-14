#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_17()
{
//=========Macro generated from canvas: ROC_dR_HZ_17/ROC_dR_HZ_17
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_17 = new TCanvas("ROC_dR_HZ_17", "ROC_dR_HZ_17",0,0,600,600);
   ROC_dR_HZ_17->SetHighLightColor(2);
   ROC_dR_HZ_17->Range(-0.1593315,-0.006032204,1.211505,1.157622);
   ROC_dR_HZ_17->SetFillColor(0);
   ROC_dR_HZ_17->SetBorderMode(0);
   ROC_dR_HZ_17->SetBorderSize(2);
   ROC_dR_HZ_17->SetGridx();
   ROC_dR_HZ_17->SetGridy();
   ROC_dR_HZ_17->SetLeftMargin(0.15709);
   ROC_dR_HZ_17->SetRightMargin(0.1234783);
   ROC_dR_HZ_17->SetBottomMargin(0.12);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx910[28] = {
   0.1011898,
   0.2595896,
   0.3734227,
   0.4618878,
   0.5338753,
   0.5962527,
   0.64947,
   0.6907757,
   0.7354262,
   0.7659339,
   0.7956247,
   0.8221615,
   0.8432417,
   0.8649184,
   0.8835533,
   0.8985254,
   0.9115951,
   0.9222669,
   0.9327028,
   0.9415825,
   0.949482,
   0.9573028,
   0.9663432,
   0.9719611,
   0.9794482,
   0.9850562,
   0.9916453,
   0.9950983};
   Double_t Graph_fy910[28] = {
   0.1748632,
   0.3997397,
   0.5367504,
   0.6321294,
   0.7027591,
   0.744148,
   0.7809362,
   0.8076813,
   0.8320151,
   0.8547561,
   0.8728335,
   0.8897174,
   0.9030954,
   0.9152079,
   0.9261336,
   0.9366069,
   0.9463056,
   0.9529586,
   0.9592206,
   0.9648717,
   0.9705566,
   0.9757283,
   0.9799668,
   0.9852676,
   0.9884943,
   0.9922396,
   0.994278,
   0.997008};
   TGraph *graph = new TGraph(28,Graph_fx910,Graph_fy910);
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
   
   TH1F *Graph_Graph910 = new TH1F("Graph_Graph910","Tagging Only",100,0.01179897,1.084489);
   Graph_Graph910->SetMinimum(0.0926487);
   Graph_Graph910->SetMaximum(1.079222);
   Graph_Graph910->SetDirectory(0);
   Graph_Graph910->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph910->SetLineColor(ci);
   Graph_Graph910->GetXaxis()->SetLabelFont(42);
   Graph_Graph910->GetXaxis()->SetTitleOffset(1);
   Graph_Graph910->GetXaxis()->SetTitleFont(42);
   Graph_Graph910->GetYaxis()->SetLabelFont(42);
   Graph_Graph910->GetYaxis()->SetTitleFont(42);
   Graph_Graph910->GetZaxis()->SetLabelFont(42);
   Graph_Graph910->GetZaxis()->SetTitleOffset(1);
   Graph_Graph910->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph910);
   
   TLatex *   tex = new TLatex(0.3050534,0.7266563,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(911);
      tex = new TLatex(0.4412034,0.8758741,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(912);
      tex = new TLatex(0.5334608,0.8921584,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(913);
      tex = new TLatex(0.6173005,0.9409278,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(914);
      tex = new TLatex(0.6739609,0.9710141,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(915);
      tex = new TLatex(0.7232529,0.989838,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(916);
      tex = new TLatex(0.7598363,0.9996814,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(917);
      tex = new TLatex(0.7941977,1.010116,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(918);
      tex = new TLatex(0.8189855,1.017122,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(919);
      tex = new TLatex(0.8427029,1.021241,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(920);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx921[28] = {
   0.1190505,
   0.3050534,
   0.4412034,
   0.5334608,
   0.6173005,
   0.6739609,
   0.7232529,
   0.7598363,
   0.7941977,
   0.8189855,
   0.8427029,
   0.867878,
   0.888128,
   0.9053378,
   0.9246672,
   0.9371428,
   0.9503744,
   0.9571209,
   0.9636063,
   0.9666027,
   0.9722532,
   0.9760757,
   0.9818706,
   0.9859852,
   0.9891055,
   0.9925215,
   0.9951683,
   0.9974082};
   Double_t Graph_fy921[28] = {
   0.2992035,
   0.6266563,
   0.7758741,
   0.8521584,
   0.9009278,
   0.9310141,
   0.949838,
   0.9596814,
   0.9701158,
   0.9771225,
   0.9812407,
   0.9845947,
   0.9872771,
   0.9910471,
   0.9919387,
   0.9926656,
   0.9947495,
   0.9953091,
   0.9957317,
   0.9969028,
   0.9978582,
   0.9979194,
   0.9980093,
   0.9980942,
   0.998822,
   1,
   1,
   1};
   graph = new TGraph(28,Graph_fx921,Graph_fy921);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph921 = new TH1F("Graph_Graph921","Mass-Matching Prioritized",100,0.03121474,1.085244);
   Graph_Graph921->SetMinimum(0.2291238);
   Graph_Graph921->SetMaximum(1.07008);
   Graph_Graph921->SetDirectory(0);
   Graph_Graph921->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph921->SetLineColor(ci);
   Graph_Graph921->GetXaxis()->SetLabelFont(42);
   Graph_Graph921->GetXaxis()->SetTitleOffset(1);
   Graph_Graph921->GetXaxis()->SetTitleFont(42);
   Graph_Graph921->GetYaxis()->SetLabelFont(42);
   Graph_Graph921->GetYaxis()->SetTitleFont(42);
   Graph_Graph921->GetZaxis()->SetLabelFont(42);
   Graph_Graph921->GetZaxis()->SetTitleOffset(1);
   Graph_Graph921->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph921);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx922[28] = {
   0.1008415,
   0.2596653,
   0.3732715,
   0.4614571,
   0.533216,
   0.5958715,
   0.6490512,
   0.6906406,
   0.7354293,
   0.7659062,
   0.7954391,
   0.8218698,
   0.8430231,
   0.8647102,
   0.8836091,
   0.8984613,
   0.9114877,
   0.9221943,
   0.932655,
   0.9415345,
   0.9494811,
   0.9573728,
   0.9664132,
   0.9719733,
   0.9794112,
   0.9851684,
   0.9916673,
   0.9951853};
   Double_t Graph_fy922[28] = {
   0.1759441,
   0.3992662,
   0.5356445,
   0.6309431,
   0.7014973,
   0.7436796,
   0.7803182,
   0.8075703,
   0.8321575,
   0.8548648,
   0.8734635,
   0.8906336,
   0.903964,
   0.9158287,
   0.9268806,
   0.9372565,
   0.9466608,
   0.9530758,
   0.9594179,
   0.9647776,
   0.9705551,
   0.9759311,
   0.9798944,
   0.985181,
   0.9886152,
   0.9923432,
   0.9943308,
   0.9970054};
   graph = new TGraph(28,Graph_fx922,Graph_fy922);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph922 = new TH1F("Graph_Graph922","Tagging Prioritized",100,0.01140716,1.08462);
   Graph_Graph922->SetMinimum(0.09383793);
   Graph_Graph922->SetMaximum(1.079112);
   Graph_Graph922->SetDirectory(0);
   Graph_Graph922->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph922->SetLineColor(ci);
   Graph_Graph922->GetXaxis()->SetLabelFont(42);
   Graph_Graph922->GetXaxis()->SetTitleOffset(1);
   Graph_Graph922->GetXaxis()->SetTitleFont(42);
   Graph_Graph922->GetYaxis()->SetLabelFont(42);
   Graph_Graph922->GetYaxis()->SetTitleFont(42);
   Graph_Graph922->GetZaxis()->SetLabelFont(42);
   Graph_Graph922->GetZaxis()->SetTitleOffset(1);
   Graph_Graph922->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph922);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.0560132, 1.042237);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 3.15","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_17->Modified();
   ROC_dR_HZ_17->cd();
   ROC_dR_HZ_17->SetSelected(ROC_dR_HZ_17);
}
