#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_both_16_logY()
{
//=========Macro generated from canvas: CutFlow_both_16/CutFlow_both_16
//=========  (Thu Dec 15 14:28:58 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_both_16 = new TCanvas("CutFlow_both_16", "CutFlow_both_16",0,0,600,600);
   CutFlow_both_16->SetHighLightColor(2);
   CutFlow_both_16->Range(-1.091764,-0.1714491,5.858166,5.698352);
   CutFlow_both_16->SetFillColor(0);
   CutFlow_both_16->SetFillStyle(4000);
   CutFlow_both_16->SetBorderMode(0);
   CutFlow_both_16->SetBorderSize(2);
   CutFlow_both_16->SetLogy();
   CutFlow_both_16->SetLeftMargin(0.15709);
   CutFlow_both_16->SetRightMargin(0.1234783);
   CutFlow_both_16->SetBottomMargin(0.12);
   CutFlow_both_16->SetFrameFillStyle(1000);
   CutFlow_both_16->SetFrameBorderMode(0);
   CutFlow_both_16->SetFrameFillStyle(1000);
   CutFlow_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(72907.45);
   
   TH1F *st_stack_89 = new TH1F("st_stack_89","",4,0,4);
   st_stack_89->SetMinimum(3.411356);
   st_stack_89->SetMaximum(129232.4);
   st_stack_89->SetDirectory(0);
   st_stack_89->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_89->SetLineColor(ci);
   st_stack_89->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_89->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_89->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_89->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_89->GetXaxis()->SetBinLabel(4,"tags cut");
   st_stack_89->GetXaxis()->SetRange(1,5);
   st_stack_89->GetXaxis()->SetLabelFont(42);
   st_stack_89->GetXaxis()->SetTitleOffset(1);
   st_stack_89->GetXaxis()->SetTitleFont(42);
   st_stack_89->GetYaxis()->SetTitle("Events/1.0");
   st_stack_89->GetYaxis()->SetLabelFont(42);
   st_stack_89->GetYaxis()->SetTitleSize(0.037);
   st_stack_89->GetYaxis()->SetTitleFont(42);
   st_stack_89->GetZaxis()->SetLabelFont(42);
   st_stack_89->GetZaxis()->SetTitleOffset(1);
   st_stack_89->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_89);
   
   
   TH1D *VbbHcc_both_CutFlow_stack_1 = new TH1D("VbbHcc_both_CutFlow_stack_1","",4,0,4);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(1,640.1367);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(2,639.6454);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(3,221.0844);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(4,7.909147);
   VbbHcc_both_CutFlow_stack_1->SetBinError(1,0.9905948);
   VbbHcc_both_CutFlow_stack_1->SetBinError(2,0.9902229);
   VbbHcc_both_CutFlow_stack_1->SetBinError(3,0.5712739);
   VbbHcc_both_CutFlow_stack_1->SetBinError(4,0.1079235);
   VbbHcc_both_CutFlow_stack_1->SetEntries(1108101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_2 = new TH1D("VbbHcc_both_CutFlow_stack_2","",4,0,4);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(1,88.93776);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(2,88.70731);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(3,59.13065);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(4,2.945388);
   VbbHcc_both_CutFlow_stack_2->SetBinError(1,0.1265385);
   VbbHcc_both_CutFlow_stack_2->SetBinError(2,0.1263745);
   VbbHcc_both_CutFlow_stack_2->SetBinError(3,0.1031777);
   VbbHcc_both_CutFlow_stack_2->SetBinError(4,0.02302772);
   VbbHcc_both_CutFlow_stack_2->SetEntries(1331518);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_1","ZHcc","F");

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
   CutFlow_both_16->Modified();
   CutFlow_both_16->cd();
   CutFlow_both_16->SetSelected(CutFlow_both_16);
}
