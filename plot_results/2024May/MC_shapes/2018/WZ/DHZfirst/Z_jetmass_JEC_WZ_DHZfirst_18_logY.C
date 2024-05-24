#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WZ_DHZfirst_18/Z_jetmass_JEC_WZ_DHZfirst_18
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WZ_DHZfirst_18 = new TCanvas("Z_jetmass_JEC_WZ_DHZfirst_18", "Z_jetmass_JEC_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_WZ_DHZfirst_18->Range(-60,-0.8265878,340,1.608115);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetFillColor(0);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetLogy();
   Z_jetmass_JEC_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2157 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2157","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(4,1.553143);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(5,1.024704);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(6,2.977688);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(7,12.2207);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(8,7.328854);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(9,12.04112);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(10,3.557779);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(11,3.989037);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(12,2.19647);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(14,1.101973);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(15,2.0003);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(16,0.9133743);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(17,0.522291);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(18,1.389979);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(19,1.585573);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinContent(50,0.8015598);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(4,1.136319);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(5,0.7604658);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(6,1.702093);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(7,3.07565);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(8,2.25176);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(9,3.721668);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(10,1.529821);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(11,1.304633);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(12,1.156729);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(14,0.960074);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(15,1.210227);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(16,0.6646327);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(17,0.522291);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(18,1.018542);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(19,0.9956792);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetBinError(50,0.8015598);
   VH_DHZfirst_Z_jetmass_JEC__2157->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2157->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2157->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2157->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2157->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2157->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WZ_DHZfirst_18->Modified();
   Z_jetmass_JEC_WZ_DHZfirst_18->cd();
   Z_jetmass_JEC_WZ_DHZfirst_18->SetSelected(Z_jetmass_JEC_WZ_DHZfirst_18);
}
