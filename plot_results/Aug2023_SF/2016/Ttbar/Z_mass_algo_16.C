#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-2791.507,453.3333,25123.56);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__366 = new TH1D("VbbHcc_algo_Z_mass__366","",40,0,400);
   VbbHcc_algo_Z_mass__366->SetBinContent(2,0.1200517);
   VbbHcc_algo_Z_mass__366->SetBinContent(3,9.17915);
   VbbHcc_algo_Z_mass__366->SetBinContent(4,410.4813);
   VbbHcc_algo_Z_mass__366->SetBinContent(5,2182.753);
   VbbHcc_algo_Z_mass__366->SetBinContent(6,5224.198);
   VbbHcc_algo_Z_mass__366->SetBinContent(7,9164.262);
   VbbHcc_algo_Z_mass__366->SetBinContent(8,14027.66);
   VbbHcc_algo_Z_mass__366->SetBinContent(9,18849.79);
   VbbHcc_algo_Z_mass__366->SetBinContent(10,20983.08);
   VbbHcc_algo_Z_mass__366->SetBinContent(11,21268.62);
   VbbHcc_algo_Z_mass__366->SetBinContent(12,20177.2);
   VbbHcc_algo_Z_mass__366->SetBinContent(13,18113.45);
   VbbHcc_algo_Z_mass__366->SetBinContent(14,15311.59);
   VbbHcc_algo_Z_mass__366->SetBinContent(15,12629.11);
   VbbHcc_algo_Z_mass__366->SetBinContent(16,10354.38);
   VbbHcc_algo_Z_mass__366->SetBinContent(17,8618.505);
   VbbHcc_algo_Z_mass__366->SetBinContent(18,7216.573);
   VbbHcc_algo_Z_mass__366->SetBinContent(19,6111.28);
   VbbHcc_algo_Z_mass__366->SetBinContent(20,5206.756);
   VbbHcc_algo_Z_mass__366->SetBinContent(21,4521.804);
   VbbHcc_algo_Z_mass__366->SetBinContent(22,3986.921);
   VbbHcc_algo_Z_mass__366->SetBinContent(23,3585.629);
   VbbHcc_algo_Z_mass__366->SetBinContent(24,3275.508);
   VbbHcc_algo_Z_mass__366->SetBinContent(25,3032.109);
   VbbHcc_algo_Z_mass__366->SetBinContent(26,2818.121);
   VbbHcc_algo_Z_mass__366->SetBinContent(27,2650.281);
   VbbHcc_algo_Z_mass__366->SetBinContent(28,2479.748);
   VbbHcc_algo_Z_mass__366->SetBinContent(29,2354.472);
   VbbHcc_algo_Z_mass__366->SetBinContent(30,2235.611);
   VbbHcc_algo_Z_mass__366->SetBinContent(31,2129.546);
   VbbHcc_algo_Z_mass__366->SetBinContent(32,2022.684);
   VbbHcc_algo_Z_mass__366->SetBinContent(33,1939.073);
   VbbHcc_algo_Z_mass__366->SetBinContent(34,1862.517);
   VbbHcc_algo_Z_mass__366->SetBinContent(35,1805.261);
   VbbHcc_algo_Z_mass__366->SetBinContent(36,1721.977);
   VbbHcc_algo_Z_mass__366->SetBinContent(37,1686.732);
   VbbHcc_algo_Z_mass__366->SetBinContent(38,1608.778);
   VbbHcc_algo_Z_mass__366->SetBinContent(39,1579.707);
   VbbHcc_algo_Z_mass__366->SetBinContent(40,1519.855);
   VbbHcc_algo_Z_mass__366->SetBinContent(41,69173.42);
   VbbHcc_algo_Z_mass__366->SetBinError(2,0.06945034);
   VbbHcc_algo_Z_mass__366->SetBinError(3,0.6522922);
   VbbHcc_algo_Z_mass__366->SetBinError(4,4.404324);
   VbbHcc_algo_Z_mass__366->SetBinError(5,10.29743);
   VbbHcc_algo_Z_mass__366->SetBinError(6,16.16598);
   VbbHcc_algo_Z_mass__366->SetBinError(7,21.6303);
   VbbHcc_algo_Z_mass__366->SetBinError(8,26.95003);
   VbbHcc_algo_Z_mass__366->SetBinError(9,31.37567);
   VbbHcc_algo_Z_mass__366->SetBinError(10,33.15259);
   VbbHcc_algo_Z_mass__366->SetBinError(11,33.39256);
   VbbHcc_algo_Z_mass__366->SetBinError(12,32.58011);
   VbbHcc_algo_Z_mass__366->SetBinError(13,30.88836);
   VbbHcc_algo_Z_mass__366->SetBinError(14,28.37133);
   VbbHcc_algo_Z_mass__366->SetBinError(15,25.68669);
   VbbHcc_algo_Z_mass__366->SetBinError(16,23.16681);
   VbbHcc_algo_Z_mass__366->SetBinError(17,21.11163);
   VbbHcc_algo_Z_mass__366->SetBinError(18,19.27922);
   VbbHcc_algo_Z_mass__366->SetBinError(19,17.68755);
   VbbHcc_algo_Z_mass__366->SetBinError(20,16.29209);
   VbbHcc_algo_Z_mass__366->SetBinError(21,15.13497);
   VbbHcc_algo_Z_mass__366->SetBinError(22,14.20108);
   VbbHcc_algo_Z_mass__366->SetBinError(23,13.48101);
   VbbHcc_algo_Z_mass__366->SetBinError(24,12.86744);
   VbbHcc_algo_Z_mass__366->SetBinError(25,12.39403);
   VbbHcc_algo_Z_mass__366->SetBinError(26,11.9457);
   VbbHcc_algo_Z_mass__366->SetBinError(27,11.60237);
   VbbHcc_algo_Z_mass__366->SetBinError(28,11.2277);
   VbbHcc_algo_Z_mass__366->SetBinError(29,10.93167);
   VbbHcc_algo_Z_mass__366->SetBinError(30,10.66323);
   VbbHcc_algo_Z_mass__366->SetBinError(31,10.42187);
   VbbHcc_algo_Z_mass__366->SetBinError(32,10.14229);
   VbbHcc_algo_Z_mass__366->SetBinError(33,9.944222);
   VbbHcc_algo_Z_mass__366->SetBinError(34,9.746039);
   VbbHcc_algo_Z_mass__366->SetBinError(35,9.589688);
   VbbHcc_algo_Z_mass__366->SetBinError(36,9.371034);
   VbbHcc_algo_Z_mass__366->SetBinError(37,9.29147);
   VbbHcc_algo_Z_mass__366->SetBinError(38,9.070282);
   VbbHcc_algo_Z_mass__366->SetBinError(39,8.981015);
   VbbHcc_algo_Z_mass__366->SetBinError(40,8.814905);
   VbbHcc_algo_Z_mass__366->SetBinError(41,59.99835);
   VbbHcc_algo_Z_mass__366->SetEntries(6564600);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
