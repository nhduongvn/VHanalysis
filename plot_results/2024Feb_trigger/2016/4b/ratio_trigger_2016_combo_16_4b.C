#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_combo_16_4b()
{
//=========Macro generated from canvas: ratio_trigger_2016_combo_16_4b/ratio_trigger_2016_combo_16_4b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_combo_16_4b = new TCanvas("ratio_trigger_2016_combo_16_4b", "ratio_trigger_2016_combo_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_combo_16_4b->SetHighLightColor(2);
   ratio_trigger_2016_combo_16_4b->Range(0,0,1,1);
   ratio_trigger_2016_combo_16_4b->SetFillColor(0);
   ratio_trigger_2016_combo_16_4b->SetBorderMode(0);
   ratio_trigger_2016_combo_16_4b->SetBorderSize(2);
   ratio_trigger_2016_combo_16_4b->SetLeftMargin(0.15);
   ratio_trigger_2016_combo_16_4b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.5017489,3394.231,2.408873);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis17[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__17 = new TH1D("probeNew__17","",13, xAxis17);
   probeNew__17->SetBinContent(3,0.3333333);
   probeNew__17->SetBinContent(4,0.7142857);
   probeNew__17->SetBinContent(5,0.7647059);
   probeNew__17->SetBinContent(6,0.7407407);
   probeNew__17->SetBinContent(7,0.8965517);
   probeNew__17->SetBinContent(8,0.9047619);
   probeNew__17->SetBinContent(9,0.9166667);
   probeNew__17->SetBinContent(10,1);
   probeNew__17->SetBinContent(11,0.8780488);
   probeNew__17->SetBinContent(12,0.8571429);
   probeNew__17->SetBinContent(13,0.7777778);
   probeNew__17->SetEntries(8.784015);
   probeNew__17->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__17->GetXaxis()->SetRange(0,14);
   probeNew__17->GetXaxis()->SetLabelFont(42);
   probeNew__17->GetXaxis()->SetTitleOffset(1);
   probeNew__17->GetXaxis()->SetTitleFont(42);
   probeNew__17->GetYaxis()->SetTitle("Data / MC");
   probeNew__17->GetYaxis()->SetLabelFont(42);
   probeNew__17->GetYaxis()->SetTitleFont(42);
   probeNew__17->GetZaxis()->SetLabelFont(42);
   probeNew__17->GetZaxis()->SetTitleOffset(1);
   probeNew__17->GetZaxis()->SetTitleFont(42);
   probeNew__17->Draw("Aape");
   Double_t xAxis18[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__18 = new TH1D("probeNew__18","",13, xAxis18);
   probeNew__18->SetBinContent(2,0.3660701);
   probeNew__18->SetBinContent(3,0.4434948);
   probeNew__18->SetBinContent(4,0.6919345);
   probeNew__18->SetBinContent(5,0.819288);
   probeNew__18->SetBinContent(6,0.8858446);
   probeNew__18->SetBinContent(7,0.9098222);
   probeNew__18->SetBinContent(8,0.9191322);
   probeNew__18->SetBinContent(9,0.9173317);
   probeNew__18->SetBinContent(10,0.9186857);
   probeNew__18->SetBinContent(11,0.9364307);
   probeNew__18->SetBinContent(12,0.9300877);
   probeNew__18->SetBinContent(13,0.9159099);
   probeNew__18->SetBinContent(14,0.9001527);
   probeNew__18->SetBinError(2,0.4235684);
   probeNew__18->SetBinError(3,0.03622527);
   probeNew__18->SetBinError(4,0.02699198);
   probeNew__18->SetBinError(5,0.02571244);
   probeNew__18->SetBinError(6,0.02724342);
   probeNew__18->SetBinError(7,0.02921512);
   probeNew__18->SetBinError(8,0.03238544);
   probeNew__18->SetBinError(9,0.03677113);
   probeNew__18->SetBinError(10,0.04056916);
   probeNew__18->SetBinError(11,0.02696448);
   probeNew__18->SetBinError(12,0.04234657);
   probeNew__18->SetBinError(13,0.05079341);
   probeNew__18->SetBinError(14,0.3236429);
   probeNew__18->SetEntries(483.2664);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__18->SetLineColor(ci);
   probeNew__18->GetXaxis()->SetRange(1,2000);
   probeNew__18->GetXaxis()->SetLabelFont(42);
   probeNew__18->GetXaxis()->SetTitleOffset(1);
   probeNew__18->GetXaxis()->SetTitleFont(42);
   probeNew__18->GetYaxis()->SetLabelFont(42);
   probeNew__18->GetYaxis()->SetTitleFont(42);
   probeNew__18->GetZaxis()->SetLabelFont(42);
   probeNew__18->GetZaxis()->SetTitleOffset(1);
   probeNew__18->GetZaxis()->SetTitleFont(42);
   probeNew__18->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_combo_16_4b->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-442.3077,-0.923077,2442.308,2.153846);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t Graph_fx3003[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3003[12] = { 0, 0.7516059, 1.032303, 0.9333785, 0.8361972, 0.9854142, 0.9843654, 0.999275, 1.088512, 0.9376548, 0.9215721, 0.8491859 };
   Double_t Graph_felx3003[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3003[12] = { 0, 0.7452085, 0.9320487, 0.8297311, 0.7488457, 0.8411727, 0.8382036, 0.8478724, 0.9008015, 0.8049209, 0.7963404, 0.7520212 };
   Double_t Graph_fehx3003[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3003[12] = { 21.95653, 4.580476, 3.165956, 2.697286, 2.483309, 2.487491, 2.466642, 2.478036, 2.511123, 2.408218, 2.420353, 2.42617 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3003,Graph_fy3003,Graph_felx3003,Graph_fehx3003,Graph_fely3003,Graph_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-153.8462,2153.846);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(nullptr);
   Graph_Graph3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3003->SetLineColor(ci);
   Graph_Graph3003->GetXaxis()->SetRange(1,100);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-153.8462,0.7,2153.846,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-153.8462,1,2153.846,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-153.8462,1.3,2153.846,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   ratio_trigger_2016_combo_16_4b->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-153.8462,2153.846,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3562178,2.117811,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Data / MC");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-153.8462,2153.846,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("H_{T} [GeV]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,2,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   ratio_trigger_2016_combo_16_4b->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0.8,0.8,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("probeNew","SingleMuon (Data)","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("probeNew","t#bar{t} (MC)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ratio_trigger_2016_combo_16_4b->Modified();
   ratio_trigger_2016_combo_16_4b->cd();
   ratio_trigger_2016_combo_16_4b->SetSelected(ratio_trigger_2016_combo_16_4b);
}
