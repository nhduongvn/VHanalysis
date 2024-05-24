#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_tagFirst_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_tagFirst_18/Z_jetmass_JEC_WW_tagFirst_18
//=========  (Fri May 24 12:42:15 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_tagFirst_18 = new TCanvas("Z_jetmass_JEC_WW_tagFirst_18", "Z_jetmass_JEC_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_tagFirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_WW_tagFirst_18->Range(-60,-2.407452,340,21.66707);
   Z_jetmass_JEC_WW_tagFirst_18->SetFillColor(0);
   Z_jetmass_JEC_WW_tagFirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_WW_tagFirst_18->SetBorderMode(0);
   Z_jetmass_JEC_WW_tagFirst_18->SetBorderSize(2);
   Z_jetmass_JEC_WW_tagFirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_tagFirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_JEC__714 = new TH1D("VH_tagFirst_Z_jetmass_JEC__714","",150,0,300);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(3,0.6646294);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(4,4.66141);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(5,9.410242);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(6,18.34249);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(7,13.47964);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(8,14.66837);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(9,13.08997);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(10,6.192045);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(11,4.926172);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(12,6.697224);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(13,5.409709);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(14,4.539104);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(15,2.690656);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(16,0.8086161);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(17,0.4813043);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(18,1.548938);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(19,1.443271);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(20,1.26019);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(23,1.18051);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(36,0.6277395);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinContent(47,0.6842769);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(3,0.6646294);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(4,2.965729);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(5,3.086382);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(6,3.903046);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(7,3.116467);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(8,3.16199);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(9,3.716675);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(10,2.684157);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(11,2.036413);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(12,2.595367);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(13,2.374008);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(14,2.102346);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(15,1.663041);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(16,0.8086161);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(17,0.4813043);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(18,1.548938);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(19,1.021118);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(20,1.26019);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(23,1.18051);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(36,0.6277395);
   VH_tagFirst_Z_jetmass_JEC__714->SetBinError(47,0.6842769);
   VH_tagFirst_Z_jetmass_JEC__714->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_jetmass_JEC__714->SetLineColor(ci);
   VH_tagFirst_Z_jetmass_JEC__714->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_Z_jetmass_JEC__714->GetXaxis()->SetRange(1,150);
   VH_tagFirst_Z_jetmass_JEC__714->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__714->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__714->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__714->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_Z_jetmass_JEC__714->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__714->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_jetmass_JEC__714->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_jetmass_JEC__714->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_jetmass_JEC__714->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__714->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__714->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__714->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__714->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_tagFirst_18->Modified();
   Z_jetmass_JEC_WW_tagFirst_18->cd();
   Z_jetmass_JEC_WW_tagFirst_18->SetSelected(Z_jetmass_JEC_WW_tagFirst_18);
}
