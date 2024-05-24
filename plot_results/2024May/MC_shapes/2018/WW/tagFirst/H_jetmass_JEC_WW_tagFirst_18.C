#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_WW_tagFirst_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_WW_tagFirst_18/H_jetmass_JEC_WW_tagFirst_18
//=========  (Fri May 24 12:42:13 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_WW_tagFirst_18 = new TCanvas("H_jetmass_JEC_WW_tagFirst_18", "H_jetmass_JEC_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_WW_tagFirst_18->SetHighLightColor(2);
   H_jetmass_JEC_WW_tagFirst_18->Range(-60,-2.609518,340,23.48566);
   H_jetmass_JEC_WW_tagFirst_18->SetFillColor(0);
   H_jetmass_JEC_WW_tagFirst_18->SetFillStyle(4000);
   H_jetmass_JEC_WW_tagFirst_18->SetBorderMode(0);
   H_jetmass_JEC_WW_tagFirst_18->SetBorderSize(2);
   H_jetmass_JEC_WW_tagFirst_18->SetLeftMargin(0.15);
   H_jetmass_JEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagFirst_18->SetFrameBorderMode(0);
   H_jetmass_JEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_JEC__594 = new TH1D("VH_tagFirst_H_jetmass_JEC__594","",150,0,300);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(3,1.51623);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(4,10.85449);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(5,19.88204);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(6,18.20493);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(7,15.96139);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(8,9.05433);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(9,5.301128);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(10,12.58663);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(11,2.233712);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(12,4.938598);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(13,4.779446);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(14,1.692386);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(15,1.285731);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(17,0.2917935);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(18,1.761011);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(19,0.4813809);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(20,0.6140818);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(21,0.5220207);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(23,0.4851978);
   VH_tagFirst_H_jetmass_JEC__594->SetBinContent(44,0.3599908);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(3,1.092027);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(4,3.511974);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(5,4.139759);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(6,4.428755);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(7,3.92742);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(8,3.083191);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(9,2.004061);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(10,3.719181);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(11,1.186063);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(12,1.966295);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(13,1.984501);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(14,0.9917296);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(15,0.9294527);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(17,0.2917935);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(18,1.074277);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(19,0.4813809);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(20,0.6140818);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(21,0.5220207);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(23,0.4851978);
   VH_tagFirst_H_jetmass_JEC__594->SetBinError(44,0.3599908);
   VH_tagFirst_H_jetmass_JEC__594->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_jetmass_JEC__594->SetLineColor(ci);
   VH_tagFirst_H_jetmass_JEC__594->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_H_jetmass_JEC__594->GetXaxis()->SetRange(1,150);
   VH_tagFirst_H_jetmass_JEC__594->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__594->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__594->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__594->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_H_jetmass_JEC__594->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__594->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_jetmass_JEC__594->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_jetmass_JEC__594->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_jetmass_JEC__594->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__594->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__594->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__594->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__594->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_WW_tagFirst_18->Modified();
   H_jetmass_JEC_WW_tagFirst_18->cd();
   H_jetmass_JEC_WW_tagFirst_18->SetSelected(H_jetmass_JEC_WW_tagFirst_18);
}
