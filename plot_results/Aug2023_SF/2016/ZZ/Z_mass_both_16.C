#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_both_16()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-0.6773509,453.3333,6.096158);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__731 = new TH1D("VbbHcc_both_Z_mass__731","",40,0,400);
   VbbHcc_both_Z_mass__731->SetBinContent(7,1.02253);
   VbbHcc_both_Z_mass__731->SetBinContent(8,1.54912);
   VbbHcc_both_Z_mass__731->SetBinContent(9,2.656166);
   VbbHcc_both_Z_mass__731->SetBinContent(10,5.160768);
   VbbHcc_both_Z_mass__731->SetBinContent(11,2.519097);
   VbbHcc_both_Z_mass__731->SetBinContent(12,0.1720102);
   VbbHcc_both_Z_mass__731->SetBinContent(13,0.9827675);
   VbbHcc_both_Z_mass__731->SetBinContent(14,0.3827529);
   VbbHcc_both_Z_mass__731->SetBinContent(15,1.480723);
   VbbHcc_both_Z_mass__731->SetBinContent(16,0.322036);
   VbbHcc_both_Z_mass__731->SetBinContent(17,1.180779);
   VbbHcc_both_Z_mass__731->SetBinContent(18,0.5872576);
   VbbHcc_both_Z_mass__731->SetBinContent(19,0.4397746);
   VbbHcc_both_Z_mass__731->SetBinContent(20,0.1770628);
   VbbHcc_both_Z_mass__731->SetBinContent(21,0.4437789);
   VbbHcc_both_Z_mass__731->SetBinContent(22,0.6939456);
   VbbHcc_both_Z_mass__731->SetBinContent(23,0.4429256);
   VbbHcc_both_Z_mass__731->SetBinContent(24,0.4003279);
   VbbHcc_both_Z_mass__731->SetBinContent(25,0.3266488);
   VbbHcc_both_Z_mass__731->SetBinContent(26,0.2139033);
   VbbHcc_both_Z_mass__731->SetBinContent(27,0.2531846);
   VbbHcc_both_Z_mass__731->SetBinContent(28,0.7399454);
   VbbHcc_both_Z_mass__731->SetBinContent(29,0.2876854);
   VbbHcc_both_Z_mass__731->SetBinContent(30,1.075468);
   VbbHcc_both_Z_mass__731->SetBinContent(31,0.4817254);
   VbbHcc_both_Z_mass__731->SetBinContent(32,0.2412166);
   VbbHcc_both_Z_mass__731->SetBinContent(33,0.4620825);
   VbbHcc_both_Z_mass__731->SetBinContent(34,0.1542103);
   VbbHcc_both_Z_mass__731->SetBinContent(35,0.2221687);
   VbbHcc_both_Z_mass__731->SetBinContent(36,0.9532762);
   VbbHcc_both_Z_mass__731->SetBinContent(37,0.2316094);
   VbbHcc_both_Z_mass__731->SetBinContent(40,0.2308563);
   VbbHcc_both_Z_mass__731->SetBinContent(41,10.69551);
   VbbHcc_both_Z_mass__731->SetBinError(7,0.5185398);
   VbbHcc_both_Z_mass__731->SetBinError(8,0.5524373);
   VbbHcc_both_Z_mass__731->SetBinError(9,0.7523723);
   VbbHcc_both_Z_mass__731->SetBinError(10,1.047913);
   VbbHcc_both_Z_mass__731->SetBinError(11,0.7564415);
   VbbHcc_both_Z_mass__731->SetBinError(12,0.1720102);
   VbbHcc_both_Z_mass__731->SetBinError(13,0.4459669);
   VbbHcc_both_Z_mass__731->SetBinError(14,0.2754929);
   VbbHcc_both_Z_mass__731->SetBinError(15,0.6193759);
   VbbHcc_both_Z_mass__731->SetBinError(16,0.2282547);
   VbbHcc_both_Z_mass__731->SetBinError(17,0.4958186);
   VbbHcc_both_Z_mass__731->SetBinError(18,0.3398544);
   VbbHcc_both_Z_mass__731->SetBinError(19,0.3162655);
   VbbHcc_both_Z_mass__731->SetBinError(20,0.1770628);
   VbbHcc_both_Z_mass__731->SetBinError(21,0.326668);
   VbbHcc_both_Z_mass__731->SetBinError(22,0.4035831);
   VbbHcc_both_Z_mass__731->SetBinError(23,0.3131996);
   VbbHcc_both_Z_mass__731->SetBinError(24,0.2909695);
   VbbHcc_both_Z_mass__731->SetBinError(25,0.2342895);
   VbbHcc_both_Z_mass__731->SetBinError(26,0.2139033);
   VbbHcc_both_Z_mass__731->SetBinError(27,0.2531846);
   VbbHcc_both_Z_mass__731->SetBinError(28,0.4334703);
   VbbHcc_both_Z_mass__731->SetBinError(29,0.2876854);
   VbbHcc_both_Z_mass__731->SetBinError(30,0.4862825);
   VbbHcc_both_Z_mass__731->SetBinError(31,0.3518297);
   VbbHcc_both_Z_mass__731->SetBinError(32,0.2412166);
   VbbHcc_both_Z_mass__731->SetBinError(33,0.2840664);
   VbbHcc_both_Z_mass__731->SetBinError(34,0.1542103);
   VbbHcc_both_Z_mass__731->SetBinError(35,0.2221687);
   VbbHcc_both_Z_mass__731->SetBinError(36,0.4318804);
   VbbHcc_both_Z_mass__731->SetBinError(37,0.2316094);
   VbbHcc_both_Z_mass__731->SetBinError(40,0.2308563);
   VbbHcc_both_Z_mass__731->SetBinError(41,1.575276);
   VbbHcc_both_Z_mass__731->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass__731->SetFillColor(ci);
   VbbHcc_both_Z_mass__731->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__731->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__731->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__731->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__731->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__731->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__731->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__731->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__731->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__731->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__731->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
