#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_WW_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_WW_DHZfirst_16/Z_dR_Bj1_WW_DHZfirst_16
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_WW_DHZfirst_16 = new TCanvas("Z_dR_Bj1_WW_DHZfirst_16", "Z_dR_Bj1_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_WW_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj1_WW_DHZfirst_16->Range(-1.2,-0.1763597,6.8,1.587237);
   Z_dR_Bj1_WW_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj1_WW_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj1_WW_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj1_WW_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj1_WW_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj1_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_WW_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj1_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1852 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1852","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(2,1.343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(3,1.209324);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(4,0.6718465);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(5,1.209324);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(6,0.9405851);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(7,0.6718465);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(8,0.5374772);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(9,0.2687386);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(10,0.2687386);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(11,0.5374772);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(12,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(13,0.2687386);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(15,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(16,0.2687386);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(17,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(21,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(22,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinContent(24,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(2,0.424913);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(3,0.4031079);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(4,0.3004589);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(5,0.4031079);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(6,0.3555077);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(7,0.3004589);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(8,0.2687386);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(9,0.1900269);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(10,0.1900269);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(11,0.2687386);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(12,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(13,0.1900269);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(15,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(16,0.1900269);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(17,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(21,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(22,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetBinError(24,0.1343693);
   VH_DHZfirst_Z_dR_Bj1__1852->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1852->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1852->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1852->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1852->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1852->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1852->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1852->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1852->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1852->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1852->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1852->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1852->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1852->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1852->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1852->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1852->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_WW_DHZfirst_16->Modified();
   Z_dR_Bj1_WW_DHZfirst_16->cd();
   Z_dR_Bj1_WW_DHZfirst_16->SetSelected(Z_dR_Bj1_WW_DHZfirst_16);
}
