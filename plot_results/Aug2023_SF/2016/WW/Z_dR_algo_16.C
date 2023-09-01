#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Fri Sep  1 13:23:36 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.2,-0.8072286,6.8,7.265057);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR__429 = new TH1D("VbbHcc_algo_Z_dR__429","",30,0,6);
   VbbHcc_algo_Z_dR__429->SetBinContent(3,4.585141);
   VbbHcc_algo_Z_dR__429->SetBinContent(4,6.150312);
   VbbHcc_algo_Z_dR__429->SetBinContent(5,3.992635);
   VbbHcc_algo_Z_dR__429->SetBinContent(6,3.140623);
   VbbHcc_algo_Z_dR__429->SetBinContent(7,3.399865);
   VbbHcc_algo_Z_dR__429->SetBinContent(8,3.520619);
   VbbHcc_algo_Z_dR__429->SetBinContent(9,2.995008);
   VbbHcc_algo_Z_dR__429->SetBinContent(10,2.406016);
   VbbHcc_algo_Z_dR__429->SetBinContent(11,1.508051);
   VbbHcc_algo_Z_dR__429->SetBinContent(12,3.303167);
   VbbHcc_algo_Z_dR__429->SetBinContent(13,4.232726);
   VbbHcc_algo_Z_dR__429->SetBinContent(14,2.524517);
   VbbHcc_algo_Z_dR__429->SetBinContent(15,2.430382);
   VbbHcc_algo_Z_dR__429->SetBinContent(16,2.763736);
   VbbHcc_algo_Z_dR__429->SetBinContent(17,1.948914);
   VbbHcc_algo_Z_dR__429->SetBinContent(18,1.148396);
   VbbHcc_algo_Z_dR__429->SetBinContent(19,1.936521);
   VbbHcc_algo_Z_dR__429->SetBinContent(20,1.08325);
   VbbHcc_algo_Z_dR__429->SetBinContent(21,0.916914);
   VbbHcc_algo_Z_dR__429->SetBinContent(22,1.956957);
   VbbHcc_algo_Z_dR__429->SetBinContent(23,0.9513138);
   VbbHcc_algo_Z_dR__429->SetBinContent(24,0.8893196);
   VbbHcc_algo_Z_dR__429->SetBinContent(25,0.9436127);
   VbbHcc_algo_Z_dR__429->SetBinContent(26,0.7684981);
   VbbHcc_algo_Z_dR__429->SetBinContent(27,0.7632063);
   VbbHcc_algo_Z_dR__429->SetBinContent(28,0.7978227);
   VbbHcc_algo_Z_dR__429->SetBinContent(29,0.8381659);
   VbbHcc_algo_Z_dR__429->SetBinContent(30,0.5115927);
   VbbHcc_algo_Z_dR__429->SetBinContent(31,0.2099314);
   VbbHcc_algo_Z_dR__429->SetBinError(3,0.740535);
   VbbHcc_algo_Z_dR__429->SetBinError(4,0.8460946);
   VbbHcc_algo_Z_dR__429->SetBinError(5,0.6595853);
   VbbHcc_algo_Z_dR__429->SetBinError(6,0.5897175);
   VbbHcc_algo_Z_dR__429->SetBinError(7,0.6303377);
   VbbHcc_algo_Z_dR__429->SetBinError(8,0.6248431);
   VbbHcc_algo_Z_dR__429->SetBinError(9,0.612204);
   VbbHcc_algo_Z_dR__429->SetBinError(10,0.5145555);
   VbbHcc_algo_Z_dR__429->SetBinError(11,0.4129288);
   VbbHcc_algo_Z_dR__429->SetBinError(12,0.6027197);
   VbbHcc_algo_Z_dR__429->SetBinError(13,0.7121012);
   VbbHcc_algo_Z_dR__429->SetBinError(14,0.5415868);
   VbbHcc_algo_Z_dR__429->SetBinError(15,0.5344063);
   VbbHcc_algo_Z_dR__429->SetBinError(16,0.5734725);
   VbbHcc_algo_Z_dR__429->SetBinError(17,0.4700207);
   VbbHcc_algo_Z_dR__429->SetBinError(18,0.3651617);
   VbbHcc_algo_Z_dR__429->SetBinError(19,0.4623844);
   VbbHcc_algo_Z_dR__429->SetBinError(20,0.3453936);
   VbbHcc_algo_Z_dR__429->SetBinError(21,0.3083653);
   VbbHcc_algo_Z_dR__429->SetBinError(22,0.465296);
   VbbHcc_algo_Z_dR__429->SetBinError(23,0.3416568);
   VbbHcc_algo_Z_dR__429->SetBinError(24,0.3163026);
   VbbHcc_algo_Z_dR__429->SetBinError(25,0.3220053);
   VbbHcc_algo_Z_dR__429->SetBinError(26,0.3200871);
   VbbHcc_algo_Z_dR__429->SetBinError(27,0.2716437);
   VbbHcc_algo_Z_dR__429->SetBinError(28,0.3036894);
   VbbHcc_algo_Z_dR__429->SetBinError(29,0.2969404);
   VbbHcc_algo_Z_dR__429->SetBinError(30,0.2299273);
   VbbHcc_algo_Z_dR__429->SetBinError(31,0.1487244);
   VbbHcc_algo_Z_dR__429->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR__429->SetFillColor(ci);
   VbbHcc_algo_Z_dR__429->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_algo_Z_dR__429->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR__429->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__429->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__429->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__429->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__429->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__429->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__429->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__429->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__429->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
