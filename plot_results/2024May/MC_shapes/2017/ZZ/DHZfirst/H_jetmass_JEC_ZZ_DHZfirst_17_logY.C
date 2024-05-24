#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_ZZ_DHZfirst_17/H_jetmass_JEC_ZZ_DHZfirst_17
//=========  (Thu May 23 20:48:54 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_ZZ_DHZfirst_17 = new TCanvas("H_jetmass_JEC_ZZ_DHZfirst_17", "H_jetmass_JEC_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetHighLightColor(2);
   H_jetmass_JEC_ZZ_DHZfirst_17->Range(-60,-1.160152,340,0.9108767);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetFillColor(0);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetFillStyle(4000);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetBorderMode(0);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetBorderSize(2);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetLogy();
   H_jetmass_JEC_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_JEC__2039 = new TH1D("VH_DHZfirst_H_jetmass_JEC__2039","",150,0,300);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(6,0.6228379);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(7,2.66824);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(8,1.783478);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(9,2.37564);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(10,0.966237);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(11,1.164804);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(12,1.688319);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(13,0.6767126);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(15,0.5953225);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(16,0.8148222);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(17,0.2795592);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(19,1.688364);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(20,0.7973471);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(22,0.6217049);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(23,1.403428);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(24,0.7073381);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinContent(26,0.2228338);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(6,0.3604881);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(7,0.7364115);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(8,0.5806613);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(9,0.7216814);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(10,0.4329732);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(11,0.4884173);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(12,0.6167942);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(13,0.3992106);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(15,0.3437985);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(16,0.4865788);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(17,0.2795592);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(19,0.8897721);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(20,0.513352);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(22,0.6217049);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(23,1.121994);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(24,0.5775613);
   VH_DHZfirst_H_jetmass_JEC__2039->SetBinError(26,0.2228338);
   VH_DHZfirst_H_jetmass_JEC__2039->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_JEC__2039->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_JEC__2039->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetmass_JEC__2039->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_JEC__2039->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2039->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__2039->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2039->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_JEC__2039->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2039->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_JEC__2039->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_JEC__2039->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_JEC__2039->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2039->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2039->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__2039->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2039->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_ZZ_DHZfirst_17->Modified();
   H_jetmass_JEC_ZZ_DHZfirst_17->cd();
   H_jetmass_JEC_ZZ_DHZfirst_17->SetSelected(H_jetmass_JEC_ZZ_DHZfirst_17);
}
