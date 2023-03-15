#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_16()
{
//=========Macro generated from canvas: H_dR_16/H_dR_16
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_dR_16 = new TCanvas("H_dR_16", "H_dR_16",0,0,600,600);
   H_dR_16->SetHighLightColor(2);
   H_dR_16->Range(-1.353788,-0.1538462,7.264125,1.128205);
   H_dR_16->SetFillColor(0);
   H_dR_16->SetFillStyle(4000);
   H_dR_16->SetBorderMode(0);
   H_dR_16->SetBorderSize(2);
   H_dR_16->SetLeftMargin(0.15709);
   H_dR_16->SetRightMargin(0.1234783);
   H_dR_16->SetBottomMargin(0.12);
   H_dR_16->SetFrameFillStyle(1000);
   H_dR_16->SetFrameBorderMode(0);
   H_dR_16->SetFrameFillStyle(1000);
   H_dR_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",30,0,6);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(0);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_8->GetXaxis()->SetRange(1,31);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/0.2");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_MC_H_dR_stack_1 = new TH1D("VbbHcc_MC_H_dR_stack_1","",30,0,6);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_dR_stack_1,"");
   
   TH1D *VbbHcc_MC_H_dR_stack_2 = new TH1D("VbbHcc_MC_H_dR_stack_2","",30,0,6);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_dR_stack_1","QCD","F");

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
   H_dR_16->Modified();
   H_dR_16->cd();
   H_dR_16->SetSelected(H_dR_16);
}
