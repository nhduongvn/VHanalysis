#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-0.07702988,6.8,0.6932688);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__85 = new TH1D("VbbHcc_tags_H_dR__85","",30,0,6);
   VbbHcc_tags_H_dR__85->SetBinContent(3,0.5868942);
   VbbHcc_tags_H_dR__85->SetBinContent(4,0.3721571);
   VbbHcc_tags_H_dR__85->SetBinContent(5,0.3390133);
   VbbHcc_tags_H_dR__85->SetBinContent(7,0.2932879);
   VbbHcc_tags_H_dR__85->SetBinContent(9,0.1099732);
   VbbHcc_tags_H_dR__85->SetBinContent(10,0.08004759);
   VbbHcc_tags_H_dR__85->SetBinContent(12,0.3074159);
   VbbHcc_tags_H_dR__85->SetBinContent(13,0.1113723);
   VbbHcc_tags_H_dR__85->SetBinContent(14,0.08024226);
   VbbHcc_tags_H_dR__85->SetBinContent(15,0.2078743);
   VbbHcc_tags_H_dR__85->SetBinContent(16,0.2222108);
   VbbHcc_tags_H_dR__85->SetBinContent(17,0.4470744);
   VbbHcc_tags_H_dR__85->SetBinContent(18,0.1704733);
   VbbHcc_tags_H_dR__85->SetBinContent(19,0.4061336);
   VbbHcc_tags_H_dR__85->SetBinContent(20,0.17027);
   VbbHcc_tags_H_dR__85->SetBinContent(21,0.2189022);
   VbbHcc_tags_H_dR__85->SetBinContent(24,0.1428178);
   VbbHcc_tags_H_dR__85->SetBinContent(26,0.08696594);
   VbbHcc_tags_H_dR__85->SetBinContent(27,0.08794218);
   VbbHcc_tags_H_dR__85->SetBinContent(28,0.0945323);
   VbbHcc_tags_H_dR__85->SetBinContent(30,0.05989596);
   VbbHcc_tags_H_dR__85->SetBinError(3,0.2441186);
   VbbHcc_tags_H_dR__85->SetBinError(4,0.1878535);
   VbbHcc_tags_H_dR__85->SetBinError(5,0.1696465);
   VbbHcc_tags_H_dR__85->SetBinError(7,0.1708011);
   VbbHcc_tags_H_dR__85->SetBinError(9,0.1099732);
   VbbHcc_tags_H_dR__85->SetBinError(10,0.08004759);
   VbbHcc_tags_H_dR__85->SetBinError(12,0.1798181);
   VbbHcc_tags_H_dR__85->SetBinError(13,0.1113723);
   VbbHcc_tags_H_dR__85->SetBinError(14,0.08024226);
   VbbHcc_tags_H_dR__85->SetBinError(15,0.1494523);
   VbbHcc_tags_H_dR__85->SetBinError(16,0.1636044);
   VbbHcc_tags_H_dR__85->SetBinError(17,0.2261283);
   VbbHcc_tags_H_dR__85->SetBinError(18,0.1214079);
   VbbHcc_tags_H_dR__85->SetBinError(19,0.1832713);
   VbbHcc_tags_H_dR__85->SetBinError(20,0.1242851);
   VbbHcc_tags_H_dR__85->SetBinError(21,0.1563995);
   VbbHcc_tags_H_dR__85->SetBinError(24,0.1428178);
   VbbHcc_tags_H_dR__85->SetBinError(26,0.08696594);
   VbbHcc_tags_H_dR__85->SetBinError(27,0.08794218);
   VbbHcc_tags_H_dR__85->SetBinError(28,0.0945323);
   VbbHcc_tags_H_dR__85->SetBinError(30,0.05989596);
   VbbHcc_tags_H_dR__85->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR__85->SetFillColor(ci);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__85->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__85->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__85->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__85->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__85->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__85->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__85->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
