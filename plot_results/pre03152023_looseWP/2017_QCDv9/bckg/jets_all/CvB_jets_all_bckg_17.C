#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_17()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_17/CvB_jets_all_bckg_17
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_17 = new TCanvas("CvB_jets_all_bckg_17", "CvB_jets_all_bckg_17",0,0,600,600);
   CvB_jets_all_bckg_17->SetHighLightColor(2);
   CvB_jets_all_bckg_17->Range(-0.2183529,-2.25207e+11,1.171633,1.651518e+12);
   CvB_jets_all_bckg_17->SetFillColor(0);
   CvB_jets_all_bckg_17->SetFillStyle(4000);
   CvB_jets_all_bckg_17->SetBorderMode(0);
   CvB_jets_all_bckg_17->SetBorderSize(2);
   CvB_jets_all_bckg_17->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_17->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_17->SetBottomMargin(0.12);
   CvB_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_17->SetFrameBorderMode(0);
   CvB_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.463846e+12);
   
   TH1F *st_stack_178 = new TH1F("st_stack_178","",20,0,1);
   st_stack_178->SetMinimum(0);
   st_stack_178->SetMaximum(1.463846e+12);
   st_stack_178->SetDirectory(0);
   st_stack_178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_178->SetLineColor(ci);
   st_stack_178->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_178->GetXaxis()->SetRange(1,20);
   st_stack_178->GetXaxis()->SetLabelFont(42);
   st_stack_178->GetXaxis()->SetTitleOffset(1);
   st_stack_178->GetXaxis()->SetTitleFont(42);
   st_stack_178->GetYaxis()->SetTitle("Event/0.05");
   st_stack_178->GetYaxis()->SetLabelFont(42);
   st_stack_178->GetYaxis()->SetTitleSize(0.037);
   st_stack_178->GetYaxis()->SetTitleFont(42);
   st_stack_178->GetZaxis()->SetLabelFont(42);
   st_stack_178->GetZaxis()->SetTitleOffset(1);
   st_stack_178->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_178);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,3.737974e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.171961e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.128011e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.388468e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.935386e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,2.878488e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,4.264409e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,6.223223e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,9.693758e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.751846e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,3.571074e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.153936e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.214957e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,7.653576e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,6.420538e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,6.82469e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,8.113312e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,8.286991e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,3.699564e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,2.12088e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.380354e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.348229e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.327074e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.476149e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.746795e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,2.134663e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.601723e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,3.145222e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.927208e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,5.282214e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,7.547288e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.358581e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.393687e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.105121e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.010089e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.038938e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.129904e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.129773e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.475746e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.70745e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.90024e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,2.832654e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,4917856);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,3436187);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,3248467);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,3304256);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,3347896);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,3649965);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,4314035);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,5641007);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,7703915);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.233786e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,3.176839e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,3.435721e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,2.479445e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,2.326473e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.505869e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.946307e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,3.147059e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,2.343767e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,3331588);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1362.721);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,567.8047);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,474.2829);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,459.9119);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,463.1671);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,466.6262);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,487.4298);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,527.7985);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,600.5674);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,705.5548);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,895.1338);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1436.088);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1494.831);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1271.421);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1236.344);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1295.915);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1410.058);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1475.003);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1289.378);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,486.972);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(5.265984e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   CvB_jets_all_bckg_17->Modified();
   CvB_jets_all_bckg_17->cd();
   CvB_jets_all_bckg_17->SetSelected(CvB_jets_all_bckg_17);
}
