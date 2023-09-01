#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.2,-0.8299445,6.8,7.4695);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__191 = new TH1D("VbbHcc_tags_Z_dR_Bj0__191","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(1,0.7296215);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(2,4.620936);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(3,6.323386);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(4,4.377729);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(5,3.648107);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(6,3.161693);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(7,1.459243);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(8,1.945657);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(9,2.188864);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(10,2.918486);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(11,1.945657);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(12,1.945657);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(13,1.945657);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(14,1.216036);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(15,1.216036);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(16,0.4864143);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(17,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(18,0.9728286);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(20,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinContent(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(1,0.4212471);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(2,1.060115);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(3,1.240118);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(4,1.031841);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(5,0.9419372);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(6,0.8768959);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(7,0.5957334);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(8,0.6878937);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(9,0.7296215);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(10,0.8424943);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(11,0.6878937);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(12,0.6878937);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(13,0.6878937);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(14,0.5438277);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(15,0.5438277);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(16,0.3439469);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(17,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(18,0.4864143);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(20,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetBinError(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0__191->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0__191->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj0__191->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0__191->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0__191->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__191->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__191->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__191->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__191->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__191->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__191->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__191->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__191->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
