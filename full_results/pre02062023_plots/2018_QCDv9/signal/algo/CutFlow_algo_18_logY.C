#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algo_18_logY()
{
//=========Macro generated from canvas: CutFlow_algo_18/CutFlow_algo_18
//=========  (Thu Dec 15 14:28:57 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_algo_18 = new TCanvas("CutFlow_algo_18", "CutFlow_algo_18",0,0,600,600);
   CutFlow_algo_18->SetHighLightColor(2);
   CutFlow_algo_18->Range(-1.310117,-0.2257374,7.029799,5.962305);
   CutFlow_algo_18->SetFillColor(0);
   CutFlow_algo_18->SetFillStyle(4000);
   CutFlow_algo_18->SetBorderMode(0);
   CutFlow_algo_18->SetBorderSize(2);
   CutFlow_algo_18->SetLogy();
   CutFlow_algo_18->SetLeftMargin(0.15709);
   CutFlow_algo_18->SetRightMargin(0.1234783);
   CutFlow_algo_18->SetBottomMargin(0.12);
   CutFlow_algo_18->SetFrameFillStyle(1000);
   CutFlow_algo_18->SetFrameBorderMode(0);
   CutFlow_algo_18->SetFrameFillStyle(1000);
   CutFlow_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(121390.4);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",5,0,5);
   st_stack_47->SetMinimum(3.287211);
   st_stack_47->SetMaximum(220546.6);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_47->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_47->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_47->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_47->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_47->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_47->GetXaxis()->SetRange(1,6);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/1.0");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_algo_CutFlow_stack_1 = new TH1D("VbbHcc_algo_CutFlow_stack_1","",5,0,5);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(1,1065.823);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(2,1064.704);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(3,374.8702);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(4,17.21424);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(5,3.257438);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(1,1.622075);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(2,1.621259);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(3,0.9449904);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(4,0.2037338);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(5,0.08871701);
   VbbHcc_algo_CutFlow_stack_1->SetEntries(1148881);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_2 = new TH1D("VbbHcc_algo_CutFlow_stack_2","",5,0,5);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(1,148.0808);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(2,147.6128);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(3,96.6851);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(4,4.731841);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(5,0.858614);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(1,0.2257424);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(2,0.2253853);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(3,0.1824078);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(4,0.04035327);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(5,0.01718948);
   VbbHcc_algo_CutFlow_stack_2->SetEntries(1156437);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_algo_18->Modified();
   CutFlow_algo_18->cd();
   CutFlow_algo_18->SetSelected(CutFlow_algo_18);
}
