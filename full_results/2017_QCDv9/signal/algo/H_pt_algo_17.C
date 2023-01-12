#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_17()
{
//=========Macro generated from canvas: H_pt_algo_17/H_pt_algo_17
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *H_pt_algo_17 = new TCanvas("H_pt_algo_17", "H_pt_algo_17",0,0,600,600);
   H_pt_algo_17->SetHighLightColor(2);
   H_pt_algo_17->Range(37.97653,-0.1715933,1705.96,1.258351);
   H_pt_algo_17->SetFillColor(0);
   H_pt_algo_17->SetFillStyle(4000);
   H_pt_algo_17->SetBorderMode(0);
   H_pt_algo_17->SetBorderSize(2);
   H_pt_algo_17->SetLeftMargin(0.15709);
   H_pt_algo_17->SetRightMargin(0.1234783);
   H_pt_algo_17->SetBottomMargin(0.12);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.115357);
   
   TH1F *st_stack_70 = new TH1F("st_stack_70","",40,0,2000);
   st_stack_70->SetMinimum(0);
   st_stack_70->SetMaximum(1.115357);
   st_stack_70->SetDirectory(0);
   st_stack_70->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_70->SetLineColor(ci);
   st_stack_70->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_70->GetXaxis()->SetRange(7,30);
   st_stack_70->GetXaxis()->SetLabelFont(42);
   st_stack_70->GetXaxis()->SetTitleOffset(1);
   st_stack_70->GetXaxis()->SetTitleFont(42);
   st_stack_70->GetYaxis()->SetTitle("Events/50.0");
   st_stack_70->GetYaxis()->SetLabelFont(42);
   st_stack_70->GetYaxis()->SetTitleSize(0.037);
   st_stack_70->GetYaxis()->SetTitleFont(42);
   st_stack_70->GetZaxis()->SetLabelFont(42);
   st_stack_70->GetZaxis()->SetTitleOffset(1);
   st_stack_70->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_70);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.1527014);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.7435711);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.7278921);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.4196792);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.1514108);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.06754448);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.03566887);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.04471961);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.0293524);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.006620281);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.001439536);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.002942536);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.001469136);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.01661055);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.03753439);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.03632027);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.02815662);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.01680689);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.01081329);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.008299876);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.008850378);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.007231348);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.003337471);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.001439536);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.002114899);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.001469136);
   VbbHcc_algo_H_pt_stack_1->SetEntries(1606);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.0171781);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.09328746);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.2074534);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.172404);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.07415833);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.02456873);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.01726665);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.005784588);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.002708129);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.0003453953);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.001041368);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.0005462935);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.0005697333);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.002063793);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.004808313);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.007095102);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.006521744);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.004251386);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.002444248);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.002019763);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.001162342);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.0008274763);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0002885675);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0005159298);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.0003392418);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0003969604);
   VbbHcc_algo_H_pt_stack_2->SetEntries(2897);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_17->Modified();
   H_pt_algo_17->cd();
   H_pt_algo_17->SetSelected(H_pt_algo_17);
}
