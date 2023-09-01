#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_tags_18()
{
//=========Macro generated from canvas: dPhi_HZ_tags_18/dPhi_HZ_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *dPhi_HZ_tags_18 = new TCanvas("dPhi_HZ_tags_18", "dPhi_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_18->SetHighLightColor(2);
   dPhi_HZ_tags_18->Range(-5.6,-0.2903683,5.066667,2.613315);
   dPhi_HZ_tags_18->SetFillColor(0);
   dPhi_HZ_tags_18->SetBorderMode(0);
   dPhi_HZ_tags_18->SetBorderSize(2);
   dPhi_HZ_tags_18->SetLeftMargin(0.15);
   dPhi_HZ_tags_18->SetFrameBorderMode(0);
   dPhi_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ__130 = new TH1D("VbbHcc_tags_dPhi_HZ__130","",480,-4,4);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(93,0.5183212);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(94,0.4748496);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(111,0.670189);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(175,1.066253);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(177,2.21233);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(188,0.5616047);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(191,1.550928);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(194,0.6794818);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(195,0.8776001);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(197,0.3908613);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(198,0.7924306);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(207,0.5004492);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(218,0.5814054);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(223,0.1162559);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(228,1.290473);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(231,0.6214135);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(253,0.402246);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(256,0.6143759);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(258,0.5511003);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(264,0.7156926);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(274,1.610355);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(284,0.9532567);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(298,0.7371838);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(302,0.6869376);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(323,0.8259742);
   VbbHcc_tags_dPhi_HZ__130->SetBinContent(415,0.4220562);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(93,0.5183212);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(94,0.4748496);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(111,0.670189);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(175,1.066253);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(177,2.21233);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(188,0.5616047);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(191,1.550928);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(194,0.6794818);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(195,0.8776001);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(197,0.3908613);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(198,0.7924306);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(207,0.5004492);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(218,0.5814054);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(223,0.1162559);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(228,1.290473);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(231,0.6214135);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(253,0.402246);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(256,0.6143759);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(258,0.5511003);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(264,0.7156926);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(274,1.610355);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(284,0.9532567);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(298,0.7371838);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(302,0.6869376);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(323,0.8259742);
   VbbHcc_tags_dPhi_HZ__130->SetBinError(415,0.4220562);
   VbbHcc_tags_dPhi_HZ__130->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dPhi_HZ__130->SetFillColor(ci);
   VbbHcc_tags_dPhi_HZ__130->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_tags_dPhi_HZ__130->GetXaxis()->SetRange(1,480);
   VbbHcc_tags_dPhi_HZ__130->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ__130->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_dPhi_HZ__130->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ__130->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ__130->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ__130->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ__130->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_dPhi_HZ__130->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ__130->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_18->Modified();
   dPhi_HZ_tags_18->cd();
   dPhi_HZ_tags_18->SetSelected(dPhi_HZ_tags_18);
}
