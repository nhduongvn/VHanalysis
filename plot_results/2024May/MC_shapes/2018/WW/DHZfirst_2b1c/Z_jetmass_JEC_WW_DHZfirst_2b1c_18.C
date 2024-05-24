#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_DHZfirst_2b1c_18/Z_jetmass_JEC_WW_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:12 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_DHZfirst_2b1c_18 = new TCanvas("Z_jetmass_JEC_WW_DHZfirst_2b1c_18", "Z_jetmass_JEC_WW_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetHighLightColor(2);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->Range(-60,-0.7685941,340,6.917347);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetFillColor(0);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetFillStyle(4000);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetBorderSize(2);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Z_jetmass_JEC__4314 = new TH1D("VH_DHZfirst_2b1c_Z_jetmass_JEC__4314","",150,0,300);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(4,0.684083);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(5,2.550367);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(6,2.578343);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(7,2.844253);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(8,5.855955);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(9,3.373755);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(10,3.406975);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(11,1.70529);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(12,1.727101);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(13,3.033744);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(14,1.575195);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(16,1.074503);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(17,0.741126);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(19,1.158346);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(20,0.6140818);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinContent(25,1.077687);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(4,0.684083);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(5,2.550367);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(6,2.184319);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(7,1.297649);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(8,1.855802);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(9,2.038598);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(10,1.437843);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(11,0.991191);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(12,1.008427);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(13,1.950282);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(14,1.19496);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(16,0.7845034);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(17,0.741126);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(19,1.158346);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(20,0.6140818);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetBinError(25,1.077687);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->SetLineColor(ci);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_jetmass_JEC__4314->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->Modified();
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->cd();
   Z_jetmass_JEC_WW_DHZfirst_2b1c_18->SetSelected(Z_jetmass_JEC_WW_DHZfirst_2b1c_18);
}
