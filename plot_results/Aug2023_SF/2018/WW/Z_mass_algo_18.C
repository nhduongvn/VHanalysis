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
   Z_mass_algo_18->Range(-80,-0.7219629,453.3333,6.497666);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__369 = new TH1D("VbbHcc_algo_Z_mass__369","",40,0,400);
   VbbHcc_algo_Z_mass__369->SetBinContent(6,2.771196);
   VbbHcc_algo_Z_mass__369->SetBinContent(8,1.650642);
   VbbHcc_algo_Z_mass__369->SetBinContent(9,5.50067);
   VbbHcc_algo_Z_mass__369->SetBinContent(10,2.673062);
   VbbHcc_algo_Z_mass__369->SetBinContent(11,1.900268);
   VbbHcc_algo_Z_mass__369->SetBinContent(12,2.263364);
   VbbHcc_algo_Z_mass__369->SetBinContent(13,4.676652);
   VbbHcc_algo_Z_mass__369->SetBinContent(16,0.3881341);
   VbbHcc_algo_Z_mass__369->SetBinContent(17,1.989654);
   VbbHcc_algo_Z_mass__369->SetBinContent(18,0.3917197);
   VbbHcc_algo_Z_mass__369->SetBinContent(19,2.133294);
   VbbHcc_algo_Z_mass__369->SetBinContent(20,0.5059385);
   VbbHcc_algo_Z_mass__369->SetBinContent(21,1.128352);
   VbbHcc_algo_Z_mass__369->SetBinContent(23,2.077657);
   VbbHcc_algo_Z_mass__369->SetBinContent(24,0.5165437);
   VbbHcc_algo_Z_mass__369->SetBinContent(25,0.5177016);
   VbbHcc_algo_Z_mass__369->SetBinContent(26,1.293151);
   VbbHcc_algo_Z_mass__369->SetBinContent(27,0.4300027);
   VbbHcc_algo_Z_mass__369->SetBinContent(30,0.6635817);
   VbbHcc_algo_Z_mass__369->SetBinContent(35,1.666182);
   VbbHcc_algo_Z_mass__369->SetBinContent(37,0.9082635);
   VbbHcc_algo_Z_mass__369->SetBinContent(38,0.4289469);
   VbbHcc_algo_Z_mass__369->SetBinContent(39,0.8238516);
   VbbHcc_algo_Z_mass__369->SetBinContent(41,16.59005);
   VbbHcc_algo_Z_mass__369->SetBinError(6,2.371038);
   VbbHcc_algo_Z_mass__369->SetBinError(8,0.9556406);
   VbbHcc_algo_Z_mass__369->SetBinError(9,2.168271);
   VbbHcc_algo_Z_mass__369->SetBinError(10,1.146341);
   VbbHcc_algo_Z_mass__369->SetBinError(11,1.199484);
   VbbHcc_algo_Z_mass__369->SetBinError(12,1.330803);
   VbbHcc_algo_Z_mass__369->SetBinError(13,2.722395);
   VbbHcc_algo_Z_mass__369->SetBinError(16,0.3881341);
   VbbHcc_algo_Z_mass__369->SetBinError(17,1.163451);
   VbbHcc_algo_Z_mass__369->SetBinError(18,0.3917197);
   VbbHcc_algo_Z_mass__369->SetBinError(19,1.257552);
   VbbHcc_algo_Z_mass__369->SetBinError(20,0.5059385);
   VbbHcc_algo_Z_mass__369->SetBinError(21,0.8388411);
   VbbHcc_algo_Z_mass__369->SetBinError(23,2.077657);
   VbbHcc_algo_Z_mass__369->SetBinError(24,0.5165437);
   VbbHcc_algo_Z_mass__369->SetBinError(25,0.5177016);
   VbbHcc_algo_Z_mass__369->SetBinError(26,0.9857051);
   VbbHcc_algo_Z_mass__369->SetBinError(27,0.4300027);
   VbbHcc_algo_Z_mass__369->SetBinError(30,0.6635817);
   VbbHcc_algo_Z_mass__369->SetBinError(35,1.254727);
   VbbHcc_algo_Z_mass__369->SetBinError(37,0.6539746);
   VbbHcc_algo_Z_mass__369->SetBinError(38,0.4289469);
   VbbHcc_algo_Z_mass__369->SetBinError(39,0.8238516);
   VbbHcc_algo_Z_mass__369->SetBinError(41,3.92477);
   VbbHcc_algo_Z_mass__369->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_mass__369->SetFillColor(ci);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__369->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__369->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__369->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__369->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__369->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__369->Draw("HIST");
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
