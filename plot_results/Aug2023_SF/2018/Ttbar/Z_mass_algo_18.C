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
   Z_mass_algo_18->Range(-80,-2551.12,453.3333,22960.08);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__366 = new TH1D("VbbHcc_algo_Z_mass__366","",40,0,400);
   VbbHcc_algo_Z_mass__366->SetBinContent(2,0.0607781);
   VbbHcc_algo_Z_mass__366->SetBinContent(3,2.346817);
   VbbHcc_algo_Z_mass__366->SetBinContent(4,188.925);
   VbbHcc_algo_Z_mass__366->SetBinContent(5,1410.009);
   VbbHcc_algo_Z_mass__366->SetBinContent(6,3896.321);
   VbbHcc_algo_Z_mass__366->SetBinContent(7,7353.013);
   VbbHcc_algo_Z_mass__366->SetBinContent(8,11903.05);
   VbbHcc_algo_Z_mass__366->SetBinContent(9,16760.66);
   VbbHcc_algo_Z_mass__366->SetBinContent(10,18889.74);
   VbbHcc_algo_Z_mass__366->SetBinContent(11,19437.1);
   VbbHcc_algo_Z_mass__366->SetBinContent(12,18953.96);
   VbbHcc_algo_Z_mass__366->SetBinContent(13,17423.02);
   VbbHcc_algo_Z_mass__366->SetBinContent(14,15125.69);
   VbbHcc_algo_Z_mass__366->SetBinContent(15,12621.15);
   VbbHcc_algo_Z_mass__366->SetBinContent(16,10408.35);
   VbbHcc_algo_Z_mass__366->SetBinContent(17,8737.453);
   VbbHcc_algo_Z_mass__366->SetBinContent(18,7358.988);
   VbbHcc_algo_Z_mass__366->SetBinContent(19,6234.232);
   VbbHcc_algo_Z_mass__366->SetBinContent(20,5280.729);
   VbbHcc_algo_Z_mass__366->SetBinContent(21,4691.955);
   VbbHcc_algo_Z_mass__366->SetBinContent(22,4154.902);
   VbbHcc_algo_Z_mass__366->SetBinContent(23,3728.796);
   VbbHcc_algo_Z_mass__366->SetBinContent(24,3510.351);
   VbbHcc_algo_Z_mass__366->SetBinContent(25,3270);
   VbbHcc_algo_Z_mass__366->SetBinContent(26,3033.908);
   VbbHcc_algo_Z_mass__366->SetBinContent(27,2836.541);
   VbbHcc_algo_Z_mass__366->SetBinContent(28,2643.805);
   VbbHcc_algo_Z_mass__366->SetBinContent(29,2551.028);
   VbbHcc_algo_Z_mass__366->SetBinContent(30,2427.744);
   VbbHcc_algo_Z_mass__366->SetBinContent(31,2280.703);
   VbbHcc_algo_Z_mass__366->SetBinContent(32,2206.24);
   VbbHcc_algo_Z_mass__366->SetBinContent(33,2118.702);
   VbbHcc_algo_Z_mass__366->SetBinContent(34,2016.432);
   VbbHcc_algo_Z_mass__366->SetBinContent(35,1938.912);
   VbbHcc_algo_Z_mass__366->SetBinContent(36,1848.448);
   VbbHcc_algo_Z_mass__366->SetBinContent(37,1815.317);
   VbbHcc_algo_Z_mass__366->SetBinContent(38,1733.348);
   VbbHcc_algo_Z_mass__366->SetBinContent(39,1677.013);
   VbbHcc_algo_Z_mass__366->SetBinContent(40,1610.244);
   VbbHcc_algo_Z_mass__366->SetBinContent(41,72809.66);
   VbbHcc_algo_Z_mass__366->SetBinError(2,0.0607781);
   VbbHcc_algo_Z_mass__366->SetBinError(3,0.5571241);
   VbbHcc_algo_Z_mass__366->SetBinError(4,4.606315);
   VbbHcc_algo_Z_mass__366->SetBinError(5,13.02936);
   VbbHcc_algo_Z_mass__366->SetBinError(6,22.87004);
   VbbHcc_algo_Z_mass__366->SetBinError(7,30.72603);
   VbbHcc_algo_Z_mass__366->SetBinError(8,38.82262);
   VbbHcc_algo_Z_mass__366->SetBinError(9,46.28772);
   VbbHcc_algo_Z_mass__366->SetBinError(10,49.05357);
   VbbHcc_algo_Z_mass__366->SetBinError(11,50.08935);
   VbbHcc_algo_Z_mass__366->SetBinError(12,48.83527);
   VbbHcc_algo_Z_mass__366->SetBinError(13,47.24499);
   VbbHcc_algo_Z_mass__366->SetBinError(14,43.45153);
   VbbHcc_algo_Z_mass__366->SetBinError(15,39.13223);
   VbbHcc_algo_Z_mass__366->SetBinError(16,36.29188);
   VbbHcc_algo_Z_mass__366->SetBinError(17,32.71976);
   VbbHcc_algo_Z_mass__366->SetBinError(18,30.01019);
   VbbHcc_algo_Z_mass__366->SetBinError(19,29.4571);
   VbbHcc_algo_Z_mass__366->SetBinError(20,24.95645);
   VbbHcc_algo_Z_mass__366->SetBinError(21,23.83335);
   VbbHcc_algo_Z_mass__366->SetBinError(22,21.82552);
   VbbHcc_algo_Z_mass__366->SetBinError(23,21.28541);
   VbbHcc_algo_Z_mass__366->SetBinError(24,22.31668);
   VbbHcc_algo_Z_mass__366->SetBinError(25,19.89737);
   VbbHcc_algo_Z_mass__366->SetBinError(26,19.28469);
   VbbHcc_algo_Z_mass__366->SetBinError(27,18.56196);
   VbbHcc_algo_Z_mass__366->SetBinError(28,18.51292);
   VbbHcc_algo_Z_mass__366->SetBinError(29,17.77683);
   VbbHcc_algo_Z_mass__366->SetBinError(30,16.8044);
   VbbHcc_algo_Z_mass__366->SetBinError(31,16.36887);
   VbbHcc_algo_Z_mass__366->SetBinError(32,15.8181);
   VbbHcc_algo_Z_mass__366->SetBinError(33,16.14393);
   VbbHcc_algo_Z_mass__366->SetBinError(34,15.5346);
   VbbHcc_algo_Z_mass__366->SetBinError(35,15.83284);
   VbbHcc_algo_Z_mass__366->SetBinError(36,15.23082);
   VbbHcc_algo_Z_mass__366->SetBinError(37,15.90574);
   VbbHcc_algo_Z_mass__366->SetBinError(38,14.34245);
   VbbHcc_algo_Z_mass__366->SetBinError(39,14.08833);
   VbbHcc_algo_Z_mass__366->SetBinError(40,13.88818);
   VbbHcc_algo_Z_mass__366->SetBinError(41,96.33739);
   VbbHcc_algo_Z_mass__366->SetEntries(3867844);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_mass__366->SetFillColor(ci);
   VbbHcc_algo_Z_mass__366->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__366->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__366->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__366->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__366->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__366->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__366->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__366->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__366->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__366->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__366->Draw("HIST");
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
