#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_DHZfirst_17()
{
//=========Macro generated from canvas: Z_dR_DHZfirst_17/Z_dR_DHZfirst_17
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_DHZfirst_17 = new TCanvas("Z_dR_DHZfirst_17", "Z_dR_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_DHZfirst_17->SetHighLightColor(2);
   Z_dR_DHZfirst_17->Range(-1.2,-0.009806451,6.8,0.08825806);
   Z_dR_DHZfirst_17->SetFillColor(0);
   Z_dR_DHZfirst_17->SetFillStyle(4000);
   Z_dR_DHZfirst_17->SetBorderMode(0);
   Z_dR_DHZfirst_17->SetBorderSize(2);
   Z_dR_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__158 = new TH1D("VH_DHZfirst_Z_dR__158","",30,0,6);
   VH_DHZfirst_Z_dR__158->SetBinContent(3,0.0456308);
   VH_DHZfirst_Z_dR__158->SetBinContent(4,0.07471581);
   VH_DHZfirst_Z_dR__158->SetBinContent(5,0.05251944);
   VH_DHZfirst_Z_dR__158->SetBinContent(6,0.02853078);
   VH_DHZfirst_Z_dR__158->SetBinContent(7,0.001510924);
   VH_DHZfirst_Z_dR__158->SetBinContent(8,0.001791796);
   VH_DHZfirst_Z_dR__158->SetBinContent(9,0.003150747);
   VH_DHZfirst_Z_dR__158->SetBinContent(10,0.004678083);
   VH_DHZfirst_Z_dR__158->SetBinContent(11,0.002669825);
   VH_DHZfirst_Z_dR__158->SetBinContent(12,0.001784485);
   VH_DHZfirst_Z_dR__158->SetBinContent(13,0.002683607);
   VH_DHZfirst_Z_dR__158->SetBinContent(14,0.001438455);
   VH_DHZfirst_Z_dR__158->SetBinContent(15,0.00372083);
   VH_DHZfirst_Z_dR__158->SetBinContent(20,0.003451816);
   VH_DHZfirst_Z_dR__158->SetBinContent(22,0.002317515);
   VH_DHZfirst_Z_dR__158->SetBinContent(24,0.002145032);
   VH_DHZfirst_Z_dR__158->SetBinContent(25,0.001199352);
   VH_DHZfirst_Z_dR__158->SetBinContent(27,0.004925919);
   VH_DHZfirst_Z_dR__158->SetBinContent(28,0.005175348);
   VH_DHZfirst_Z_dR__158->SetBinContent(29,0.005280622);
   VH_DHZfirst_Z_dR__158->SetBinContent(30,0.004420333);
   VH_DHZfirst_Z_dR__158->SetBinError(3,0.008515547);
   VH_DHZfirst_Z_dR__158->SetBinError(4,0.01045815);
   VH_DHZfirst_Z_dR__158->SetBinError(5,0.008327425);
   VH_DHZfirst_Z_dR__158->SetBinError(6,0.006846941);
   VH_DHZfirst_Z_dR__158->SetBinError(7,0.001510924);
   VH_DHZfirst_Z_dR__158->SetBinError(8,0.001311458);
   VH_DHZfirst_Z_dR__158->SetBinError(9,0.002363307);
   VH_DHZfirst_Z_dR__158->SetBinError(10,0.00296358);
   VH_DHZfirst_Z_dR__158->SetBinError(11,0.001968379);
   VH_DHZfirst_Z_dR__158->SetBinError(12,0.001283995);
   VH_DHZfirst_Z_dR__158->SetBinError(13,0.001952674);
   VH_DHZfirst_Z_dR__158->SetBinError(14,0.001438455);
   VH_DHZfirst_Z_dR__158->SetBinError(15,0.002176466);
   VH_DHZfirst_Z_dR__158->SetBinError(20,0.002559316);
   VH_DHZfirst_Z_dR__158->SetBinError(22,0.001646738);
   VH_DHZfirst_Z_dR__158->SetBinError(24,0.002145032);
   VH_DHZfirst_Z_dR__158->SetBinError(25,0.001199352);
   VH_DHZfirst_Z_dR__158->SetBinError(27,0.002271606);
   VH_DHZfirst_Z_dR__158->SetBinError(28,0.002373676);
   VH_DHZfirst_Z_dR__158->SetBinError(29,0.003092298);
   VH_DHZfirst_Z_dR__158->SetBinError(30,0.002667483);
   VH_DHZfirst_Z_dR__158->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__158->SetLineColor(ci);
   VH_DHZfirst_Z_dR__158->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__158->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__158->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__158->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__158->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__158->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__158->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__158->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__158->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__158->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__158->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__158->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__158->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__158->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__158->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_DHZfirst_17->Modified();
   Z_dR_DHZfirst_17->cd();
   Z_dR_DHZfirst_17->SetSelected(Z_dR_DHZfirst_17);
}
