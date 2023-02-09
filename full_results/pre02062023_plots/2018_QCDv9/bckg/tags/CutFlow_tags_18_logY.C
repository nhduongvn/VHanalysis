#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tags_18_logY()
{
//=========Macro generated from canvas: CutFlow_tags_18/CutFlow_tags_18
//=========  (Thu Dec 15 14:28:47 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_tags_18 = new TCanvas("CutFlow_tags_18", "CutFlow_tags_18",0,0,600,600);
   CutFlow_tags_18->SetHighLightColor(2);
   CutFlow_tags_18->Range(-1.310117,3.802442,7.029799,15.8871);
   CutFlow_tags_18->SetFillColor(0);
   CutFlow_tags_18->SetFillStyle(4000);
   CutFlow_tags_18->SetBorderMode(0);
   CutFlow_tags_18->SetBorderSize(2);
   CutFlow_tags_18->SetLogy();
   CutFlow_tags_18->SetLeftMargin(0.15709);
   CutFlow_tags_18->SetRightMargin(0.1234783);
   CutFlow_tags_18->SetBottomMargin(0.12);
   CutFlow_tags_18->SetFrameFillStyle(1000);
   CutFlow_tags_18->SetFrameBorderMode(0);
   CutFlow_tags_18->SetFrameFillStyle(1000);
   CutFlow_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(920428.5);
   st->SetMaximum(1.79506e+14);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",5,0,5);
   st_stack_3->SetMinimum(178896.1);
   st_stack_3->SetMaximum(4.771302e+14);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_3->GetXaxis()->SetRange(1,6);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_tags_CutFlow_stack_1 = new TH1D("VbbHcc_tags_CutFlow_stack_1","",5,0,5);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(1,1.795011e+12);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(2,1.794905e+12);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(3,2.644965e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(4,9.052182e+08);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(5,8.056006e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(1,1.920967e+08);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(2,1.92092e+08);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(3,1.574952e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(4,2846213);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(5,830939.7);
   VbbHcc_tags_CutFlow_stack_1->SetEntries(6.873415e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_2 = new TH1D("VbbHcc_tags_CutFlow_stack_2","",5,0,5);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(1,4.964886e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(2,4.710357e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(3,2.905486e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(4,1.521037e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(5,3888121);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(1,1783.095);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(2,1745.118);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(3,1415.161);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(4,1019.275);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(5,524.9663);
   VbbHcc_tags_CutFlow_stack_2->SetEntries(2.339017e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_tags_18->Modified();
   CutFlow_tags_18->cd();
   CutFlow_tags_18->SetSelected(CutFlow_tags_18);
}
