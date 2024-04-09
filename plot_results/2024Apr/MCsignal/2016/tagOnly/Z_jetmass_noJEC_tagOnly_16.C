#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tagOnly_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tagOnly_16/Z_jetmass_noJEC_tagOnly_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_tagOnly_16 = new TCanvas("Z_jetmass_noJEC_tagOnly_16", "Z_jetmass_noJEC_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tagOnly_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tagOnly_16->Range(-60,-0.0437335,340,0.3936014);
   Z_jetmass_noJEC_tagOnly_16->SetFillColor(0);
   Z_jetmass_noJEC_tagOnly_16->SetFillStyle(4000);
   Z_jetmass_noJEC_tagOnly_16->SetBorderMode(0);
   Z_jetmass_noJEC_tagOnly_16->SetBorderSize(2);
   Z_jetmass_noJEC_tagOnly_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tagOnly_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_tagOnly_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tagOnly_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_noJEC__139 = new TH1D("VH_tagOnly_Z_jetmass_noJEC__139","",150,0,300);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(3,0.02063751);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(4,0.1591452);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(5,0.3332076);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(6,0.3316774);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(7,0.2829765);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(8,0.1661018);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(9,0.1141345);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(10,0.09014469);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(11,0.05712366);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(12,0.05240151);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(13,0.02206661);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(14,0.02461422);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(15,0.0167497);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(16,0.008535364);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(17,0.01083992);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(18,0.007504526);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(19,0.0109889);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(20,0.003667254);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(21,0.003824635);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(22,0.008661633);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(23,0.00674458);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(26,0.002169154);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(28,0.002598288);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(29,0.007413892);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(30,0.0009569416);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(33,0.002223556);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(43,0.002068035);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(46,0.002137465);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(47,0.002368189);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(49,0.001726955);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinContent(57,0.0001455227);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(3,0.006294752);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(4,0.01808296);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(5,0.0255039);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(6,0.02607922);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(7,0.02411149);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(8,0.0186921);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(9,0.01533707);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(10,0.01391335);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(11,0.01109762);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(12,0.01070466);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(13,0.00676089);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(14,0.007467025);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(15,0.005839428);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(16,0.004299468);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(17,0.004857906);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(18,0.004357547);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(19,0.005012177);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(20,0.002598525);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(21,0.002704954);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(22,0.004571382);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(23,0.003895426);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(26,0.002169154);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(28,0.002598288);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(29,0.004289566);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(30,0.0009569416);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(33,0.002223556);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(43,0.002068035);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(46,0.002137465);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(47,0.002368189);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(49,0.001726955);
   VH_tagOnly_Z_jetmass_noJEC__139->SetBinError(57,0.0001455227);
   VH_tagOnly_Z_jetmass_noJEC__139->SetEntries(888);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_noJEC__139->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_noJEC__139->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagOnly_Z_jetmass_noJEC__139->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_noJEC__139->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__139->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_noJEC__139->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__139->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_noJEC__139->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__139->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_noJEC__139->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_noJEC__139->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_noJEC__139->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__139->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__139->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_noJEC__139->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__139->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tagOnly_16->Modified();
   Z_jetmass_noJEC_tagOnly_16->cd();
   Z_jetmass_noJEC_tagOnly_16->SetSelected(Z_jetmass_noJEC_tagOnly_16);
}
