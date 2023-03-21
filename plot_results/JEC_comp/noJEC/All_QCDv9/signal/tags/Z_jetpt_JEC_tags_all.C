#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_tags_all()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_all/Z_jetpt_JEC_tags_all
//=========  (Mon Mar 20 11:48:31 2023) by ROOT version 6.26/06
   TCanvas *Z_jetpt_JEC_tags_all = new TCanvas("Z_jetpt_JEC_tags_all", "Z_jetpt_JEC_tags_all",0,0,600,600);
   Z_jetpt_JEC_tags_all->SetHighLightColor(2);
   Z_jetpt_JEC_tags_all->Range(-65.50587,-1.971857,351.4899,14.46028);
   Z_jetpt_JEC_tags_all->SetFillColor(0);
   Z_jetpt_JEC_tags_all->SetFillStyle(4000);
   Z_jetpt_JEC_tags_all->SetBorderMode(0);
   Z_jetpt_JEC_tags_all->SetBorderSize(2);
   Z_jetpt_JEC_tags_all->SetLeftMargin(0.15709);
   Z_jetpt_JEC_tags_all->SetRightMargin(0.1234783);
   Z_jetpt_JEC_tags_all->SetBottomMargin(0.12);
   Z_jetpt_JEC_tags_all->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_all->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_all->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(12.81707);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",150,0,300);
   st_stack_88->SetMinimum(0);
   st_stack_88->SetMaximum(12.81707);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   st_stack_88->GetXaxis()->SetRange(1,150);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC_all_stack_1 = new TH1D("VbbHcc_tags_Z_jetpt_JEC_all_stack_1","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinContent(0,8.716925);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinContent(1,0.06184512);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinContent(2,7.509752);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinContent(3,1.496724);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinError(0,0.151384);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinError(1,0.01227988);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinError(2,0.1465204);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetBinError(3,0.061533);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_jetpt_JEC_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC_all_stack_2 = new TH1D("VbbHcc_tags_Z_jetpt_JEC_all_stack_2","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinContent(0,3.78882);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinContent(1,0.01866464);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinContent(2,3.128415);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinContent(3,0.6595142);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinError(0,0.0361249);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinError(1,0.00245265);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinError(2,0.03220439);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetBinError(3,0.01478288);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_jetpt_JEC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_jetpt_JEC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_jetpt_JEC_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tags_all->Modified();
   Z_jetpt_JEC_tags_all->cd();
   Z_jetpt_JEC_tags_all->SetSelected(Z_jetpt_JEC_tags_all);
}
