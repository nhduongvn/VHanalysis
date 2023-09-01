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
   Z_mass_algo_18->Range(-80,-3.644228,453.3333,32.79805);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__371 = new TH1D("VbbHcc_algo_Z_mass__371","",40,0,400);
   VbbHcc_algo_Z_mass__371->SetBinContent(5,0.5664563);
   VbbHcc_algo_Z_mass__371->SetBinContent(6,2.134814);
   VbbHcc_algo_Z_mass__371->SetBinContent(7,5.216168);
   VbbHcc_algo_Z_mass__371->SetBinContent(8,11.42601);
   VbbHcc_algo_Z_mass__371->SetBinContent(9,25.92269);
   VbbHcc_algo_Z_mass__371->SetBinContent(10,27.76554);
   VbbHcc_algo_Z_mass__371->SetBinContent(11,10.39554);
   VbbHcc_algo_Z_mass__371->SetBinContent(12,8.565947);
   VbbHcc_algo_Z_mass__371->SetBinContent(13,4.970973);
   VbbHcc_algo_Z_mass__371->SetBinContent(14,2.076465);
   VbbHcc_algo_Z_mass__371->SetBinContent(15,2.924822);
   VbbHcc_algo_Z_mass__371->SetBinContent(16,2.468833);
   VbbHcc_algo_Z_mass__371->SetBinContent(17,2.045056);
   VbbHcc_algo_Z_mass__371->SetBinContent(18,3.924724);
   VbbHcc_algo_Z_mass__371->SetBinContent(19,1.113488);
   VbbHcc_algo_Z_mass__371->SetBinContent(20,3.213099);
   VbbHcc_algo_Z_mass__371->SetBinContent(21,3.704826);
   VbbHcc_algo_Z_mass__371->SetBinContent(22,3.824163);
   VbbHcc_algo_Z_mass__371->SetBinContent(23,3.717427);
   VbbHcc_algo_Z_mass__371->SetBinContent(24,0.9643358);
   VbbHcc_algo_Z_mass__371->SetBinContent(25,3.102495);
   VbbHcc_algo_Z_mass__371->SetBinContent(26,2.181252);
   VbbHcc_algo_Z_mass__371->SetBinContent(27,2.345181);
   VbbHcc_algo_Z_mass__371->SetBinContent(28,1.665418);
   VbbHcc_algo_Z_mass__371->SetBinContent(29,2.088409);
   VbbHcc_algo_Z_mass__371->SetBinContent(30,3.135946);
   VbbHcc_algo_Z_mass__371->SetBinContent(31,2.037214);
   VbbHcc_algo_Z_mass__371->SetBinContent(32,3.863371);
   VbbHcc_algo_Z_mass__371->SetBinContent(33,0.8742682);
   VbbHcc_algo_Z_mass__371->SetBinContent(34,2.908793);
   VbbHcc_algo_Z_mass__371->SetBinContent(35,0.970079);
   VbbHcc_algo_Z_mass__371->SetBinContent(36,1.863491);
   VbbHcc_algo_Z_mass__371->SetBinContent(37,0.9601755);
   VbbHcc_algo_Z_mass__371->SetBinContent(38,0.8658086);
   VbbHcc_algo_Z_mass__371->SetBinContent(39,1.590908);
   VbbHcc_algo_Z_mass__371->SetBinContent(40,1.069475);
   VbbHcc_algo_Z_mass__371->SetBinContent(41,37.1161);
   VbbHcc_algo_Z_mass__371->SetBinError(5,0.40248);
   VbbHcc_algo_Z_mass__371->SetBinError(6,1.217509);
   VbbHcc_algo_Z_mass__371->SetBinError(7,1.501148);
   VbbHcc_algo_Z_mass__371->SetBinError(8,2.17328);
   VbbHcc_algo_Z_mass__371->SetBinError(9,3.198712);
   VbbHcc_algo_Z_mass__371->SetBinError(10,3.418772);
   VbbHcc_algo_Z_mass__371->SetBinError(11,1.978329);
   VbbHcc_algo_Z_mass__371->SetBinError(12,2.003892);
   VbbHcc_algo_Z_mass__371->SetBinError(13,1.384208);
   VbbHcc_algo_Z_mass__371->SetBinError(14,0.8030157);
   VbbHcc_algo_Z_mass__371->SetBinError(15,1.224171);
   VbbHcc_algo_Z_mass__371->SetBinError(16,1.060193);
   VbbHcc_algo_Z_mass__371->SetBinError(17,0.851229);
   VbbHcc_algo_Z_mass__371->SetBinError(18,1.210838);
   VbbHcc_algo_Z_mass__371->SetBinError(19,0.564324);
   VbbHcc_algo_Z_mass__371->SetBinError(20,1.301367);
   VbbHcc_algo_Z_mass__371->SetBinError(21,1.308902);
   VbbHcc_algo_Z_mass__371->SetBinError(22,1.684757);
   VbbHcc_algo_Z_mass__371->SetBinError(23,1.31859);
   VbbHcc_algo_Z_mass__371->SetBinError(24,0.7098664);
   VbbHcc_algo_Z_mass__371->SetBinError(25,1.207668);
   VbbHcc_algo_Z_mass__371->SetBinError(26,0.8261647);
   VbbHcc_algo_Z_mass__371->SetBinError(27,0.9891587);
   VbbHcc_algo_Z_mass__371->SetBinError(28,0.7769217);
   VbbHcc_algo_Z_mass__371->SetBinError(29,1.09187);
   VbbHcc_algo_Z_mass__371->SetBinError(30,1.614126);
   VbbHcc_algo_Z_mass__371->SetBinError(31,1.028518);
   VbbHcc_algo_Z_mass__371->SetBinError(32,1.258903);
   VbbHcc_algo_Z_mass__371->SetBinError(33,0.6237761);
   VbbHcc_algo_Z_mass__371->SetBinError(34,1.003778);
   VbbHcc_algo_Z_mass__371->SetBinError(35,0.5769968);
   VbbHcc_algo_Z_mass__371->SetBinError(36,0.7124672);
   VbbHcc_algo_Z_mass__371->SetBinError(37,0.9601755);
   VbbHcc_algo_Z_mass__371->SetBinError(38,0.5073959);
   VbbHcc_algo_Z_mass__371->SetBinError(39,0.9857349);
   VbbHcc_algo_Z_mass__371->SetBinError(40,0.5705498);
   VbbHcc_algo_Z_mass__371->SetBinError(41,3.955325);
   VbbHcc_algo_Z_mass__371->SetEntries(543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_mass__371->SetFillColor(ci);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__371->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__371->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__371->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__371->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__371->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__371->Draw("HIST");
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
