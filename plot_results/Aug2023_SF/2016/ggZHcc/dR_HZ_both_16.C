#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_both_16()
{
//=========Macro generated from canvas: dR_HZ_both_16/dR_HZ_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_both_16 = new TCanvas("dR_HZ_both_16", "dR_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_16->SetHighLightColor(2);
   dR_HZ_both_16->Range(-1.2,-0.0002943779,6.8,0.002649401);
   dR_HZ_both_16->SetFillColor(0);
   dR_HZ_both_16->SetBorderMode(0);
   dR_HZ_both_16->SetBorderSize(2);
   dR_HZ_both_16->SetLeftMargin(0.15);
   dR_HZ_both_16->SetFrameBorderMode(0);
   dR_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ__870 = new TH1D("VbbHcc_both_dR_HZ__870","",60,0,6);
   VbbHcc_both_dR_HZ__870->SetBinContent(2,0.0003763935);
   VbbHcc_both_dR_HZ__870->SetBinContent(4,0.000531767);
   VbbHcc_both_dR_HZ__870->SetBinContent(5,0.0003978309);
   VbbHcc_both_dR_HZ__870->SetBinContent(6,0.0008038036);
   VbbHcc_both_dR_HZ__870->SetBinContent(7,0.0002999777);
   VbbHcc_both_dR_HZ__870->SetBinContent(8,0.000966994);
   VbbHcc_both_dR_HZ__870->SetBinContent(9,0.0003456145);
   VbbHcc_both_dR_HZ__870->SetBinContent(10,0.0002929853);
   VbbHcc_both_dR_HZ__870->SetBinContent(11,0.0003525295);
   VbbHcc_both_dR_HZ__870->SetBinContent(13,0.0007954965);
   VbbHcc_both_dR_HZ__870->SetBinContent(15,0.00088548);
   VbbHcc_both_dR_HZ__870->SetBinContent(17,0.001803063);
   VbbHcc_both_dR_HZ__870->SetBinContent(18,0.001206758);
   VbbHcc_both_dR_HZ__870->SetBinContent(19,0.0005945107);
   VbbHcc_both_dR_HZ__870->SetBinContent(20,0.001405113);
   VbbHcc_both_dR_HZ__870->SetBinContent(21,0.001667977);
   VbbHcc_both_dR_HZ__870->SetBinContent(22,0.001118687);
   VbbHcc_both_dR_HZ__870->SetBinContent(23,0.001247599);
   VbbHcc_both_dR_HZ__870->SetBinContent(24,0.001461187);
   VbbHcc_both_dR_HZ__870->SetBinContent(25,0.0007098621);
   VbbHcc_both_dR_HZ__870->SetBinContent(26,0.001273857);
   VbbHcc_both_dR_HZ__870->SetBinContent(27,0.001701048);
   VbbHcc_both_dR_HZ__870->SetBinContent(28,0.001398977);
   VbbHcc_both_dR_HZ__870->SetBinContent(29,0.002066244);
   VbbHcc_both_dR_HZ__870->SetBinContent(30,0.001953421);
   VbbHcc_both_dR_HZ__870->SetBinContent(31,0.00212509);
   VbbHcc_both_dR_HZ__870->SetBinContent(32,0.001946483);
   VbbHcc_both_dR_HZ__870->SetBinContent(33,0.002242879);
   VbbHcc_both_dR_HZ__870->SetBinContent(34,0.0008017802);
   VbbHcc_both_dR_HZ__870->SetBinContent(35,0.000548885);
   VbbHcc_both_dR_HZ__870->SetBinContent(36,0.001097239);
   VbbHcc_both_dR_HZ__870->SetBinContent(39,0.0002662566);
   VbbHcc_both_dR_HZ__870->SetBinContent(40,0.001523424);
   VbbHcc_both_dR_HZ__870->SetBinContent(41,0.0008857181);
   VbbHcc_both_dR_HZ__870->SetBinContent(42,0.0004584278);
   VbbHcc_both_dR_HZ__870->SetBinContent(45,0.0001919148);
   VbbHcc_both_dR_HZ__870->SetBinContent(46,0.0002924782);
   VbbHcc_both_dR_HZ__870->SetBinContent(48,0.0006539697);
   VbbHcc_both_dR_HZ__870->SetBinContent(50,0.0003729231);
   VbbHcc_both_dR_HZ__870->SetBinError(2,0.0003763935);
   VbbHcc_both_dR_HZ__870->SetBinError(4,0.0003785388);
   VbbHcc_both_dR_HZ__870->SetBinError(5,0.0003978309);
   VbbHcc_both_dR_HZ__870->SetBinError(6,0.0004645637);
   VbbHcc_both_dR_HZ__870->SetBinError(7,0.0002999777);
   VbbHcc_both_dR_HZ__870->SetBinError(8,0.000559984);
   VbbHcc_both_dR_HZ__870->SetBinError(9,0.0003456145);
   VbbHcc_both_dR_HZ__870->SetBinError(10,0.0002929853);
   VbbHcc_both_dR_HZ__870->SetBinError(11,0.0003525295);
   VbbHcc_both_dR_HZ__870->SetBinError(13,0.0004616462);
   VbbHcc_both_dR_HZ__870->SetBinError(15,0.0005114104);
   VbbHcc_both_dR_HZ__870->SetBinError(17,0.0007421785);
   VbbHcc_both_dR_HZ__870->SetBinError(18,0.0006042786);
   VbbHcc_both_dR_HZ__870->SetBinError(19,0.0004206894);
   VbbHcc_both_dR_HZ__870->SetBinError(20,0.0006299253);
   VbbHcc_both_dR_HZ__870->SetBinError(21,0.0006861899);
   VbbHcc_both_dR_HZ__870->SetBinError(22,0.0005649129);
   VbbHcc_both_dR_HZ__870->SetBinError(23,0.0006263477);
   VbbHcc_both_dR_HZ__870->SetBinError(24,0.0006613744);
   VbbHcc_both_dR_HZ__870->SetBinError(25,0.0004445065);
   VbbHcc_both_dR_HZ__870->SetBinError(26,0.0005855386);
   VbbHcc_both_dR_HZ__870->SetBinError(27,0.0006987121);
   VbbHcc_both_dR_HZ__870->SetBinError(28,0.0006278374);
   VbbHcc_both_dR_HZ__870->SetBinError(29,0.0007389214);
   VbbHcc_both_dR_HZ__870->SetBinError(30,0.0008102092);
   VbbHcc_both_dR_HZ__870->SetBinError(31,0.0008167884);
   VbbHcc_both_dR_HZ__870->SetBinError(32,0.0007383033);
   VbbHcc_both_dR_HZ__870->SetBinError(33,0.0007978584);
   VbbHcc_both_dR_HZ__870->SetBinError(34,0.0004644507);
   VbbHcc_both_dR_HZ__870->SetBinError(35,0.00038856);
   VbbHcc_both_dR_HZ__870->SetBinError(36,0.0005496052);
   VbbHcc_both_dR_HZ__870->SetBinError(39,0.0002662566);
   VbbHcc_both_dR_HZ__870->SetBinError(40,0.0006324908);
   VbbHcc_both_dR_HZ__870->SetBinError(41,0.0005154336);
   VbbHcc_both_dR_HZ__870->SetBinError(42,0.0003292882);
   VbbHcc_both_dR_HZ__870->SetBinError(45,0.0001919148);
   VbbHcc_both_dR_HZ__870->SetBinError(46,0.0002924782);
   VbbHcc_both_dR_HZ__870->SetBinError(48,0.0004712061);
   VbbHcc_both_dR_HZ__870->SetBinError(50,0.0003729231);
   VbbHcc_both_dR_HZ__870->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_dR_HZ__870->SetFillColor(ci);
   VbbHcc_both_dR_HZ__870->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ__870->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ__870->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__870->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__870->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__870->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__870->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__870->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__870->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__870->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__870->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_16->Modified();
   dR_HZ_both_16->cd();
   dR_HZ_both_16->SetSelected(dR_HZ_both_16);
}
