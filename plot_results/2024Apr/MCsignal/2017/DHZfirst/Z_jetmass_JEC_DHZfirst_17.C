#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_DHZfirst_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_DHZfirst_17/Z_jetmass_JEC_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_DHZfirst_17 = new TCanvas("Z_jetmass_JEC_DHZfirst_17", "Z_jetmass_JEC_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_JEC_DHZfirst_17->Range(-60,-0.004800226,340,0.04320203);
   Z_jetmass_JEC_DHZfirst_17->SetFillColor(0);
   Z_jetmass_JEC_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_JEC_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_JEC_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_JEC_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__215 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__215","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(5,0.003308876);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(6,0.01278279);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(7,0.03657315);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(8,0.0246289);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(9,0.03257464);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(10,0.03208164);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(11,0.03462039);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(12,0.01559272);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(13,0.01296976);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(14,0.01356197);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(15,0.004856213);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(16,0.009716075);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(17,0.001229737);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(18,0.009562265);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(19,0.0007242422);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(20,0.0003658757);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(21,0.004297361);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(24,0.001398903);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinContent(59,0.002896017);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(5,0.002359582);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(6,0.003896095);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(7,0.007240132);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(8,0.005800096);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(9,0.007128568);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(10,0.006927405);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(11,0.006816035);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(12,0.004303453);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(13,0.00454741);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(14,0.004554127);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(15,0.002266815);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(16,0.004125142);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(17,0.0009178759);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(18,0.004815771);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(19,0.0007242422);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(20,0.0003658757);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(21,0.002489779);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(24,0.001398903);
   VH_DHZfirst_Z_jetmass_JEC__215->SetBinError(59,0.002896017);
   VH_DHZfirst_Z_jetmass_JEC__215->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__215->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__215->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__215->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__215->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__215->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__215->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__215->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__215->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__215->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__215->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__215->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__215->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__215->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__215->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__215->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__215->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_DHZfirst_17->Modified();
   Z_jetmass_JEC_DHZfirst_17->cd();
   Z_jetmass_JEC_DHZfirst_17->SetSelected(Z_jetmass_JEC_DHZfirst_17);
}
