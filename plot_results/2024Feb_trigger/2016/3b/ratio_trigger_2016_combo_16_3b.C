#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_combo_16_3b()
{
//=========Macro generated from canvas: ratio_trigger_2016_combo_16_3b/ratio_trigger_2016_combo_16_3b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_combo_16_3b = new TCanvas("ratio_trigger_2016_combo_16_3b", "ratio_trigger_2016_combo_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_combo_16_3b->SetHighLightColor(2);
   ratio_trigger_2016_combo_16_3b->Range(0,0,1,1);
   ratio_trigger_2016_combo_16_3b->SetFillColor(0);
   ratio_trigger_2016_combo_16_3b->SetBorderMode(0);
   ratio_trigger_2016_combo_16_3b->SetBorderSize(2);
   ratio_trigger_2016_combo_16_3b->SetLeftMargin(0.15);
   ratio_trigger_2016_combo_16_3b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.463667,3394.231,1.982859);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis47[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__47 = new TH1D("probeNew__47","",13, xAxis47);
   probeNew__47->SetBinContent(3,0.1984733);
   probeNew__47->SetBinContent(4,0.3777452);
   probeNew__47->SetBinContent(5,0.5318627);
   probeNew__47->SetBinContent(6,0.6103352);
   probeNew__47->SetBinContent(7,0.6466019);
   probeNew__47->SetBinContent(8,0.6691358);
   probeNew__47->SetBinContent(9,0.6495177);
   probeNew__47->SetBinContent(10,0.7074468);
   probeNew__47->SetBinContent(11,0.6765376);
   probeNew__47->SetBinContent(12,0.7032258);
   probeNew__47->SetBinContent(13,0.7647059);
   probeNew__47->SetBinContent(14,0.5);
   probeNew__47->SetEntries(6.535588);
   probeNew__47->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__47->GetXaxis()->SetRange(0,14);
   probeNew__47->GetXaxis()->SetLabelFont(42);
   probeNew__47->GetXaxis()->SetTitleOffset(1);
   probeNew__47->GetXaxis()->SetTitleFont(42);
   probeNew__47->GetYaxis()->SetTitle("Data / MC");
   probeNew__47->GetYaxis()->SetLabelFont(42);
   probeNew__47->GetYaxis()->SetTitleFont(42);
   probeNew__47->GetZaxis()->SetLabelFont(42);
   probeNew__47->GetZaxis()->SetTitleOffset(1);
   probeNew__47->GetZaxis()->SetTitleFont(42);
   probeNew__47->Draw("Aape");
   Double_t xAxis48[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__48 = new TH1D("probeNew__48","",13, xAxis48);
   probeNew__48->SetBinContent(2,0.05729553);
   probeNew__48->SetBinContent(3,0.2839265);
   probeNew__48->SetBinContent(4,0.5076444);
   probeNew__48->SetBinContent(5,0.6649117);
   probeNew__48->SetBinContent(6,0.7414728);
   probeNew__48->SetBinContent(7,0.7685613);
   probeNew__48->SetBinContent(8,0.7809593);
   probeNew__48->SetBinContent(9,0.786485);
   probeNew__48->SetBinContent(10,0.7881498);
   probeNew__48->SetBinContent(11,0.7956052);
   probeNew__48->SetBinContent(12,0.8018337);
   probeNew__48->SetBinContent(13,0.807385);
   probeNew__48->SetBinContent(14,0.8267714);
   probeNew__48->SetBinError(2,0.01494414);
   probeNew__48->SetBinError(3,0.004195004);
   probeNew__48->SetBinError(4,0.00375328);
   probeNew__48->SetBinError(5,0.004251127);
   probeNew__48->SetBinError(6,0.004905049);
   probeNew__48->SetBinError(7,0.005678864);
   probeNew__48->SetBinError(8,0.00661328);
   probeNew__48->SetBinError(9,0.007734676);
   probeNew__48->SetBinError(10,0.009021923);
   probeNew__48->SetBinError(11,0.006375857);
   probeNew__48->SetBinError(12,0.01109395);
   probeNew__48->SetBinError(13,0.01398248);
   probeNew__48->SetBinError(14,0.09032799);
   probeNew__48->SetEntries(69362.6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__48->SetLineColor(ci);
   probeNew__48->GetXaxis()->SetRange(1,2000);
   probeNew__48->GetXaxis()->SetLabelFont(42);
   probeNew__48->GetXaxis()->SetTitleOffset(1);
   probeNew__48->GetXaxis()->SetTitleFont(42);
   probeNew__48->GetYaxis()->SetLabelFont(42);
   probeNew__48->GetYaxis()->SetTitleFont(42);
   probeNew__48->GetZaxis()->SetLabelFont(42);
   probeNew__48->GetZaxis()->SetTitleOffset(1);
   probeNew__48->GetZaxis()->SetTitleFont(42);
   probeNew__48->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_combo_16_3b->cd();
  
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
   
   Double_t Graph_fx3008[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3008[12] = { 0, 0.6990305, 0.7441138, 0.7998999, 0.823139, 0.8413147, 0.8568127, 0.8258488, 0.8976045, 0.8503433, 0.8770221, 0.9471391 };
   Double_t Graph_felx3008[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3008[12] = { 0, 0.6988155, 0.7330498, 0.7615428, 0.7666502, 0.7752415, 0.7842017, 0.7603302, 0.8120302, 0.7765411, 0.7944382, 0.8419031 };
   Double_t Graph_fehx3008[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3008[12] = { 34.23092, 6.864266, 4.012446, 3.169581, 2.888674, 2.807146, 2.7749, 2.744914, 2.770246, 2.727719, 2.721007, 2.734268 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3008,Graph_fy3008,Graph_felx3008,Graph_fehx3008,Graph_fely3008,Graph_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-153.8462,2153.846);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2);
   Graph_Graph3008->SetDirectory(nullptr);
   Graph_Graph3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3008->SetLineColor(ci);
   Graph_Graph3008->GetXaxis()->SetRange(1,100);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
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
   ratio_trigger_2016_combo_16_3b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3413407,1.738207,510,"S");
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
   ratio_trigger_2016_combo_16_3b->cd();
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
   ratio_trigger_2016_combo_16_3b->Modified();
   ratio_trigger_2016_combo_16_3b->cd();
   ratio_trigger_2016_combo_16_3b->SetSelected(ratio_trigger_2016_combo_16_3b);
}
