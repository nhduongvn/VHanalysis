#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.05760465,7.264125,0.4224341);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.3744302);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",30,0,6);
   st_stack_77->SetMinimum(0);
   st_stack_77->SetMaximum(0.3744302);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_77->GetXaxis()->SetRange(1,31);
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetTitleOffset(1);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Events/0.2");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetTitleOffset(1);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.01891129);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.06882237);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.07736693);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.08971682);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.194176);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.1668842);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.1803425);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.1452756);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.1424811);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.1269741);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.09973139);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.06574299);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.0424539);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.05114638);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.02120665);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.006579565);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.003408008);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.001695072);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,0.0009969007);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,0.001436258);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.005466819);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01021536);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.0109586);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01192676);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.01761403);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.0163857);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01653127);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.01528223);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.01500692);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.01447936);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01228682);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.0102064);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.008107966);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.008787381);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.005693019);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.003099576);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002050543);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.001695072);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,0.0009969007);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,0.001436258);
   VbbHcc_algo_H_dR_stack_1->SetEntries(1091);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.006429791);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.02128026);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.02014755);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.03634496);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.05544413);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.061304);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.0468571);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.03419839);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.02680643);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.02125751);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.01603876);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.01441582);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01548858);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.01475764);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.006683171);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.002752908);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.002212829);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0005211539);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0002201642);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0002783548);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001086702);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002005361);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.001947178);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.002617408);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.003245467);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.003437756);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.003000081);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.002562457);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.002244938);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.002002014);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001747542);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001636637);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001727747);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001676166);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001129131);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0007121289);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0006544082);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0003027791);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.00018451);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0002216377);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
