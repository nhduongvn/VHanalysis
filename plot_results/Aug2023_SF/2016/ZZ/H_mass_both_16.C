#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.5125777,453.3333,4.613199);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__746 = new TH1D("VbbHcc_both_H_mass__746","",40,0,400);
   VbbHcc_both_H_mass__746->SetBinContent(5,0.9734797);
   VbbHcc_both_H_mass__746->SetBinContent(6,0.5323883);
   VbbHcc_both_H_mass__746->SetBinContent(7,1.225658);
   VbbHcc_both_H_mass__746->SetBinContent(8,2.817958);
   VbbHcc_both_H_mass__746->SetBinContent(9,2.815139);
   VbbHcc_both_H_mass__746->SetBinContent(10,3.905354);
   VbbHcc_both_H_mass__746->SetBinContent(11,1.620218);
   VbbHcc_both_H_mass__746->SetBinContent(12,1.196733);
   VbbHcc_both_H_mass__746->SetBinContent(13,1.314997);
   VbbHcc_both_H_mass__746->SetBinContent(14,1.080466);
   VbbHcc_both_H_mass__746->SetBinContent(15,1.606209);
   VbbHcc_both_H_mass__746->SetBinContent(16,0.6680497);
   VbbHcc_both_H_mass__746->SetBinContent(17,0.2277526);
   VbbHcc_both_H_mass__746->SetBinContent(18,1.209973);
   VbbHcc_both_H_mass__746->SetBinContent(19,1.429582);
   VbbHcc_both_H_mass__746->SetBinContent(20,1.155129);
   VbbHcc_both_H_mass__746->SetBinContent(21,0.5588011);
   VbbHcc_both_H_mass__746->SetBinContent(22,1.610521);
   VbbHcc_both_H_mass__746->SetBinContent(23,1.272954);
   VbbHcc_both_H_mass__746->SetBinContent(24,0.341606);
   VbbHcc_both_H_mass__746->SetBinContent(25,0.1714438);
   VbbHcc_both_H_mass__746->SetBinContent(26,0.4046333);
   VbbHcc_both_H_mass__746->SetBinContent(27,0.4843733);
   VbbHcc_both_H_mass__746->SetBinContent(28,0.2303096);
   VbbHcc_both_H_mass__746->SetBinContent(29,0.6068336);
   VbbHcc_both_H_mass__746->SetBinContent(30,0.8419679);
   VbbHcc_both_H_mass__746->SetBinContent(31,1.030945);
   VbbHcc_both_H_mass__746->SetBinContent(32,0.2185296);
   VbbHcc_both_H_mass__746->SetBinContent(33,1.258985);
   VbbHcc_both_H_mass__746->SetBinContent(35,0.2002323);
   VbbHcc_both_H_mass__746->SetBinContent(37,0.7381064);
   VbbHcc_both_H_mass__746->SetBinContent(38,0.2199822);
   VbbHcc_both_H_mass__746->SetBinContent(40,0.2521106);
   VbbHcc_both_H_mass__746->SetBinContent(41,2.961897);
   VbbHcc_both_H_mass__746->SetBinError(5,0.4886035);
   VbbHcc_both_H_mass__746->SetBinError(6,0.3096415);
   VbbHcc_both_H_mass__746->SetBinError(7,0.5069818);
   VbbHcc_both_H_mass__746->SetBinError(8,0.7684271);
   VbbHcc_both_H_mass__746->SetBinError(9,0.7723709);
   VbbHcc_both_H_mass__746->SetBinError(10,0.9393448);
   VbbHcc_both_H_mass__746->SetBinError(11,0.6343227);
   VbbHcc_both_H_mass__746->SetBinError(12,0.4988198);
   VbbHcc_both_H_mass__746->SetBinError(13,0.5552791);
   VbbHcc_both_H_mass__746->SetBinError(14,0.491579);
   VbbHcc_both_H_mass__746->SetBinError(15,0.5749071);
   VbbHcc_both_H_mass__746->SetBinError(16,0.3869732);
   VbbHcc_both_H_mass__746->SetBinError(17,0.2277526);
   VbbHcc_both_H_mass__746->SetBinError(18,0.5001069);
   VbbHcc_both_H_mass__746->SetBinError(19,0.5600278);
   VbbHcc_both_H_mass__746->SetBinError(20,0.4782274);
   VbbHcc_both_H_mass__746->SetBinError(21,0.3342865);
   VbbHcc_both_H_mass__746->SetBinError(22,0.6045649);
   VbbHcc_both_H_mass__746->SetBinError(23,0.5262549);
   VbbHcc_both_H_mass__746->SetBinError(24,0.2771581);
   VbbHcc_both_H_mass__746->SetBinError(25,0.1714438);
   VbbHcc_both_H_mass__746->SetBinError(26,0.2913597);
   VbbHcc_both_H_mass__746->SetBinError(27,0.3427274);
   VbbHcc_both_H_mass__746->SetBinError(28,0.2303096);
   VbbHcc_both_H_mass__746->SetBinError(29,0.3594574);
   VbbHcc_both_H_mass__746->SetBinError(30,0.4246616);
   VbbHcc_both_H_mass__746->SetBinError(31,0.5166805);
   VbbHcc_both_H_mass__746->SetBinError(32,0.2185296);
   VbbHcc_both_H_mass__746->SetBinError(33,0.5173208);
   VbbHcc_both_H_mass__746->SetBinError(35,0.2002323);
   VbbHcc_both_H_mass__746->SetBinError(37,0.4269395);
   VbbHcc_both_H_mass__746->SetBinError(38,0.2199822);
   VbbHcc_both_H_mass__746->SetBinError(40,0.2521106);
   VbbHcc_both_H_mass__746->SetBinError(41,0.865711);
   VbbHcc_both_H_mass__746->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_mass__746->SetFillColor(ci);
   VbbHcc_both_H_mass__746->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__746->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__746->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__746->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__746->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__746->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__746->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__746->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__746->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__746->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__746->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
