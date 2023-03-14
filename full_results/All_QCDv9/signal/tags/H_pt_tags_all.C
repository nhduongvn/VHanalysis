#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_all()
{
//=========Macro generated from canvas: H_pt_tags_all/H_pt_tags_all
//=========  (Thu Mar  9 13:09:04 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_all = new TCanvas("H_pt_tags_all", "H_pt_tags_all",0,0,600,600);
   H_pt_tags_all->SetHighLightColor(2);
   H_pt_tags_all->Range(37.97653,-0.7958786,1705.96,5.836443);
   H_pt_tags_all->SetFillColor(0);
   H_pt_tags_all->SetFillStyle(4000);
   H_pt_tags_all->SetBorderMode(0);
   H_pt_tags_all->SetBorderSize(2);
   H_pt_tags_all->SetLeftMargin(0.15709);
   H_pt_tags_all->SetRightMargin(0.1234783);
   H_pt_tags_all->SetBottomMargin(0.12);
   H_pt_tags_all->SetFrameFillStyle(1000);
   H_pt_tags_all->SetFrameBorderMode(0);
   H_pt_tags_all->SetFrameFillStyle(1000);
   H_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.173211);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(5.173211);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_H_pt_all_stack_1 = new TH1D("VbbHcc_tags_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(1,1.884535);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(2,3.707202);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(3,4.293765);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(4,3.06488);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(5,2.008814);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(6,1.214316);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(7,0.7097951);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(8,0.4277561);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(9,0.2200949);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(10,0.1127654);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(11,0.04513261);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(12,0.03570791);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(13,0.01721546);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(14,0.009377362);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(15,0.003253619);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(16,0.01511962);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(17,0.003333383);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(18,0.001115582);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(19,0.004907163);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(1,0.06977494);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(2,0.1007474);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(3,0.1042575);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(4,0.08773989);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(5,0.08467414);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(6,0.05928692);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(7,0.04180071);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(8,0.03277376);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(9,0.02395659);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(10,0.01657723);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(11,0.01074518);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(12,0.009701221);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(13,0.006625953);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(14,0.004813529);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(15,0.002359952);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(16,0.007724475);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(17,0.003333383);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(18,0.001115582);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(19,0.00357586);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(20,0.001227937);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(23,0.002930821);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(24,0.002001313);
   VbbHcc_tags_H_pt_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_2 = new TH1D("VbbHcc_tags_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(1,0.6152401);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(2,1.332079);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(3,1.914212);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(4,1.647757);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(5,0.9899624);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(6,0.5388503);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(7,0.2680425);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(8,0.1473278);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(9,0.07475162);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(10,0.03489215);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(11,0.01409298);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(12,0.009125146);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(13,0.004422587);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(14,0.002776977);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(19,0.0006273928);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(1,0.01517883);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(2,0.02094505);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(3,0.02506729);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(4,0.02394932);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(5,0.01827772);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(6,0.01328301);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(7,0.009568937);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(8,0.006955978);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(9,0.004840544);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(10,0.00338601);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(11,0.002093991);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(12,0.001710112);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(13,0.001214662);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(14,0.0009269769);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(19,0.000455775);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_tags_H_pt_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_all->Modified();
   H_pt_tags_all->cd();
   H_pt_tags_all->SetSelected(H_pt_tags_all);
}
