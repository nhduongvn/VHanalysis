#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC()
{
//=========Macro generated from canvas: Z_jetmass_JEC/Z_jetmass_JEC
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC = new TCanvas("Z_jetmass_JEC", "Z_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC->SetHighLightColor(2);
   Z_jetmass_JEC->Range(-60,-5.188443,340,46.69598);
   Z_jetmass_JEC->SetFillColor(0);
   Z_jetmass_JEC->SetBorderMode(0);
   Z_jetmass_JEC->SetBorderSize(2);
   Z_jetmass_JEC->SetLeftMargin(0.15);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_JEC__24 = new TH1D("VH_tagFirst_Z_jetmass_JEC__24","",150,0,300);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(3,1.090709);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(4,12.21914);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(5,8.820975);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(6,39.53099);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(7,24.14174);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(8,22.46689);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(9,17.68729);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(10,14.39212);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(11,7.137816);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(12,7.685002);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(13,3.054772);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(14,5.927531);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(15,2.482338);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(22,0.9548362);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(24,1.853532);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(30,0.9865878);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(3,1.090709);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(4,4.143128);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(5,3.773262);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(6,7.597532);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(7,6.534811);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(8,5.647429);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(9,5.20639);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(10,4.822841);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(11,2.962742);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(12,4.275762);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(13,2.168081);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(14,3.045607);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(15,2.482338);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(22,0.9548362);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(24,1.853532);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(30,0.9865878);
   VH_tagFirst_Z_jetmass_JEC__24->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Z_jetmass_JEC__24->SetFillColor(ci);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetRange(1,300);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC->Modified();
   Z_jetmass_JEC->cd();
   Z_jetmass_JEC->SetSelected(Z_jetmass_JEC);
}
