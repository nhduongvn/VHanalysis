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
   Z_mass_both_16->Range(-80,-60.2107,453.3333,541.8962);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__726 = new TH1D("VbbHcc_both_Z_mass__726","",40,0,400);
   VbbHcc_both_Z_mass__726->SetBinContent(3,1.733123);
   VbbHcc_both_Z_mass__726->SetBinContent(4,36.27731);
   VbbHcc_both_Z_mass__726->SetBinContent(5,124.8913);
   VbbHcc_both_Z_mass__726->SetBinContent(6,213.7479);
   VbbHcc_both_Z_mass__726->SetBinContent(7,281.0564);
   VbbHcc_both_Z_mass__726->SetBinContent(8,351.3399);
   VbbHcc_both_Z_mass__726->SetBinContent(9,406.9987);
   VbbHcc_both_Z_mass__726->SetBinContent(10,445.0834);
   VbbHcc_both_Z_mass__726->SetBinContent(11,449.5697);
   VbbHcc_both_Z_mass__726->SetBinContent(12,458.7481);
   VbbHcc_both_Z_mass__726->SetBinContent(13,450.2306);
   VbbHcc_both_Z_mass__726->SetBinContent(14,424.6446);
   VbbHcc_both_Z_mass__726->SetBinContent(15,395.7657);
   VbbHcc_both_Z_mass__726->SetBinContent(16,358.9763);
   VbbHcc_both_Z_mass__726->SetBinContent(17,330.7488);
   VbbHcc_both_Z_mass__726->SetBinContent(18,302.9093);
   VbbHcc_both_Z_mass__726->SetBinContent(19,273.152);
   VbbHcc_both_Z_mass__726->SetBinContent(20,251.2004);
   VbbHcc_both_Z_mass__726->SetBinContent(21,230.2676);
   VbbHcc_both_Z_mass__726->SetBinContent(22,225.3284);
   VbbHcc_both_Z_mass__726->SetBinContent(23,204.9687);
   VbbHcc_both_Z_mass__726->SetBinContent(24,192.524);
   VbbHcc_both_Z_mass__726->SetBinContent(25,188.5325);
   VbbHcc_both_Z_mass__726->SetBinContent(26,170.0113);
   VbbHcc_both_Z_mass__726->SetBinContent(27,166.6976);
   VbbHcc_both_Z_mass__726->SetBinContent(28,158.3505);
   VbbHcc_both_Z_mass__726->SetBinContent(29,151.5364);
   VbbHcc_both_Z_mass__726->SetBinContent(30,146.9736);
   VbbHcc_both_Z_mass__726->SetBinContent(31,142.6992);
   VbbHcc_both_Z_mass__726->SetBinContent(32,135.1512);
   VbbHcc_both_Z_mass__726->SetBinContent(33,132.9716);
   VbbHcc_both_Z_mass__726->SetBinContent(34,124.7567);
   VbbHcc_both_Z_mass__726->SetBinContent(35,119.9114);
   VbbHcc_both_Z_mass__726->SetBinContent(36,116.4797);
   VbbHcc_both_Z_mass__726->SetBinContent(37,113.1562);
   VbbHcc_both_Z_mass__726->SetBinContent(38,104.929);
   VbbHcc_both_Z_mass__726->SetBinContent(39,102.9087);
   VbbHcc_both_Z_mass__726->SetBinContent(40,101.3454);
   VbbHcc_both_Z_mass__726->SetBinContent(41,3915.503);
   VbbHcc_both_Z_mass__726->SetBinError(3,0.3140386);
   VbbHcc_both_Z_mass__726->SetBinError(4,1.410652);
   VbbHcc_both_Z_mass__726->SetBinError(5,2.595031);
   VbbHcc_both_Z_mass__726->SetBinError(6,3.403628);
   VbbHcc_both_Z_mass__726->SetBinError(7,3.914347);
   VbbHcc_both_Z_mass__726->SetBinError(8,4.398349);
   VbbHcc_both_Z_mass__726->SetBinError(9,4.745022);
   VbbHcc_both_Z_mass__726->SetBinError(10,4.984828);
   VbbHcc_both_Z_mass__726->SetBinError(11,4.999145);
   VbbHcc_both_Z_mass__726->SetBinError(12,5.050238);
   VbbHcc_both_Z_mass__726->SetBinError(13,5.014455);
   VbbHcc_both_Z_mass__726->SetBinError(14,4.881645);
   VbbHcc_both_Z_mass__726->SetBinError(15,4.714982);
   VbbHcc_both_Z_mass__726->SetBinError(16,4.495349);
   VbbHcc_both_Z_mass__726->SetBinError(17,4.318809);
   VbbHcc_both_Z_mass__726->SetBinError(18,4.102271);
   VbbHcc_both_Z_mass__726->SetBinError(19,3.912048);
   VbbHcc_both_Z_mass__726->SetBinError(20,3.76432);
   VbbHcc_both_Z_mass__726->SetBinError(21,3.580231);
   VbbHcc_both_Z_mass__726->SetBinError(22,3.560424);
   VbbHcc_both_Z_mass__726->SetBinError(23,3.364661);
   VbbHcc_both_Z_mass__726->SetBinError(24,3.279751);
   VbbHcc_both_Z_mass__726->SetBinError(25,3.251104);
   VbbHcc_both_Z_mass__726->SetBinError(26,3.087939);
   VbbHcc_both_Z_mass__726->SetBinError(27,3.041051);
   VbbHcc_both_Z_mass__726->SetBinError(28,2.95994);
   VbbHcc_both_Z_mass__726->SetBinError(29,2.898597);
   VbbHcc_both_Z_mass__726->SetBinError(30,2.873706);
   VbbHcc_both_Z_mass__726->SetBinError(31,2.832432);
   VbbHcc_both_Z_mass__726->SetBinError(32,2.762508);
   VbbHcc_both_Z_mass__726->SetBinError(33,2.743962);
   VbbHcc_both_Z_mass__726->SetBinError(34,2.641219);
   VbbHcc_both_Z_mass__726->SetBinError(35,2.595938);
   VbbHcc_both_Z_mass__726->SetBinError(36,2.566661);
   VbbHcc_both_Z_mass__726->SetBinError(37,2.514365);
   VbbHcc_both_Z_mass__726->SetBinError(38,2.414649);
   VbbHcc_both_Z_mass__726->SetBinError(39,2.385162);
   VbbHcc_both_Z_mass__726->SetBinError(40,2.385314);
   VbbHcc_both_Z_mass__726->SetBinError(41,14.93842);
   VbbHcc_both_Z_mass__726->SetEntries(244052);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass__726->SetFillColor(ci);
   VbbHcc_both_Z_mass__726->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__726->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__726->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__726->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__726->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__726->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__726->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__726->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__726->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__726->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__726->Draw("HIST");
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
