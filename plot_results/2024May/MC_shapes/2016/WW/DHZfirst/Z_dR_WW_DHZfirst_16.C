#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WW_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_WW_DHZfirst_16/Z_dR_WW_DHZfirst_16
//=========  (Fri May 24 12:42:27 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WW_DHZfirst_16 = new TCanvas("Z_dR_WW_DHZfirst_16", "Z_dR_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WW_DHZfirst_16->SetHighLightColor(2);
   Z_dR_WW_DHZfirst_16->Range(-1.2,-0.1359804,6.8,1.223824);
   Z_dR_WW_DHZfirst_16->SetFillColor(0);
   Z_dR_WW_DHZfirst_16->SetFillStyle(4000);
   Z_dR_WW_DHZfirst_16->SetBorderMode(0);
   Z_dR_WW_DHZfirst_16->SetBorderSize(2);
   Z_dR_WW_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_WW_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1582 = new TH1D("VH_DHZfirst_Z_dR__1582","",30,0,6);
   VH_DHZfirst_Z_dR__1582->SetBinContent(3,0.5747633);
   VH_DHZfirst_Z_dR__1582->SetBinContent(4,1.036041);
   VH_DHZfirst_Z_dR__1582->SetBinContent(5,0.3204594);
   VH_DHZfirst_Z_dR__1582->SetBinContent(6,0.5403561);
   VH_DHZfirst_Z_dR__1582->SetBinContent(7,0.5547197);
   VH_DHZfirst_Z_dR__1582->SetBinContent(8,0.2130307);
   VH_DHZfirst_Z_dR__1582->SetBinContent(9,0.4087193);
   VH_DHZfirst_Z_dR__1582->SetBinContent(10,0.1426888);
   VH_DHZfirst_Z_dR__1582->SetBinContent(11,0.443797);
   VH_DHZfirst_Z_dR__1582->SetBinContent(12,0.4968538);
   VH_DHZfirst_Z_dR__1582->SetBinContent(13,0.5015876);
   VH_DHZfirst_Z_dR__1582->SetBinContent(14,0.3199534);
   VH_DHZfirst_Z_dR__1582->SetBinContent(15,0.3336003);
   VH_DHZfirst_Z_dR__1582->SetBinContent(16,0.3730814);
   VH_DHZfirst_Z_dR__1582->SetBinContent(17,0.09361321);
   VH_DHZfirst_Z_dR__1582->SetBinContent(19,0.159288);
   VH_DHZfirst_Z_dR__1582->SetBinContent(20,0.1004705);
   VH_DHZfirst_Z_dR__1582->SetBinContent(21,0.1372332);
   VH_DHZfirst_Z_dR__1582->SetBinContent(24,0.2479084);
   VH_DHZfirst_Z_dR__1582->SetBinContent(28,0.1140604);
   VH_DHZfirst_Z_dR__1582->SetBinContent(31,0.1123678);
   VH_DHZfirst_Z_dR__1582->SetBinError(3,0.2654908);
   VH_DHZfirst_Z_dR__1582->SetBinError(4,0.3488074);
   VH_DHZfirst_Z_dR__1582->SetBinError(5,0.1858448);
   VH_DHZfirst_Z_dR__1582->SetBinError(6,0.2450073);
   VH_DHZfirst_Z_dR__1582->SetBinError(7,0.2297473);
   VH_DHZfirst_Z_dR__1582->SetBinError(8,0.1506416);
   VH_DHZfirst_Z_dR__1582->SetBinError(9,0.2074381);
   VH_DHZfirst_Z_dR__1582->SetBinError(10,0.1426888);
   VH_DHZfirst_Z_dR__1582->SetBinError(11,0.2281043);
   VH_DHZfirst_Z_dR__1582->SetBinError(12,0.2313398);
   VH_DHZfirst_Z_dR__1582->SetBinError(13,0.25595);
   VH_DHZfirst_Z_dR__1582->SetBinError(14,0.1944985);
   VH_DHZfirst_Z_dR__1582->SetBinError(15,0.1952697);
   VH_DHZfirst_Z_dR__1582->SetBinError(16,0.1879326);
   VH_DHZfirst_Z_dR__1582->SetBinError(17,0.09361321);
   VH_DHZfirst_Z_dR__1582->SetBinError(19,0.1136928);
   VH_DHZfirst_Z_dR__1582->SetBinError(20,0.1004705);
   VH_DHZfirst_Z_dR__1582->SetBinError(21,0.1372332);
   VH_DHZfirst_Z_dR__1582->SetBinError(24,0.1755448);
   VH_DHZfirst_Z_dR__1582->SetBinError(28,0.1140604);
   VH_DHZfirst_Z_dR__1582->SetBinError(31,0.1123678);
   VH_DHZfirst_Z_dR__1582->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1582->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1582->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1582->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1582->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1582->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1582->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1582->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1582->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1582->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1582->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1582->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1582->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1582->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1582->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1582->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1582->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WW_DHZfirst_16->Modified();
   Z_dR_WW_DHZfirst_16->cd();
   Z_dR_WW_DHZfirst_16->SetSelected(Z_dR_WW_DHZfirst_16);
}
