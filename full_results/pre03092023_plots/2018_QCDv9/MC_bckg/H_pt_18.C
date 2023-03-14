#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_18()
{
//=========Macro generated from canvas: H_pt_18/H_pt_18
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_pt_18 = new TCanvas("H_pt_18", "H_pt_18",0,0,600,600);
   H_pt_18->SetHighLightColor(2);
   H_pt_18->Range(37.97653,-0.1538462,1705.96,1.128205);
   H_pt_18->SetFillColor(0);
   H_pt_18->SetFillStyle(4000);
   H_pt_18->SetBorderMode(0);
   H_pt_18->SetBorderSize(2);
   H_pt_18->SetLeftMargin(0.15709);
   H_pt_18->SetRightMargin(0.1234783);
   H_pt_18->SetBottomMargin(0.12);
   H_pt_18->SetFrameFillStyle(1000);
   H_pt_18->SetFrameBorderMode(0);
   H_pt_18->SetFrameFillStyle(1000);
   H_pt_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",40,0,2000);
   st_stack_60->SetMinimum(0);
   st_stack_60->SetMaximum(0);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_60->GetXaxis()->SetRange(7,30);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/50.0");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_MC_H_pt_stack_1 = new TH1D("VbbHcc_MC_H_pt_stack_1","",40,0,2000);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_H_pt_stack_2 = new TH1D("VbbHcc_MC_H_pt_stack_2","",40,0,2000);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_1","QCD","F");

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
   H_pt_18->Modified();
   H_pt_18->cd();
   H_pt_18->SetSelected(H_pt_18);
}
