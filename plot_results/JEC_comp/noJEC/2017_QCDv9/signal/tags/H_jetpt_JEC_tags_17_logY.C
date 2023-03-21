#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_tags_17/H_jetpt_JEC_tags_17
//=========  (Mon Mar 20 11:48:15 2023) by ROOT version 6.26/06
   TCanvas *H_jetpt_JEC_tags_17 = new TCanvas("H_jetpt_JEC_tags_17", "H_jetpt_JEC_tags_17",0,0,600,600);
   H_jetpt_JEC_tags_17->SetHighLightColor(2);
   H_jetpt_JEC_tags_17->Range(-65.50587,-0.2428865,351.4899,0.7869822);
   H_jetpt_JEC_tags_17->SetFillColor(0);
   H_jetpt_JEC_tags_17->SetFillStyle(4000);
   H_jetpt_JEC_tags_17->SetBorderMode(0);
   H_jetpt_JEC_tags_17->SetBorderSize(2);
   H_jetpt_JEC_tags_17->SetLogy();
   H_jetpt_JEC_tags_17->SetLeftMargin(0.15709);
   H_jetpt_JEC_tags_17->SetRightMargin(0.1234783);
   H_jetpt_JEC_tags_17->SetBottomMargin(0.12);
   H_jetpt_JEC_tags_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_tags_17->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(4.288259);
   
   TH1F *st_stack_70 = new TH1F("st_stack_70","",150,0,300);
   st_stack_70->SetMinimum(0.7597973);
   st_stack_70->SetMaximum(4.830536);
   st_stack_70->SetDirectory(0);
   st_stack_70->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_70->SetLineColor(ci);
   st_stack_70->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   st_stack_70->GetXaxis()->SetRange(1,150);
   st_stack_70->GetXaxis()->SetLabelFont(42);
   st_stack_70->GetXaxis()->SetTitleOffset(1);
   st_stack_70->GetXaxis()->SetTitleFont(42);
   st_stack_70->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_70->GetYaxis()->SetLabelFont(42);
   st_stack_70->GetYaxis()->SetTitleSize(0.037);
   st_stack_70->GetYaxis()->SetTitleFont(42);
   st_stack_70->GetZaxis()->SetLabelFont(42);
   st_stack_70->GetZaxis()->SetTitleOffset(1);
   st_stack_70->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_70);
   
   
   TH1D *VbbHcc_tags_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tags_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinContent(0,2.947272);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinContent(1,0.02157855);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinContent(2,2.514246);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinContent(3,0.5187881);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinError(0,0.0748081);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinError(1,0.006305843);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinError(2,0.0689723);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetBinError(3,0.03102927);
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_tags_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_tags_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinContent(0,1.27038);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinContent(1,0.006167587);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinContent(2,1.045009);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinContent(3,0.2132785);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinError(0,0.0174915);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinError(1,0.001204978);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinError(2,0.01585403);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetBinError(3,0.007183422);
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_jetpt_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_jetpt_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tags_17->Modified();
   H_jetpt_JEC_tags_17->cd();
   H_jetpt_JEC_tags_17->SetSelected(H_jetpt_JEC_tags_17);
}
