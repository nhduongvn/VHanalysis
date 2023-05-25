#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tags_noJEC_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_tags_noJEC_16/H_jetpt_JEC_tags_noJEC_16
//=========  (Thu May 25 11:52:40 2023) by ROOT version 6.26/06
   TCanvas *H_jetpt_JEC_tags_noJEC_16 = new TCanvas("H_jetpt_JEC_tags_noJEC_16", "H_jetpt_JEC_tags_noJEC_16",0,0,600,600);
   H_jetpt_JEC_tags_noJEC_16->SetHighLightColor(2);
   H_jetpt_JEC_tags_noJEC_16->Range(-65.50587,-0.4110321,351.4899,3.014236);
   H_jetpt_JEC_tags_noJEC_16->SetFillColor(0);
   H_jetpt_JEC_tags_noJEC_16->SetFillStyle(4000);
   H_jetpt_JEC_tags_noJEC_16->SetBorderMode(0);
   H_jetpt_JEC_tags_noJEC_16->SetBorderSize(2);
   H_jetpt_JEC_tags_noJEC_16->SetLeftMargin(0.15709);
   H_jetpt_JEC_tags_noJEC_16->SetRightMargin(0.1234783);
   H_jetpt_JEC_tags_noJEC_16->SetBottomMargin(0.12);
   H_jetpt_JEC_tags_noJEC_16->SetFrameFillStyle(1000);
   H_jetpt_JEC_tags_noJEC_16->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_noJEC_16->SetFrameFillStyle(1000);
   H_jetpt_JEC_tags_noJEC_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.671709);
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",150,0,300);
   st_stack_66->SetMinimum(0);
   st_stack_66->SetMaximum(2.671709);
   st_stack_66->SetDirectory(0);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   st_stack_66->GetXaxis()->SetRange(1,150);
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetTitleOffset(1);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetTitleSize(0.037);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetTitleOffset(1);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinContent(0,1.899917);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinContent(1,0.02041269);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinContent(2,1.565176);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinContent(3,0.3464353);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinError(0,0.07525088);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinError(1,0.007737765);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinError(2,0.06800783);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetBinError(3,0.03226713);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetEntries(1355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinContent(0,0.8259203);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinContent(1,0.0047402);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinContent(2,0.6523426);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinContent(3,0.1359019);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinError(0,0.01775079);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinError(1,0.001343904);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinError(2,0.01577261);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetBinError(3,0.007196665);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetEntries(4324);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_noJEC_H_jetpt_JEC_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_noJEC_H_jetpt_JEC_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tags_noJEC_16->Modified();
   H_jetpt_JEC_tags_noJEC_16->cd();
   H_jetpt_JEC_tags_noJEC_16->SetSelected(H_jetpt_JEC_tags_noJEC_16);
}
