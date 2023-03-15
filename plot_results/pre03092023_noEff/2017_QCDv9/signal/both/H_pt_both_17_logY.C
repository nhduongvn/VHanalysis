#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_17_logY()
{
//=========Macro generated from canvas: H_pt_both_17/H_pt_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_17 = new TCanvas("H_pt_both_17", "H_pt_both_17",0,0,600,600);
   H_pt_both_17->SetHighLightColor(2);
   H_pt_both_17->Range(37.97653,-4.265217,1705.96,-0.4190635);
   H_pt_both_17->SetFillColor(0);
   H_pt_both_17->SetFillStyle(4000);
   H_pt_both_17->SetBorderMode(0);
   H_pt_both_17->SetBorderSize(2);
   H_pt_both_17->SetLogy();
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
   st->SetMinimum(10);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",40,0,2000);
   st_stack_142->SetMinimum(54.35842);
   st_stack_142->SetMaximum(0.1571524);
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
   st_stack_142->GetYaxis()->SetTitle("Event/50.0");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetTitleSize(0.037);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetTitleOffset(1);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,0.456025);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,0.8751866);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,1.018116);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,0.7826755);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.5145664);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.2625301);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.1649624);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.1020083);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.05339137);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.02772691);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.01362546);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.004259696);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.004132007);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.002527643);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.001402433);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.004364026);
   VbbHcc_both_H_pt_stack_1->SetBinContent(18,0.0007828392);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.001292996);
   VbbHcc_both_H_pt_stack_1->SetBinContent(20,0.0008616824);
   VbbHcc_both_H_pt_stack_1->SetBinContent(24,0.001404385);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.0247524);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.03402772);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.03675688);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.03219649);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.02599251);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.01886428);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.01442205);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.01189185);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.008389846);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.005930793);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.004782945);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.002489354);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.002386894);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.001787939);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.001402433);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.002537935);
   VbbHcc_both_H_pt_stack_1->SetBinError(18,0.0007828392);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.001292996);
   VbbHcc_both_H_pt_stack_1->SetBinError(20,0.0008616824);
   VbbHcc_both_H_pt_stack_1->SetBinError(24,0.001404385);
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
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.1462503);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.3221779);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.4611047);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.3905898);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.2385624);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.1288849);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.06834488);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.03102379);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.02164267);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.008270474);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.003299227);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.002162534);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.0007209592);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.0005703088);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0001212674);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.0001682787);
   VbbHcc_both_H_pt_stack_2->SetBinContent(23,0.0001561753);
   VbbHcc_both_H_pt_stack_2->SetBinContent(24,0.00017797);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.004954359);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.007390698);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.008859097);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.008128635);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.00634229);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.004637754);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.003360871);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.00226714);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.001907379);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.001212871);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.0007479545);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.0006077206);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0003645766);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0002877872);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0001212674);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0001682787);
   VbbHcc_both_H_pt_stack_2->SetBinError(23,0.0001561753);
   VbbHcc_both_H_pt_stack_2->SetBinError(24,0.00017797);
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
