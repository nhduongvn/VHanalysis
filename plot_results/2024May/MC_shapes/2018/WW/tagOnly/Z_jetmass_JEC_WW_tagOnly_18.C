#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_tagOnly_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_tagOnly_18/Z_jetmass_JEC_WW_tagOnly_18
//=========  (Fri May 24 12:42:25 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_tagOnly_18 = new TCanvas("Z_jetmass_JEC_WW_tagOnly_18", "Z_jetmass_JEC_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_tagOnly_18->SetHighLightColor(2);
   Z_jetmass_JEC_WW_tagOnly_18->Range(-60,-2.421514,340,21.79363);
   Z_jetmass_JEC_WW_tagOnly_18->SetFillColor(0);
   Z_jetmass_JEC_WW_tagOnly_18->SetFillStyle(4000);
   Z_jetmass_JEC_WW_tagOnly_18->SetBorderMode(0);
   Z_jetmass_JEC_WW_tagOnly_18->SetBorderSize(2);
   Z_jetmass_JEC_WW_tagOnly_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_tagOnly_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_JEC__1434 = new TH1D("VH_tagOnly_Z_jetmass_JEC__1434","",150,0,300);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(3,0.6646294);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(4,3.428511);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(5,8.948478);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(6,18.44963);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(7,13.47964);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(8,14.66837);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(9,13.08997);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(10,6.192045);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(11,4.419926);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(12,5.871525);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(13,5.056246);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(14,4.074304);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(15,1.809587);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(16,0.8086161);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(17,0.4813043);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(18,1.548938);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(19,1.443271);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(20,1.26019);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(23,1.18051);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(36,0.6277395);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinContent(47,0.6842769);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(3,0.6646294);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(4,2.697315);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(5,2.924034);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(6,3.915452);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(7,3.116467);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(8,3.16199);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(9,3.716675);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(10,2.684157);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(11,1.972484);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(12,2.460518);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(13,2.347547);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(14,2.050322);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(15,1.410469);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(16,0.8086161);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(17,0.4813043);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(18,1.548938);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(19,1.021118);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(20,1.26019);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(23,1.18051);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(36,0.6277395);
   VH_tagOnly_Z_jetmass_JEC__1434->SetBinError(47,0.6842769);
   VH_tagOnly_Z_jetmass_JEC__1434->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_JEC__1434->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_JEC__1434->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_Z_jetmass_JEC__1434->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_JEC__1434->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1434->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__1434->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1434->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_JEC__1434->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1434->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_JEC__1434->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_JEC__1434->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_JEC__1434->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1434->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1434->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__1434->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1434->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_tagOnly_18->Modified();
   Z_jetmass_JEC_WW_tagOnly_18->cd();
   Z_jetmass_JEC_WW_tagOnly_18->SetSelected(Z_jetmass_JEC_WW_tagOnly_18);
}
