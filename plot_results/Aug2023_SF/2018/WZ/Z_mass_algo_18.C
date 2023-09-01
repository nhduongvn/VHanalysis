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
   Z_mass_algo_18->Range(-80,-2.082065,453.3333,18.73858);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__370 = new TH1D("VbbHcc_algo_Z_mass__370","",40,0,400);
   VbbHcc_algo_Z_mass__370->SetBinContent(5,1.311339);
   VbbHcc_algo_Z_mass__370->SetBinContent(6,2.070552);
   VbbHcc_algo_Z_mass__370->SetBinContent(7,2.079315);
   VbbHcc_algo_Z_mass__370->SetBinContent(8,7.509121);
   VbbHcc_algo_Z_mass__370->SetBinContent(9,13.56758);
   VbbHcc_algo_Z_mass__370->SetBinContent(10,15.86335);
   VbbHcc_algo_Z_mass__370->SetBinContent(11,3.959924);
   VbbHcc_algo_Z_mass__370->SetBinContent(12,1.103666);
   VbbHcc_algo_Z_mass__370->SetBinContent(13,2.213327);
   VbbHcc_algo_Z_mass__370->SetBinContent(14,3.72934);
   VbbHcc_algo_Z_mass__370->SetBinContent(16,2.510136);
   VbbHcc_algo_Z_mass__370->SetBinContent(17,3.197102);
   VbbHcc_algo_Z_mass__370->SetBinContent(19,4.945801);
   VbbHcc_algo_Z_mass__370->SetBinContent(20,0.8108957);
   VbbHcc_algo_Z_mass__370->SetBinContent(21,0.932574);
   VbbHcc_algo_Z_mass__370->SetBinContent(22,0.3836311);
   VbbHcc_algo_Z_mass__370->SetBinContent(23,2.397461);
   VbbHcc_algo_Z_mass__370->SetBinContent(24,0.5109447);
   VbbHcc_algo_Z_mass__370->SetBinContent(25,2.009386);
   VbbHcc_algo_Z_mass__370->SetBinContent(26,0.4051749);
   VbbHcc_algo_Z_mass__370->SetBinContent(27,1.054881);
   VbbHcc_algo_Z_mass__370->SetBinContent(28,0.7317418);
   VbbHcc_algo_Z_mass__370->SetBinContent(29,1.637371);
   VbbHcc_algo_Z_mass__370->SetBinContent(30,1.773311);
   VbbHcc_algo_Z_mass__370->SetBinContent(31,0.6463362);
   VbbHcc_algo_Z_mass__370->SetBinContent(33,1.879545);
   VbbHcc_algo_Z_mass__370->SetBinContent(34,1.290069);
   VbbHcc_algo_Z_mass__370->SetBinContent(35,1.707327);
   VbbHcc_algo_Z_mass__370->SetBinContent(38,2.17537);
   VbbHcc_algo_Z_mass__370->SetBinContent(39,0.1847822);
   VbbHcc_algo_Z_mass__370->SetBinContent(41,32.78405);
   VbbHcc_algo_Z_mass__370->SetBinError(5,1.311339);
   VbbHcc_algo_Z_mass__370->SetBinError(6,1.2339);
   VbbHcc_algo_Z_mass__370->SetBinError(7,1.045898);
   VbbHcc_algo_Z_mass__370->SetBinError(8,2.427182);
   VbbHcc_algo_Z_mass__370->SetBinError(9,2.923033);
   VbbHcc_algo_Z_mass__370->SetBinError(10,3.906679);
   VbbHcc_algo_Z_mass__370->SetBinError(11,1.430801);
   VbbHcc_algo_Z_mass__370->SetBinError(12,0.7807226);
   VbbHcc_algo_Z_mass__370->SetBinError(13,1.115359);
   VbbHcc_algo_Z_mass__370->SetBinError(14,1.468206);
   VbbHcc_algo_Z_mass__370->SetBinError(16,1.328319);
   VbbHcc_algo_Z_mass__370->SetBinError(17,1.449926);
   VbbHcc_algo_Z_mass__370->SetBinError(19,1.901521);
   VbbHcc_algo_Z_mass__370->SetBinError(20,0.5758214);
   VbbHcc_algo_Z_mass__370->SetBinError(21,0.932574);
   VbbHcc_algo_Z_mass__370->SetBinError(22,0.3836311);
   VbbHcc_algo_Z_mass__370->SetBinError(23,1.625089);
   VbbHcc_algo_Z_mass__370->SetBinError(24,0.5109447);
   VbbHcc_algo_Z_mass__370->SetBinError(25,1.208663);
   VbbHcc_algo_Z_mass__370->SetBinError(26,0.4051749);
   VbbHcc_algo_Z_mass__370->SetBinError(27,0.7601654);
   VbbHcc_algo_Z_mass__370->SetBinError(28,0.5633295);
   VbbHcc_algo_Z_mass__370->SetBinError(29,1.178453);
   VbbHcc_algo_Z_mass__370->SetBinError(30,1.059188);
   VbbHcc_algo_Z_mass__370->SetBinError(31,0.6463362);
   VbbHcc_algo_Z_mass__370->SetBinError(33,1.527966);
   VbbHcc_algo_Z_mass__370->SetBinError(34,0.7498201);
   VbbHcc_algo_Z_mass__370->SetBinError(35,1.000223);
   VbbHcc_algo_Z_mass__370->SetBinError(38,1.671917);
   VbbHcc_algo_Z_mass__370->SetBinError(39,0.1847822);
   VbbHcc_algo_Z_mass__370->SetBinError(41,4.733337);
   VbbHcc_algo_Z_mass__370->SetEntries(193);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_mass__370->SetFillColor(ci);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__370->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__370->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__370->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__370->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__370->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__370->Draw("HIST");
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
