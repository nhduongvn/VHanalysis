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
   Z_mass_algo_18->Range(-80,-0.005410672,453.3333,0.04869604);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__375 = new TH1D("VbbHcc_algo_Z_mass__375","",40,0,400);
   VbbHcc_algo_Z_mass__375->SetBinContent(4,0.0006513151);
   VbbHcc_algo_Z_mass__375->SetBinContent(5,0.00578833);
   VbbHcc_algo_Z_mass__375->SetBinContent(6,0.00378545);
   VbbHcc_algo_Z_mass__375->SetBinContent(7,0.006401194);
   VbbHcc_algo_Z_mass__375->SetBinContent(8,0.01950477);
   VbbHcc_algo_Z_mass__375->SetBinContent(9,0.04122416);
   VbbHcc_algo_Z_mass__375->SetBinContent(10,0.03908951);
   VbbHcc_algo_Z_mass__375->SetBinContent(11,0.03036507);
   VbbHcc_algo_Z_mass__375->SetBinContent(12,0.0177005);
   VbbHcc_algo_Z_mass__375->SetBinContent(13,0.01519193);
   VbbHcc_algo_Z_mass__375->SetBinContent(14,0.01570061);
   VbbHcc_algo_Z_mass__375->SetBinContent(15,0.01179923);
   VbbHcc_algo_Z_mass__375->SetBinContent(16,0.007615);
   VbbHcc_algo_Z_mass__375->SetBinContent(17,0.0076946);
   VbbHcc_algo_Z_mass__375->SetBinContent(18,0.005169419);
   VbbHcc_algo_Z_mass__375->SetBinContent(19,0.005242995);
   VbbHcc_algo_Z_mass__375->SetBinContent(20,0.009448479);
   VbbHcc_algo_Z_mass__375->SetBinContent(21,0.004423795);
   VbbHcc_algo_Z_mass__375->SetBinContent(22,0.005282846);
   VbbHcc_algo_Z_mass__375->SetBinContent(23,0.009637278);
   VbbHcc_algo_Z_mass__375->SetBinContent(24,0.00624767);
   VbbHcc_algo_Z_mass__375->SetBinContent(25,0.005207283);
   VbbHcc_algo_Z_mass__375->SetBinContent(26,0.004987364);
   VbbHcc_algo_Z_mass__375->SetBinContent(27,0.004675738);
   VbbHcc_algo_Z_mass__375->SetBinContent(28,0.003311392);
   VbbHcc_algo_Z_mass__375->SetBinContent(29,0.004362495);
   VbbHcc_algo_Z_mass__375->SetBinContent(30,0.003257657);
   VbbHcc_algo_Z_mass__375->SetBinContent(31,0.004119393);
   VbbHcc_algo_Z_mass__375->SetBinContent(32,0.003003482);
   VbbHcc_algo_Z_mass__375->SetBinContent(33,0.002753701);
   VbbHcc_algo_Z_mass__375->SetBinContent(34,0.002974735);
   VbbHcc_algo_Z_mass__375->SetBinContent(35,0.004338637);
   VbbHcc_algo_Z_mass__375->SetBinContent(36,0.002114649);
   VbbHcc_algo_Z_mass__375->SetBinContent(37,0.003197686);
   VbbHcc_algo_Z_mass__375->SetBinContent(38,0.002355921);
   VbbHcc_algo_Z_mass__375->SetBinContent(39,0.002689784);
   VbbHcc_algo_Z_mass__375->SetBinContent(40,0.003880215);
   VbbHcc_algo_Z_mass__375->SetBinContent(41,0.1183797);
   VbbHcc_algo_Z_mass__375->SetBinError(4,0.0004634478);
   VbbHcc_algo_Z_mass__375->SetBinError(5,0.003666035);
   VbbHcc_algo_Z_mass__375->SetBinError(6,0.001178768);
   VbbHcc_algo_Z_mass__375->SetBinError(7,0.001452574);
   VbbHcc_algo_Z_mass__375->SetBinError(8,0.003226368);
   VbbHcc_algo_Z_mass__375->SetBinError(9,0.003880706);
   VbbHcc_algo_Z_mass__375->SetBinError(10,0.00395697);
   VbbHcc_algo_Z_mass__375->SetBinError(11,0.003565482);
   VbbHcc_algo_Z_mass__375->SetBinError(12,0.002549331);
   VbbHcc_algo_Z_mass__375->SetBinError(13,0.002285141);
   VbbHcc_algo_Z_mass__375->SetBinError(14,0.00246905);
   VbbHcc_algo_Z_mass__375->SetBinError(15,0.002127263);
   VbbHcc_algo_Z_mass__375->SetBinError(16,0.001657687);
   VbbHcc_algo_Z_mass__375->SetBinError(17,0.001725997);
   VbbHcc_algo_Z_mass__375->SetBinError(18,0.001259087);
   VbbHcc_algo_Z_mass__375->SetBinError(19,0.001402648);
   VbbHcc_algo_Z_mass__375->SetBinError(20,0.002329697);
   VbbHcc_algo_Z_mass__375->SetBinError(21,0.001266096);
   VbbHcc_algo_Z_mass__375->SetBinError(22,0.001531802);
   VbbHcc_algo_Z_mass__375->SetBinError(23,0.00224226);
   VbbHcc_algo_Z_mass__375->SetBinError(24,0.001672812);
   VbbHcc_algo_Z_mass__375->SetBinError(25,0.001310217);
   VbbHcc_algo_Z_mass__375->SetBinError(26,0.001439653);
   VbbHcc_algo_Z_mass__375->SetBinError(27,0.001362722);
   VbbHcc_algo_Z_mass__375->SetBinError(28,0.001069724);
   VbbHcc_algo_Z_mass__375->SetBinError(29,0.001286007);
   VbbHcc_algo_Z_mass__375->SetBinError(30,0.001035507);
   VbbHcc_algo_Z_mass__375->SetBinError(31,0.001234245);
   VbbHcc_algo_Z_mass__375->SetBinError(32,0.0009625013);
   VbbHcc_algo_Z_mass__375->SetBinError(33,0.0009955122);
   VbbHcc_algo_Z_mass__375->SetBinError(34,0.001001773);
   VbbHcc_algo_Z_mass__375->SetBinError(35,0.00143235);
   VbbHcc_algo_Z_mass__375->SetBinError(36,0.0008112646);
   VbbHcc_algo_Z_mass__375->SetBinError(37,0.001121933);
   VbbHcc_algo_Z_mass__375->SetBinError(38,0.0008520248);
   VbbHcc_algo_Z_mass__375->SetBinError(39,0.001091181);
   VbbHcc_algo_Z_mass__375->SetBinError(40,0.001138789);
   VbbHcc_algo_Z_mass__375->SetBinError(41,0.007549276);
   VbbHcc_algo_Z_mass__375->SetEntries(1270);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_mass__375->SetFillColor(ci);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__375->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__375->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__375->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__375->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__375->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__375->Draw("HIST");
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
