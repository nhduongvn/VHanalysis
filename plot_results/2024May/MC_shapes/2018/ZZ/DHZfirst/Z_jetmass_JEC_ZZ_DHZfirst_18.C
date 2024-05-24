#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_ZZ_DHZfirst_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_ZZ_DHZfirst_18/Z_jetmass_JEC_ZZ_DHZfirst_18
//=========  (Fri May 24 12:42:36 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_ZZ_DHZfirst_18 = new TCanvas("Z_jetmass_JEC_ZZ_DHZfirst_18", "Z_jetmass_JEC_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_ZZ_DHZfirst_18->Range(-60,-0.8589867,340,7.73088);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetFillColor(0);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2160 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2160","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(5,1.132695);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(6,3.342955);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(7,5.923992);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(8,3.212543);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(9,6.54466);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(10,5.079463);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(11,3.226821);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(12,3.274893);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(13,0.5741583);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(14,1.413194);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(15,1.246427);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(16,0.3829056);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(19,0.8481652);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(33,0.5031122);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinContent(45,0.4015089);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(5,0.6691722);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(6,1.605533);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(7,1.649215);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(8,1.049519);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(9,1.778737);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(10,1.398161);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(11,1.163137);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(12,1.367649);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(13,0.4061929);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(14,0.7108618);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(15,0.9371314);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(16,0.3829056);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(19,0.6178028);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(33,0.5031122);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetBinError(45,0.4015089);
   VH_DHZfirst_Z_jetmass_JEC__2160->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2160->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2160->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2160->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2160->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2160->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_ZZ_DHZfirst_18->Modified();
   Z_jetmass_JEC_ZZ_DHZfirst_18->cd();
   Z_jetmass_JEC_ZZ_DHZfirst_18->SetSelected(Z_jetmass_JEC_ZZ_DHZfirst_18);
}
