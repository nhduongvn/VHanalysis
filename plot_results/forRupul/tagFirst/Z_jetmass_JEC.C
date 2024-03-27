#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC()
{
//=========Macro generated from canvas: Z_jetmass_JEC/Z_jetmass_JEC
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC = new TCanvas("Z_jetmass_JEC", "Z_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC->SetHighLightColor(2);
   Z_jetmass_JEC->Range(-60,-0.06262404,340,0.5636163);
   Z_jetmass_JEC->SetFillColor(0);
   Z_jetmass_JEC->SetFillStyle(4000);
   Z_jetmass_JEC->SetBorderMode(0);
   Z_jetmass_JEC->SetBorderSize(2);
   Z_jetmass_JEC->SetLeftMargin(0.15);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_JEC__24 = new TH1D("VH_tagFirst_Z_jetmass_JEC__24","",150,0,300);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(3,0.002327646);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(4,0.110445);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(5,0.3102879);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(6,0.4771355);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(7,0.4490878);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(8,0.3781259);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(9,0.2530047);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(10,0.2002336);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(11,0.1712452);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(12,0.1043293);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(13,0.07065342);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(14,0.08251616);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(15,0.0311479);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(16,0.04333333);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(17,0.03057754);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(18,0.01189933);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(19,0.01964001);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(20,0.007343985);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(21,0.00715776);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(22,0.01470772);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(23,0.001909916);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(24,0.01102255);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(25,0.004009703);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(26,0.00906019);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(29,0.004280196);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(30,0.004655015);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(31,0.004686449);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(47,0.002611954);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinContent(67,0.002282926);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(3,0.002327646);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(4,0.02486728);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(5,0.03230847);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(6,0.04573434);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(7,0.03962146);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(8,0.04178531);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(9,0.03419251);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(10,0.02685749);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(11,0.02422895);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(12,0.0196995);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(13,0.01455332);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(14,0.01825426);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(15,0.01018579);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(16,0.01356678);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(17,0.01075838);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(18,0.005637747);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(19,0.007973105);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(20,0.004246316);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(21,0.005227769);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(22,0.006766488);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(23,0.001909916);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(24,0.006435572);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(25,0.002837465);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(26,0.006739617);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(29,0.004280196);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(30,0.00330654);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(31,0.003340867);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(47,0.002611954);
   VH_tagFirst_Z_jetmass_JEC__24->SetBinError(67,0.002282926);
   VH_tagFirst_Z_jetmass_JEC__24->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_jetmass_JEC__24->SetLineColor(ci);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetRange(1,150);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC->Modified();
   Z_jetmass_JEC->cd();
   Z_jetmass_JEC->SetSelected(Z_jetmass_JEC);
}
