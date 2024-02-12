#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2017_QuadJet_17_4b()
{
//=========Macro generated from canvas: ratio_trigger_2017_QuadJet_17_4b/ratio_trigger_2017_QuadJet_17_4b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2017_QuadJet_17_4b = new TCanvas("ratio_trigger_2017_QuadJet_17_4b", "ratio_trigger_2017_QuadJet_17_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2017_QuadJet_17_4b->SetHighLightColor(2);
   ratio_trigger_2017_QuadJet_17_4b->Range(0,0,1,1);
   ratio_trigger_2017_QuadJet_17_4b->SetFillColor(0);
   ratio_trigger_2017_QuadJet_17_4b->SetBorderMode(0);
   ratio_trigger_2017_QuadJet_17_4b->SetBorderSize(2);
   ratio_trigger_2017_QuadJet_17_4b->SetLeftMargin(0.15);
   ratio_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.4352656,3394.231,1.829531);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis23[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__23 = new TH1D("probeNew__23","",13, xAxis23);
   probeNew__23->SetBinContent(4,0.12);
   probeNew__23->SetBinContent(5,0.3888889);
   probeNew__23->SetBinContent(6,0.6271186);
   probeNew__23->SetBinContent(7,0.5454545);
   probeNew__23->SetBinContent(8,0.637931);
   probeNew__23->SetBinContent(9,0.6052632);
   probeNew__23->SetBinContent(10,0.6842105);
   probeNew__23->SetBinContent(11,0.5972222);
   probeNew__23->SetBinContent(12,0.68);
   probeNew__23->SetBinContent(13,0.6111111);
   probeNew__23->SetEntries(5.4972);
   probeNew__23->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__23->GetXaxis()->SetRange(0,14);
   probeNew__23->GetXaxis()->SetLabelFont(42);
   probeNew__23->GetXaxis()->SetTitleOffset(1);
   probeNew__23->GetXaxis()->SetTitleFont(42);
   probeNew__23->GetYaxis()->SetTitle("Data / MC");
   probeNew__23->GetYaxis()->SetLabelFont(42);
   probeNew__23->GetYaxis()->SetTitleFont(42);
   probeNew__23->GetZaxis()->SetLabelFont(42);
   probeNew__23->GetZaxis()->SetTitleOffset(1);
   probeNew__23->GetZaxis()->SetTitleFont(42);
   probeNew__23->Draw("Aape");
   Double_t xAxis24[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__24 = new TH1D("probeNew__24","",13, xAxis24);
   probeNew__24->SetBinContent(3,0.0686992);
   probeNew__24->SetBinContent(4,0.285284);
   probeNew__24->SetBinContent(5,0.6146567);
   probeNew__24->SetBinContent(6,0.7194418);
   probeNew__24->SetBinContent(7,0.7570985);
   probeNew__24->SetBinContent(8,0.7688771);
   probeNew__24->SetBinContent(9,0.7728762);
   probeNew__24->SetBinContent(10,0.7682768);
   probeNew__24->SetBinContent(11,0.7623238);
   probeNew__24->SetBinContent(12,0.77986);
   probeNew__24->SetBinContent(13,0.7589515);
   probeNew__24->SetBinContent(14,0.8379979);
   probeNew__24->SetBinError(3,0.01072372);
   probeNew__24->SetBinError(4,0.01196349);
   probeNew__24->SetBinError(5,0.0175237);
   probeNew__24->SetBinError(6,0.01941544);
   probeNew__24->SetBinError(7,0.02247635);
   probeNew__24->SetBinError(8,0.02544665);
   probeNew__24->SetBinError(9,0.0287244);
   probeNew__24->SetBinError(10,0.03185026);
   probeNew__24->SetBinError(11,0.02212536);
   probeNew__24->SetBinError(12,0.03693118);
   probeNew__24->SetBinError(13,0.04113477);
   probeNew__24->SetBinError(14,0.2673004);
   probeNew__24->SetEntries(6656.753);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__24->SetLineColor(ci);
   probeNew__24->GetXaxis()->SetRange(1,2000);
   probeNew__24->GetXaxis()->SetLabelFont(42);
   probeNew__24->GetXaxis()->SetTitleOffset(1);
   probeNew__24->GetXaxis()->SetTitleFont(42);
   probeNew__24->GetYaxis()->SetLabelFont(42);
   probeNew__24->GetYaxis()->SetTitleFont(42);
   probeNew__24->GetZaxis()->SetLabelFont(42);
   probeNew__24->GetZaxis()->SetTitleOffset(1);
   probeNew__24->GetZaxis()->SetTitleFont(42);
   probeNew__24->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2017_QuadJet_17_4b->cd();
  
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
   
   Double_t Graph_fx3004[11] = { 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3004[11] = { 0, 0.4206335, 0.6326929, 0.871674, 0.7204538, 0.8296918, 0.7831308, 0.8905781, 0.7834233, 0.8719514, 0.8052045 };
   Double_t Graph_felx3004[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3004[11] = { 0, 0.420633, 0.6221141, 0.8079061, 0.6834293, 0.7665593, 0.7305183, 0.8115006, 0.7324675, 0.795574, 0.7499025 };
   Double_t Graph_fehx3004[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3004[11] = { 27.40846, 6.697822, 3.325493, 2.990014, 2.794722, 2.80525, 2.773552, 2.835648, 2.805278, 2.793323, 2.833853 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3004,Graph_fy3004,Graph_felx3004,Graph_fehx3004,Graph_fely3004,Graph_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-153.8462,2153.846);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2);
   Graph_Graph3004->SetDirectory(nullptr);
   Graph_Graph3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetRange(1,100);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
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
   ratio_trigger_2017_QuadJet_17_4b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3220257,1.603051,510,"S");
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
   ratio_trigger_2017_QuadJet_17_4b->cd();
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
   ratio_trigger_2017_QuadJet_17_4b->Modified();
   ratio_trigger_2017_QuadJet_17_4b->cd();
   ratio_trigger_2017_QuadJet_17_4b->SetSelected(ratio_trigger_2017_QuadJet_17_4b);
}
