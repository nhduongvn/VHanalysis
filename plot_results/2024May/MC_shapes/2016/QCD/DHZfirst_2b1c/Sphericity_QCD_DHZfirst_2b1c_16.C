#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_QCD_DHZfirst_2b1c_16/Sphericity_QCD_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_DHZfirst_2b1c_16 = new TCanvas("Sphericity_QCD_DHZfirst_2b1c_16", "Sphericity_QCD_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_QCD_DHZfirst_2b1c_16->Range(-0.2,-81438.75,1.133333,732948.7);
   Sphericity_QCD_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_QCD_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_QCD_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_QCD_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_QCD_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_QCD_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_QCD_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4027 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4027","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(1,620485.7);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(2,592021.6);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(3,350362);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(4,171782.8);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(5,96592.92);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(6,34734.31);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(7,9815.843);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(8,1647.001);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(9,710.0913);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(10,501.9583);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(11,98.37887);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(12,25.55309);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(13,34.59038);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(14,87.43187);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(15,8.519982);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(16,14.71158);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(17,1.002264);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinContent(18,22.22808);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(1,11914.65);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(2,12397.21);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(3,27894.67);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(4,6536.563);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(5,15160.67);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(6,2899.168);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(7,1617.069);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(8,387.0839);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(9,303.4216);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(10,292.226);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(11,34.59304);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(12,12.71628);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(13,20.52501);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(14,34.2696);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(15,6.682494);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(16,7.561672);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(17,1.002264);
   VH_DHZfirst_2b1c_Sphericity__4027->SetBinError(18,20.19332);
   VH_DHZfirst_2b1c_Sphericity__4027->SetEntries(91493);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4027->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4027->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4027->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4027->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4027->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4027->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4027->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4027->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4027->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4027->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4027->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4027->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4027->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4027->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4027->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4027->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_DHZfirst_2b1c_16->Modified();
   Sphericity_QCD_DHZfirst_2b1c_16->cd();
   Sphericity_QCD_DHZfirst_2b1c_16->SetSelected(Sphericity_QCD_DHZfirst_2b1c_16);
}
