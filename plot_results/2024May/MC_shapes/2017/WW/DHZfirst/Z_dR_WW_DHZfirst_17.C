#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WW_DHZfirst_17()
{
//=========Macro generated from canvas: Z_dR_WW_DHZfirst_17/Z_dR_WW_DHZfirst_17
//=========  (Fri May 24 12:42:27 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WW_DHZfirst_17 = new TCanvas("Z_dR_WW_DHZfirst_17", "Z_dR_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WW_DHZfirst_17->SetHighLightColor(2);
   Z_dR_WW_DHZfirst_17->Range(-1.2,-0.07425196,6.8,0.6682676);
   Z_dR_WW_DHZfirst_17->SetFillColor(0);
   Z_dR_WW_DHZfirst_17->SetFillStyle(4000);
   Z_dR_WW_DHZfirst_17->SetBorderMode(0);
   Z_dR_WW_DHZfirst_17->SetBorderSize(2);
   Z_dR_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1583 = new TH1D("VH_DHZfirst_Z_dR__1583","",30,0,6);
   VH_DHZfirst_Z_dR__1583->SetBinContent(3,0.5657292);
   VH_DHZfirst_Z_dR__1583->SetBinContent(4,0.2553652);
   VH_DHZfirst_Z_dR__1583->SetBinContent(5,0.1674855);
   VH_DHZfirst_Z_dR__1583->SetBinContent(7,0.4804545);
   VH_DHZfirst_Z_dR__1583->SetBinContent(10,0.152338);
   VH_DHZfirst_Z_dR__1583->SetBinContent(11,0.1947795);
   VH_DHZfirst_Z_dR__1583->SetBinContent(12,0.2037551);
   VH_DHZfirst_Z_dR__1583->SetBinContent(13,0.2353289);
   VH_DHZfirst_Z_dR__1583->SetBinContent(15,0.4893481);
   VH_DHZfirst_Z_dR__1583->SetBinContent(17,0.4922072);
   VH_DHZfirst_Z_dR__1583->SetBinContent(24,0.4956396);
   VH_DHZfirst_Z_dR__1583->SetBinContent(27,0.07791458);
   VH_DHZfirst_Z_dR__1583->SetBinContent(30,0.2290723);
   VH_DHZfirst_Z_dR__1583->SetBinError(3,0.4121141);
   VH_DHZfirst_Z_dR__1583->SetBinError(4,0.2553652);
   VH_DHZfirst_Z_dR__1583->SetBinError(5,0.1674855);
   VH_DHZfirst_Z_dR__1583->SetBinError(7,0.3438304);
   VH_DHZfirst_Z_dR__1583->SetBinError(10,0.152338);
   VH_DHZfirst_Z_dR__1583->SetBinError(11,0.1947795);
   VH_DHZfirst_Z_dR__1583->SetBinError(12,0.2037551);
   VH_DHZfirst_Z_dR__1583->SetBinError(13,0.2353289);
   VH_DHZfirst_Z_dR__1583->SetBinError(15,0.4893481);
   VH_DHZfirst_Z_dR__1583->SetBinError(17,0.4922072);
   VH_DHZfirst_Z_dR__1583->SetBinError(24,0.4956396);
   VH_DHZfirst_Z_dR__1583->SetBinError(27,0.07791458);
   VH_DHZfirst_Z_dR__1583->SetBinError(30,0.2290723);
   VH_DHZfirst_Z_dR__1583->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1583->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1583->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1583->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1583->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1583->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1583->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1583->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1583->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1583->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1583->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1583->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1583->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1583->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1583->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1583->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1583->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WW_DHZfirst_17->Modified();
   Z_dR_WW_DHZfirst_17->cd();
   Z_dR_WW_DHZfirst_17->SetSelected(Z_dR_WW_DHZfirst_17);
}
