#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_ZZ_DHZfirst_18/Z_dR_ZZ_DHZfirst_18
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZZ_DHZfirst_18 = new TCanvas("Z_dR_ZZ_DHZfirst_18", "Z_dR_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZZ_DHZfirst_18->SetHighLightColor(2);
   Z_dR_ZZ_DHZfirst_18->Range(-1.2,-1.063863,6.8,1.549636);
   Z_dR_ZZ_DHZfirst_18->SetFillColor(0);
   Z_dR_ZZ_DHZfirst_18->SetFillStyle(4000);
   Z_dR_ZZ_DHZfirst_18->SetBorderMode(0);
   Z_dR_ZZ_DHZfirst_18->SetBorderSize(2);
   Z_dR_ZZ_DHZfirst_18->SetLogy();
   Z_dR_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1590 = new TH1D("VH_DHZfirst_Z_dR__1590","",30,0,6);
   VH_DHZfirst_Z_dR__1590->SetBinContent(3,6.332595);
   VH_DHZfirst_Z_dR__1590->SetBinContent(4,10.25031);
   VH_DHZfirst_Z_dR__1590->SetBinContent(5,5.766452);
   VH_DHZfirst_Z_dR__1590->SetBinContent(6,4.747407);
   VH_DHZfirst_Z_dR__1590->SetBinContent(7,1.064019);
   VH_DHZfirst_Z_dR__1590->SetBinContent(8,1.742961);
   VH_DHZfirst_Z_dR__1590->SetBinContent(9,0.7833602);
   VH_DHZfirst_Z_dR__1590->SetBinContent(10,1.534245);
   VH_DHZfirst_Z_dR__1590->SetBinContent(11,0.3610522);
   VH_DHZfirst_Z_dR__1590->SetBinContent(13,0.3920244);
   VH_DHZfirst_Z_dR__1590->SetBinContent(14,1.006319);
   VH_DHZfirst_Z_dR__1590->SetBinContent(17,0.3226983);
   VH_DHZfirst_Z_dR__1590->SetBinContent(19,0.4015089);
   VH_DHZfirst_Z_dR__1590->SetBinContent(27,0.3674103);
   VH_DHZfirst_Z_dR__1590->SetBinContent(28,0.3151498);
   VH_DHZfirst_Z_dR__1590->SetBinContent(29,1.364874);
   VH_DHZfirst_Z_dR__1590->SetBinContent(30,0.3551104);
   VH_DHZfirst_Z_dR__1590->SetBinError(3,1.776706);
   VH_DHZfirst_Z_dR__1590->SetBinError(4,2.154321);
   VH_DHZfirst_Z_dR__1590->SetBinError(5,1.603816);
   VH_DHZfirst_Z_dR__1590->SetBinError(6,1.405958);
   VH_DHZfirst_Z_dR__1590->SetBinError(7,0.6193633);
   VH_DHZfirst_Z_dR__1590->SetBinError(8,0.9871498);
   VH_DHZfirst_Z_dR__1590->SetBinError(9,0.5574304);
   VH_DHZfirst_Z_dR__1590->SetBinError(10,1.278362);
   VH_DHZfirst_Z_dR__1590->SetBinError(11,0.3610522);
   VH_DHZfirst_Z_dR__1590->SetBinError(13,0.3920244);
   VH_DHZfirst_Z_dR__1590->SetBinError(14,0.7115749);
   VH_DHZfirst_Z_dR__1590->SetBinError(17,0.261486);
   VH_DHZfirst_Z_dR__1590->SetBinError(19,0.4015089);
   VH_DHZfirst_Z_dR__1590->SetBinError(27,0.3674103);
   VH_DHZfirst_Z_dR__1590->SetBinError(28,0.3151498);
   VH_DHZfirst_Z_dR__1590->SetBinError(29,0.8062712);
   VH_DHZfirst_Z_dR__1590->SetBinError(30,0.3551104);
   VH_DHZfirst_Z_dR__1590->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1590->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1590->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1590->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1590->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1590->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1590->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1590->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1590->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1590->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1590->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1590->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1590->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1590->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1590->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1590->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1590->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZZ_DHZfirst_18->Modified();
   Z_dR_ZZ_DHZfirst_18->cd();
   Z_dR_ZZ_DHZfirst_18->SetSelected(Z_dR_ZZ_DHZfirst_18);
}
