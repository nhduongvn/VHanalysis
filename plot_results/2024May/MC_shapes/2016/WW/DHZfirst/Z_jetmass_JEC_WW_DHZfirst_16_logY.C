#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_DHZfirst_16/Z_jetmass_JEC_WW_DHZfirst_16
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_DHZfirst_16 = new TCanvas("Z_jetmass_JEC_WW_DHZfirst_16", "Z_jetmass_JEC_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_JEC_WW_DHZfirst_16->Range(-60,-1.651609,340,0.5720176);
   Z_jetmass_JEC_WW_DHZfirst_16->SetFillColor(0);
   Z_jetmass_JEC_WW_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_JEC_WW_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_JEC_WW_DHZfirst_16->SetLogy();
   Z_jetmass_JEC_WW_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2152 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2152","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(4,0.417289);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(5,0.4253698);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(6,1.107905);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(7,1.016064);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(8,1.180609);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(9,0.3222269);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(10,0.1043302);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(11,0.3496964);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(12,0.4907291);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(13,0.5111818);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(14,0.1045084);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(15,0.2291411);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(16,0.07443615);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(17,0.3875262);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(18,0.1137917);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(19,0.1135456);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(21,0.1509587);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinContent(40,0.1252842);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(4,0.2105713);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(5,0.1995527);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(6,0.3396661);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(7,0.3252137);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(8,0.3842391);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(9,0.1879594);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(10,0.1043302);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(11,0.2031152);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(12,0.24989);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(13,0.2318491);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(14,0.1045084);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(15,0.1651666);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(16,0.07443615);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(17,0.2243183);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(18,0.1137917);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(19,0.1135456);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(21,0.1509587);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetBinError(40,0.1252842);
   VH_DHZfirst_Z_jetmass_JEC__2152->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2152->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2152->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2152->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2152->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2152->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_DHZfirst_16->Modified();
   Z_jetmass_JEC_WW_DHZfirst_16->cd();
   Z_jetmass_JEC_WW_DHZfirst_16->SetSelected(Z_jetmass_JEC_WW_DHZfirst_16);
}
