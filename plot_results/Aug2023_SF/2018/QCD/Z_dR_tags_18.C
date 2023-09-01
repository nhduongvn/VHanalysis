#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-2831.951,6.8,25487.56);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__64 = new TH1D("VbbHcc_tags_Z_dR__64","",30,0,6);
   VbbHcc_tags_Z_dR__64->SetBinContent(3,14248.7);
   VbbHcc_tags_Z_dR__64->SetBinContent(4,18194.32);
   VbbHcc_tags_Z_dR__64->SetBinContent(5,16648.54);
   VbbHcc_tags_Z_dR__64->SetBinContent(6,8997.34);
   VbbHcc_tags_Z_dR__64->SetBinContent(7,9569.191);
   VbbHcc_tags_Z_dR__64->SetBinContent(8,21576.77);
   VbbHcc_tags_Z_dR__64->SetBinContent(9,10741.16);
   VbbHcc_tags_Z_dR__64->SetBinContent(10,10398.42);
   VbbHcc_tags_Z_dR__64->SetBinContent(11,8174.994);
   VbbHcc_tags_Z_dR__64->SetBinContent(12,14423.25);
   VbbHcc_tags_Z_dR__64->SetBinContent(13,10183.53);
   VbbHcc_tags_Z_dR__64->SetBinContent(14,16792.42);
   VbbHcc_tags_Z_dR__64->SetBinContent(15,17865.46);
   VbbHcc_tags_Z_dR__64->SetBinContent(16,14017.46);
   VbbHcc_tags_Z_dR__64->SetBinContent(17,15611.21);
   VbbHcc_tags_Z_dR__64->SetBinContent(18,13035.62);
   VbbHcc_tags_Z_dR__64->SetBinContent(19,15845.05);
   VbbHcc_tags_Z_dR__64->SetBinContent(20,9863.852);
   VbbHcc_tags_Z_dR__64->SetBinContent(21,9229.786);
   VbbHcc_tags_Z_dR__64->SetBinContent(22,6855.943);
   VbbHcc_tags_Z_dR__64->SetBinContent(23,4561.557);
   VbbHcc_tags_Z_dR__64->SetBinContent(24,11898.06);
   VbbHcc_tags_Z_dR__64->SetBinContent(25,3668.654);
   VbbHcc_tags_Z_dR__64->SetBinContent(26,2033.445);
   VbbHcc_tags_Z_dR__64->SetBinContent(27,2222.403);
   VbbHcc_tags_Z_dR__64->SetBinContent(28,2290.334);
   VbbHcc_tags_Z_dR__64->SetBinContent(29,1626.18);
   VbbHcc_tags_Z_dR__64->SetBinContent(30,1665.346);
   VbbHcc_tags_Z_dR__64->SetBinContent(31,712.0927);
   VbbHcc_tags_Z_dR__64->SetBinError(3,1854.436);
   VbbHcc_tags_Z_dR__64->SetBinError(4,3324.055);
   VbbHcc_tags_Z_dR__64->SetBinError(5,3955.998);
   VbbHcc_tags_Z_dR__64->SetBinError(6,1431.649);
   VbbHcc_tags_Z_dR__64->SetBinError(7,1541.621);
   VbbHcc_tags_Z_dR__64->SetBinError(8,10093.63);
   VbbHcc_tags_Z_dR__64->SetBinError(9,1713.415);
   VbbHcc_tags_Z_dR__64->SetBinError(10,1888.223);
   VbbHcc_tags_Z_dR__64->SetBinError(11,1981.883);
   VbbHcc_tags_Z_dR__64->SetBinError(12,3891.089);
   VbbHcc_tags_Z_dR__64->SetBinError(13,1722.957);
   VbbHcc_tags_Z_dR__64->SetBinError(14,2418.575);
   VbbHcc_tags_Z_dR__64->SetBinError(15,2614.816);
   VbbHcc_tags_Z_dR__64->SetBinError(16,1834.071);
   VbbHcc_tags_Z_dR__64->SetBinError(17,2015.031);
   VbbHcc_tags_Z_dR__64->SetBinError(18,1901.905);
   VbbHcc_tags_Z_dR__64->SetBinError(19,2540.499);
   VbbHcc_tags_Z_dR__64->SetBinError(20,1655.754);
   VbbHcc_tags_Z_dR__64->SetBinError(21,1624.589);
   VbbHcc_tags_Z_dR__64->SetBinError(22,1537.458);
   VbbHcc_tags_Z_dR__64->SetBinError(23,985.2723);
   VbbHcc_tags_Z_dR__64->SetBinError(24,5904.587);
   VbbHcc_tags_Z_dR__64->SetBinError(25,1060.577);
   VbbHcc_tags_Z_dR__64->SetBinError(26,736.2623);
   VbbHcc_tags_Z_dR__64->SetBinError(27,580.4099);
   VbbHcc_tags_Z_dR__64->SetBinError(28,722.0998);
   VbbHcc_tags_Z_dR__64->SetBinError(29,496.0345);
   VbbHcc_tags_Z_dR__64->SetBinError(30,716.3372);
   VbbHcc_tags_Z_dR__64->SetBinError(31,184.4333);
   VbbHcc_tags_Z_dR__64->SetEntries(10096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR__64->SetFillColor(ci);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__64->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__64->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__64->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__64->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__64->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__64->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
