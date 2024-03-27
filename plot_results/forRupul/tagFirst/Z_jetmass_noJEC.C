#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC()
{
//=========Macro generated from canvas: Z_jetmass_noJEC/Z_jetmass_noJEC
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC = new TCanvas("Z_jetmass_noJEC", "Z_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC->SetHighLightColor(2);
   Z_jetmass_noJEC->Range(-60,-0.06412616,340,0.5771354);
   Z_jetmass_noJEC->SetFillColor(0);
   Z_jetmass_noJEC->SetFillStyle(4000);
   Z_jetmass_noJEC->SetBorderMode(0);
   Z_jetmass_noJEC->SetBorderSize(2);
   Z_jetmass_noJEC->SetLeftMargin(0.15);
   Z_jetmass_noJEC->SetFrameFillStyle(1000);
   Z_jetmass_noJEC->SetFrameBorderMode(0);
   Z_jetmass_noJEC->SetFrameFillStyle(1000);
   Z_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_noJEC__23 = new TH1D("VH_tagFirst_Z_jetmass_noJEC__23","",150,0,300);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(3,0.01494647);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(4,0.1989306);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(5,0.315815);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(6,0.4885803);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(7,0.3659344);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(8,0.3670776);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(9,0.2408804);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(10,0.2085247);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(11,0.1418505);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(12,0.1227925);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(13,0.08248827);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(14,0.06654294);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(15,0.04370469);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(16,0.02193515);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(17,0.03376056);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(18,0.0162286);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(19,0.01657686);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(20,0.005508721);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(21,0.008076469);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(22,0.01057976);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(23,0.01327847);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(24,0.001217892);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(25,0.007878123);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(26,0.008093207);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(27,0.004280196);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(29,0.002105444);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(31,0.005192787);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(32,0.002043233);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(46,0.002611954);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(66,0.002282926);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(3,0.006766866);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(4,0.03046848);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(5,0.03184469);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(6,0.04700539);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(7,0.03504345);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(8,0.04535919);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(9,0.0278885);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(10,0.02675002);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(11,0.02366337);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(12,0.02104171);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(13,0.01617792);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(14,0.01604473);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(15,0.01324576);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(16,0.00773598);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(17,0.01236284);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(18,0.006502008);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(19,0.007653564);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(20,0.003324118);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(21,0.004698693);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(22,0.006425596);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(23,0.007008683);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(24,0.001217892);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(25,0.004629674);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(26,0.006360668);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(27,0.004280196);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(29,0.002105444);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(31,0.003672452);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(32,0.002043233);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(46,0.002611954);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(66,0.002282926);
   VH_tagFirst_Z_jetmass_noJEC__23->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_jetmass_noJEC__23->SetLineColor(ci);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetRange(1,150);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_noJEC__23->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC->Modified();
   Z_jetmass_noJEC->cd();
   Z_jetmass_noJEC->SetSelected(Z_jetmass_noJEC);
}
