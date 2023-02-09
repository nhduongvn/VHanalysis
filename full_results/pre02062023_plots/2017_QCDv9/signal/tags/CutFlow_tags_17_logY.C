#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tags_17_logY()
{
//=========Macro generated from canvas: CutFlow_tags_17/CutFlow_tags_17
//=========  (Thu Dec 15 14:28:57 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_tags_17 = new TCanvas("CutFlow_tags_17", "CutFlow_tags_17",0,0,600,600);
   CutFlow_tags_17->SetHighLightColor(2);
   CutFlow_tags_17->Range(-1.310117,-0.187147,7.029799,5.774349);
   CutFlow_tags_17->SetFillColor(0);
   CutFlow_tags_17->SetFillStyle(4000);
   CutFlow_tags_17->SetBorderMode(0);
   CutFlow_tags_17->SetBorderSize(2);
   CutFlow_tags_17->SetLogy();
   CutFlow_tags_17->SetLeftMargin(0.15709);
   CutFlow_tags_17->SetRightMargin(0.1234783);
   CutFlow_tags_17->SetBottomMargin(0.12);
   CutFlow_tags_17->SetFrameFillStyle(1000);
   CutFlow_tags_17->SetFrameBorderMode(0);
   CutFlow_tags_17->SetFrameFillStyle(1000);
   CutFlow_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(84428.46);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",5,0,5);
   st_stack_2->SetMinimum(3.374679);
   st_stack_2->SetMaximum(150729.9);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_2->GetXaxis()->SetRange(1,6);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_tags_CutFlow_stack_1 = new TH1D("VbbHcc_tags_CutFlow_stack_1","",5,0,5);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(1,741.2927);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(2,740.3785);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(3,259.7746);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(4,46.60615);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(5,9.725617);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(1,1.117623);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(2,1.116952);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(3,0.6502782);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(4,0.2756221);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(5,0.1263697);
   VbbHcc_tags_CutFlow_stack_1->SetEntries(1195585);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(1,102.9919);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(2,102.748);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(3,66.10757);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(4,12.89375);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(5,2.793476);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(1,0.1507917);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(2,0.150613);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(3,0.1208096);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(4,0.0533538);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(5,0.02483409);
   VbbHcc_tags_CutFlow_stack_2->SetEntries(1302383);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_1","ZHcc","F");

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
   CutFlow_tags_17->Modified();
   CutFlow_tags_17->cd();
   CutFlow_tags_17->SetSelected(CutFlow_tags_17);
}
