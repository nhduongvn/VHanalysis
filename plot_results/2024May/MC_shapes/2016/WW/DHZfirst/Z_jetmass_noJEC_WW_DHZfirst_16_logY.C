#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WW_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WW_DHZfirst_16/Z_jetmass_noJEC_WW_DHZfirst_16
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WW_DHZfirst_16 = new TCanvas("Z_jetmass_noJEC_WW_DHZfirst_16", "Z_jetmass_noJEC_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_noJEC_WW_DHZfirst_16->Range(-60,-1.687278,340,0.5445159);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetFillColor(0);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetLogy();
   Z_jetmass_noJEC_WW_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2122 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2122","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(4,0.417289);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(5,0.5945902);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(6,1.106083);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(7,1.095603);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(8,0.8368446);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(9,0.4190542);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(10,0.1043302);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(11,0.248774);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(12,0.5916515);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(13,0.4424859);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(14,0.1045084);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(15,0.06869593);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(16,0.3035773);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(17,0.3875262);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(18,0.2273373);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(22,0.1509587);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinContent(39,0.1252842);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(4,0.2105713);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(5,0.2326918);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(6,0.338903);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(7,0.3529989);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(8,0.3248339);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(9,0.2116617);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(10,0.1043302);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(11,0.1762681);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(12,0.2695002);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(13,0.2214382);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(14,0.1045084);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(15,0.06869593);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(16,0.181165);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(17,0.2243183);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(18,0.1607519);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(22,0.1509587);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetBinError(39,0.1252842);
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2122->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2122->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2122->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WW_DHZfirst_16->Modified();
   Z_jetmass_noJEC_WW_DHZfirst_16->cd();
   Z_jetmass_noJEC_WW_DHZfirst_16->SetSelected(Z_jetmass_noJEC_WW_DHZfirst_16);
}
