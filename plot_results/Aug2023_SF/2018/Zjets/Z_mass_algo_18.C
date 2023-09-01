#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Sep  1 13:34:47 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-132.6912,453.3333,1194.221);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__367 = new TH1D("VbbHcc_algo_Z_mass__367","",40,0,400);
   VbbHcc_algo_Z_mass__367->SetBinContent(4,12.90846);
   VbbHcc_algo_Z_mass__367->SetBinContent(5,100.0462);
   VbbHcc_algo_Z_mass__367->SetBinContent(6,206.569);
   VbbHcc_algo_Z_mass__367->SetBinContent(7,388.8322);
   VbbHcc_algo_Z_mass__367->SetBinContent(8,505.4959);
   VbbHcc_algo_Z_mass__367->SetBinContent(9,926.021);
   VbbHcc_algo_Z_mass__367->SetBinContent(10,1010.98);
   VbbHcc_algo_Z_mass__367->SetBinContent(11,721.86);
   VbbHcc_algo_Z_mass__367->SetBinContent(12,536.6548);
   VbbHcc_algo_Z_mass__367->SetBinContent(13,452.8944);
   VbbHcc_algo_Z_mass__367->SetBinContent(14,424.4182);
   VbbHcc_algo_Z_mass__367->SetBinContent(15,420.1719);
   VbbHcc_algo_Z_mass__367->SetBinContent(16,409.8543);
   VbbHcc_algo_Z_mass__367->SetBinContent(17,390.5894);
   VbbHcc_algo_Z_mass__367->SetBinContent(18,344.2563);
   VbbHcc_algo_Z_mass__367->SetBinContent(19,326.2676);
   VbbHcc_algo_Z_mass__367->SetBinContent(20,304.6379);
   VbbHcc_algo_Z_mass__367->SetBinContent(21,309.5601);
   VbbHcc_algo_Z_mass__367->SetBinContent(22,267.0577);
   VbbHcc_algo_Z_mass__367->SetBinContent(23,230.3475);
   VbbHcc_algo_Z_mass__367->SetBinContent(24,241.3022);
   VbbHcc_algo_Z_mass__367->SetBinContent(25,213.517);
   VbbHcc_algo_Z_mass__367->SetBinContent(26,208.5416);
   VbbHcc_algo_Z_mass__367->SetBinContent(27,228.1011);
   VbbHcc_algo_Z_mass__367->SetBinContent(28,173.9601);
   VbbHcc_algo_Z_mass__367->SetBinContent(29,210.5815);
   VbbHcc_algo_Z_mass__367->SetBinContent(30,175.9697);
   VbbHcc_algo_Z_mass__367->SetBinContent(31,181.9819);
   VbbHcc_algo_Z_mass__367->SetBinContent(32,156.2141);
   VbbHcc_algo_Z_mass__367->SetBinContent(33,138.639);
   VbbHcc_algo_Z_mass__367->SetBinContent(34,149.7892);
   VbbHcc_algo_Z_mass__367->SetBinContent(35,121.1195);
   VbbHcc_algo_Z_mass__367->SetBinContent(36,108.85);
   VbbHcc_algo_Z_mass__367->SetBinContent(37,100.6579);
   VbbHcc_algo_Z_mass__367->SetBinContent(38,122.5416);
   VbbHcc_algo_Z_mass__367->SetBinContent(39,102.9715);
   VbbHcc_algo_Z_mass__367->SetBinContent(40,97.94263);
   VbbHcc_algo_Z_mass__367->SetBinContent(41,4226.875);
   VbbHcc_algo_Z_mass__367->SetBinError(4,7.123988);
   VbbHcc_algo_Z_mass__367->SetBinError(5,16.87464);
   VbbHcc_algo_Z_mass__367->SetBinError(6,15.90444);
   VbbHcc_algo_Z_mass__367->SetBinError(7,32.21923);
   VbbHcc_algo_Z_mass__367->SetBinError(8,20.69826);
   VbbHcc_algo_Z_mass__367->SetBinError(9,32.15893);
   VbbHcc_algo_Z_mass__367->SetBinError(10,30.89287);
   VbbHcc_algo_Z_mass__367->SetBinError(11,26.35704);
   VbbHcc_algo_Z_mass__367->SetBinError(12,22.80673);
   VbbHcc_algo_Z_mass__367->SetBinError(13,36.30878);
   VbbHcc_algo_Z_mass__367->SetBinError(14,24.64731);
   VbbHcc_algo_Z_mass__367->SetBinError(15,22.37);
   VbbHcc_algo_Z_mass__367->SetBinError(16,18.71435);
   VbbHcc_algo_Z_mass__367->SetBinError(17,18.56306);
   VbbHcc_algo_Z_mass__367->SetBinError(18,15.31175);
   VbbHcc_algo_Z_mass__367->SetBinError(19,15.07776);
   VbbHcc_algo_Z_mass__367->SetBinError(20,16.80875);
   VbbHcc_algo_Z_mass__367->SetBinError(21,25.86503);
   VbbHcc_algo_Z_mass__367->SetBinError(22,12.64028);
   VbbHcc_algo_Z_mass__367->SetBinError(23,10.10701);
   VbbHcc_algo_Z_mass__367->SetBinError(24,12.97947);
   VbbHcc_algo_Z_mass__367->SetBinError(25,10.13319);
   VbbHcc_algo_Z_mass__367->SetBinError(26,12.26363);
   VbbHcc_algo_Z_mass__367->SetBinError(27,15.69349);
   VbbHcc_algo_Z_mass__367->SetBinError(28,8.777294);
   VbbHcc_algo_Z_mass__367->SetBinError(29,17.20261);
   VbbHcc_algo_Z_mass__367->SetBinError(30,14.65139);
   VbbHcc_algo_Z_mass__367->SetBinError(31,22.73768);
   VbbHcc_algo_Z_mass__367->SetBinError(32,13.1544);
   VbbHcc_algo_Z_mass__367->SetBinError(33,9.993482);
   VbbHcc_algo_Z_mass__367->SetBinError(34,12.93847);
   VbbHcc_algo_Z_mass__367->SetBinError(35,9.090432);
   VbbHcc_algo_Z_mass__367->SetBinError(36,9.09518);
   VbbHcc_algo_Z_mass__367->SetBinError(37,6.624158);
   VbbHcc_algo_Z_mass__367->SetBinError(38,14.18674);
   VbbHcc_algo_Z_mass__367->SetBinError(39,7.224343);
   VbbHcc_algo_Z_mass__367->SetBinError(40,8.368078);
   VbbHcc_algo_Z_mass__367->SetBinError(41,64.24923);
   VbbHcc_algo_Z_mass__367->SetEntries(56053);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_mass__367->SetFillColor(ci);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__367->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__367->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__367->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__367->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__367->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__367->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
