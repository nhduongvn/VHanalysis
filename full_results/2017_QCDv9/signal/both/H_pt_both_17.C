#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_17()
{
//=========Macro generated from canvas: H_pt_both_17/H_pt_both_17
//=========  (Thu Feb 16 10:35:20 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_17 = new TCanvas("H_pt_both_17", "H_pt_both_17",0,0,600,600);
   H_pt_both_17->SetHighLightColor(2);
   H_pt_both_17->Range(37.97653,-0.3348142,1705.96,2.455304);
   H_pt_both_17->SetFillColor(0);
   H_pt_both_17->SetFillStyle(4000);
   H_pt_both_17->SetBorderMode(0);
   H_pt_both_17->SetBorderSize(2);
   H_pt_both_17->SetLeftMargin(0.15709);
   H_pt_both_17->SetRightMargin(0.1234783);
   H_pt_both_17->SetBottomMargin(0.12);
   H_pt_both_17->SetFrameFillStyle(1000);
   H_pt_both_17->SetFrameBorderMode(0);
   H_pt_both_17->SetFrameFillStyle(1000);
   H_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.176293);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",40,0,2000);
   st_stack_142->SetMinimum(0);
   st_stack_142->SetMaximum(2.176293);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_142->GetXaxis()->SetRange(7,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetTitleOffset(1);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/50.0");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetTitleSize(0.037);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetTitleOffset(1);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,0.6498565);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,1.247181);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,1.450862);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,1.115348);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.7332805);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.3741174);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.2350789);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.1453665);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.07608513);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.03951211);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.0194169);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.006070262);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.005888298);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.003602006);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.001998531);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.006218937);
   VbbHcc_both_H_pt_stack_1->SetBinContent(18,0.001115582);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_both_H_pt_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_both_H_pt_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.03527329);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.04849105);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.05238024);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.04588147);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.03704051);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.02688246);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.02055208);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.01694643);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01195591);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.008451651);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.006815915);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.003547443);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.003401433);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.002547894);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.001998531);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.003616673);
   VbbHcc_both_H_pt_stack_1->SetBinError(18,0.001115582);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_both_H_pt_stack_1->SetBinError(20,0.001227937);
   VbbHcc_both_H_pt_stack_1->SetBinError(24,0.002001313);
   VbbHcc_both_H_pt_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.2084134);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.4591182);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.6570952);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.5566082);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.3399623);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.1836668);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.09739457);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.04421032);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.03084179);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.0117858);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.004701549);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.00308171);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.0010274);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.0008127161);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.0002398048);
   VbbHcc_both_H_pt_stack_2->SetBinContent(23,0.0002225569);
   VbbHcc_both_H_pt_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.007060188);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01053208);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01262462);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01158368);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.009038053);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.00660901);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.004789394);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.003230778);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.002718103);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.001728397);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.001065869);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.0008660296);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0005195383);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0004101098);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0002398048);
   VbbHcc_both_H_pt_stack_2->SetBinError(23,0.0002225569);
   VbbHcc_both_H_pt_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_both_H_pt_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_17->Modified();
   H_pt_both_17->cd();
   H_pt_both_17->SetSelected(H_pt_both_17);
}
