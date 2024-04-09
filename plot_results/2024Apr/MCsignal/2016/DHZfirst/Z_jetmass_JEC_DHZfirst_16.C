#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_DHZfirst_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_DHZfirst_16/Z_jetmass_JEC_DHZfirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_DHZfirst_16 = new TCanvas("Z_jetmass_JEC_DHZfirst_16", "Z_jetmass_JEC_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_JEC_DHZfirst_16->Range(-60,-0.007230854,340,0.06507768);
   Z_jetmass_JEC_DHZfirst_16->SetFillColor(0);
   Z_jetmass_JEC_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_JEC_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_JEC_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_JEC_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__214 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__214","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(4,0.00359129);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(5,0.03411517);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(6,0.02919439);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(7,0.03966972);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(8,0.05509222);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(9,0.03906234);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(10,0.02801764);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(11,0.01939603);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(12,0.008545202);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(13,0.009734764);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(14,0.002110126);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(15,0.0174336);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(16,0.008292352);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(17,0.002402706);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(18,0.00532183);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(19,0.002002857);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(20,0.003824635);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(21,0.005467605);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(28,0.002209651);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(29,0.004348433);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinContent(48,0.002137465);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(4,0.002543323);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(5,0.007880127);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(6,0.007178918);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(7,0.008849548);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(8,0.01049096);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(9,0.00879049);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(10,0.007517647);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(11,0.006578881);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(12,0.004298838);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(13,0.004360763);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(14,0.002110126);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(15,0.006202171);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(16,0.004163629);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(17,0.002402706);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(18,0.003356134);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(19,0.002002857);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(20,0.002704954);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(21,0.003281576);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(28,0.002209651);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(29,0.003098676);
   VH_DHZfirst_Z_jetmass_JEC__214->SetBinError(48,0.002137465);
   VH_DHZfirst_Z_jetmass_JEC__214->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__214->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__214->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__214->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__214->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__214->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__214->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__214->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__214->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__214->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__214->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__214->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__214->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__214->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__214->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__214->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__214->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_DHZfirst_16->Modified();
   Z_jetmass_JEC_DHZfirst_16->cd();
   Z_jetmass_JEC_DHZfirst_16->SetSelected(Z_jetmass_JEC_DHZfirst_16);
}
