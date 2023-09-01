#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Fri Sep  1 13:23:37 2023) by ROOT version 6.28/04
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.2,-1.369732,6.8,12.32759);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR__445 = new TH1D("VbbHcc_algo_H_dR__445","",30,0,6);
   VbbHcc_algo_H_dR__445->SetBinContent(3,6.782669);
   VbbHcc_algo_H_dR__445->SetBinContent(4,10.43605);
   VbbHcc_algo_H_dR__445->SetBinContent(5,6.451846);
   VbbHcc_algo_H_dR__445->SetBinContent(6,5.036827);
   VbbHcc_algo_H_dR__445->SetBinContent(7,3.580549);
   VbbHcc_algo_H_dR__445->SetBinContent(8,2.52855);
   VbbHcc_algo_H_dR__445->SetBinContent(9,2.776579);
   VbbHcc_algo_H_dR__445->SetBinContent(10,2.716104);
   VbbHcc_algo_H_dR__445->SetBinContent(11,2.760653);
   VbbHcc_algo_H_dR__445->SetBinContent(12,3.831107);
   VbbHcc_algo_H_dR__445->SetBinContent(13,5.407708);
   VbbHcc_algo_H_dR__445->SetBinContent(14,4.805998);
   VbbHcc_algo_H_dR__445->SetBinContent(15,4.835419);
   VbbHcc_algo_H_dR__445->SetBinContent(16,5.567848);
   VbbHcc_algo_H_dR__445->SetBinContent(17,4.673463);
   VbbHcc_algo_H_dR__445->SetBinContent(18,5.868333);
   VbbHcc_algo_H_dR__445->SetBinContent(19,5.235654);
   VbbHcc_algo_H_dR__445->SetBinContent(20,4.494021);
   VbbHcc_algo_H_dR__445->SetBinContent(21,2.368894);
   VbbHcc_algo_H_dR__445->SetBinContent(22,1.70295);
   VbbHcc_algo_H_dR__445->SetBinContent(23,2.218609);
   VbbHcc_algo_H_dR__445->SetBinContent(24,2.183595);
   VbbHcc_algo_H_dR__445->SetBinContent(25,1.350801);
   VbbHcc_algo_H_dR__445->SetBinContent(26,1.138946);
   VbbHcc_algo_H_dR__445->SetBinContent(27,1.117916);
   VbbHcc_algo_H_dR__445->SetBinContent(28,1.41941);
   VbbHcc_algo_H_dR__445->SetBinContent(29,0.8628467);
   VbbHcc_algo_H_dR__445->SetBinContent(30,0.4646371);
   VbbHcc_algo_H_dR__445->SetBinContent(31,0.3142526);
   VbbHcc_algo_H_dR__445->SetBinError(3,0.8242813);
   VbbHcc_algo_H_dR__445->SetBinError(4,0.9923249);
   VbbHcc_algo_H_dR__445->SetBinError(5,0.7417939);
   VbbHcc_algo_H_dR__445->SetBinError(6,0.6519601);
   VbbHcc_algo_H_dR__445->SetBinError(7,0.5606577);
   VbbHcc_algo_H_dR__445->SetBinError(8,0.4907446);
   VbbHcc_algo_H_dR__445->SetBinError(9,0.5088568);
   VbbHcc_algo_H_dR__445->SetBinError(10,0.4926679);
   VbbHcc_algo_H_dR__445->SetBinError(11,0.5000059);
   VbbHcc_algo_H_dR__445->SetBinError(12,0.5999912);
   VbbHcc_algo_H_dR__445->SetBinError(13,0.7034537);
   VbbHcc_algo_H_dR__445->SetBinError(14,0.6607366);
   VbbHcc_algo_H_dR__445->SetBinError(15,0.6756917);
   VbbHcc_algo_H_dR__445->SetBinError(16,0.7226096);
   VbbHcc_algo_H_dR__445->SetBinError(17,0.659338);
   VbbHcc_algo_H_dR__445->SetBinError(18,0.7312773);
   VbbHcc_algo_H_dR__445->SetBinError(19,0.6918934);
   VbbHcc_algo_H_dR__445->SetBinError(20,0.6560778);
   VbbHcc_algo_H_dR__445->SetBinError(21,0.4765997);
   VbbHcc_algo_H_dR__445->SetBinError(22,0.3967972);
   VbbHcc_algo_H_dR__445->SetBinError(23,0.4581506);
   VbbHcc_algo_H_dR__445->SetBinError(24,0.4444224);
   VbbHcc_algo_H_dR__445->SetBinError(25,0.3420982);
   VbbHcc_algo_H_dR__445->SetBinError(26,0.3198849);
   VbbHcc_algo_H_dR__445->SetBinError(27,0.3193605);
   VbbHcc_algo_H_dR__445->SetBinError(28,0.3537702);
   VbbHcc_algo_H_dR__445->SetBinError(29,0.277165);
   VbbHcc_algo_H_dR__445->SetBinError(30,0.2086278);
   VbbHcc_algo_H_dR__445->SetBinError(31,0.1815541);
   VbbHcc_algo_H_dR__445->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR__445->SetFillColor(ci);
   VbbHcc_algo_H_dR__445->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR__445->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR__445->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__445->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__445->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__445->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__445->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__445->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__445->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__445->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__445->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
