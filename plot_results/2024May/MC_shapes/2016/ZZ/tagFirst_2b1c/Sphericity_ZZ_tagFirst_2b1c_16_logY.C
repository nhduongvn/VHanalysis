#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagFirst_2b1c_16/Sphericity_ZZ_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagFirst_2b1c_16 = new TCanvas("Sphericity_ZZ_tagFirst_2b1c_16", "Sphericity_ZZ_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZZ_tagFirst_2b1c_16->Range(-0.2,-1.053525,1.133333,2.797225);
   Sphericity_ZZ_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_ZZ_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZZ_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZZ_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZZ_tagFirst_2b1c_16->SetLogy();
   Sphericity_ZZ_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2608 = new TH1D("VH_tagFirst_2b1c_Sphericity__2608","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(1,136.3331);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(2,114.9644);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(3,59.16352);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(4,37.54056);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(5,25.63262);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(6,12.87605);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(7,4.889726);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(8,3.199439);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(9,1.771212);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(10,1.375571);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(11,0.630576);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(12,1.114141);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(13,0.4291211);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(14,0.6685402);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(15,0.450587);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinContent(18,0.4426558);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(1,5.312967);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(2,4.900955);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(3,3.497848);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(4,2.79455);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(5,2.349547);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(6,1.685777);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(7,1.003185);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(8,0.8174864);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(9,0.6301543);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(10,0.522997);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(11,0.3212378);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(12,0.5072578);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(13,0.308258);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(14,0.3877657);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(15,0.3186317);
   VH_tagFirst_2b1c_Sphericity__2608->SetBinError(18,0.3187798);
   VH_tagFirst_2b1c_Sphericity__2608->SetEntries(2009);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2608->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2608->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2608->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2608->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2608->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2608->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2608->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2608->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2608->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2608->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2608->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2608->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2608->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2608->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2608->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2608->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagFirst_2b1c_16->Modified();
   Sphericity_ZZ_tagFirst_2b1c_16->cd();
   Sphericity_ZZ_tagFirst_2b1c_16->SetSelected(Sphericity_ZZ_tagFirst_2b1c_16);
}
