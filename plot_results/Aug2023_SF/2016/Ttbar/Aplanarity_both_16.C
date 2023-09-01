#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-930.0937,1.133333,8370.843);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__951 = new TH1D("VbbHcc_both_Aplanarity__951","",50,0,1);
   VbbHcc_both_Aplanarity__951->SetBinContent(1,7086.428);
   VbbHcc_both_Aplanarity__951->SetBinContent(2,2340.535);
   VbbHcc_both_Aplanarity__951->SetBinContent(3,1147.782);
   VbbHcc_both_Aplanarity__951->SetBinContent(4,660.9651);
   VbbHcc_both_Aplanarity__951->SetBinContent(5,417.5572);
   VbbHcc_both_Aplanarity__951->SetBinContent(6,269.8824);
   VbbHcc_both_Aplanarity__951->SetBinContent(7,186.4194);
   VbbHcc_both_Aplanarity__951->SetBinContent(8,124.6689);
   VbbHcc_both_Aplanarity__951->SetBinContent(9,86.54358);
   VbbHcc_both_Aplanarity__951->SetBinContent(10,58.18979);
   VbbHcc_both_Aplanarity__951->SetBinContent(11,41.63898);
   VbbHcc_both_Aplanarity__951->SetBinContent(12,27.63157);
   VbbHcc_both_Aplanarity__951->SetBinContent(13,19.34773);
   VbbHcc_both_Aplanarity__951->SetBinContent(14,13.57604);
   VbbHcc_both_Aplanarity__951->SetBinContent(15,7.546567);
   VbbHcc_both_Aplanarity__951->SetBinContent(16,5.366236);
   VbbHcc_both_Aplanarity__951->SetBinContent(17,3.353464);
   VbbHcc_both_Aplanarity__951->SetBinContent(18,2.138513);
   VbbHcc_both_Aplanarity__951->SetBinContent(19,1.525005);
   VbbHcc_both_Aplanarity__951->SetBinContent(20,0.6801695);
   VbbHcc_both_Aplanarity__951->SetBinContent(21,0.1784366);
   VbbHcc_both_Aplanarity__951->SetBinContent(22,0.05973602);
   VbbHcc_both_Aplanarity__951->SetBinContent(24,0.06263217);
   VbbHcc_both_Aplanarity__951->SetBinError(1,20.03192);
   VbbHcc_both_Aplanarity__951->SetBinError(2,11.41899);
   VbbHcc_both_Aplanarity__951->SetBinError(3,7.980131);
   VbbHcc_both_Aplanarity__951->SetBinError(4,6.052178);
   VbbHcc_both_Aplanarity__951->SetBinError(5,4.804252);
   VbbHcc_both_Aplanarity__951->SetBinError(6,3.862735);
   VbbHcc_both_Aplanarity__951->SetBinError(7,3.207314);
   VbbHcc_both_Aplanarity__951->SetBinError(8,2.619603);
   VbbHcc_both_Aplanarity__951->SetBinError(9,2.182976);
   VbbHcc_both_Aplanarity__951->SetBinError(10,1.79806);
   VbbHcc_both_Aplanarity__951->SetBinError(11,1.511704);
   VbbHcc_both_Aplanarity__951->SetBinError(12,1.225408);
   VbbHcc_both_Aplanarity__951->SetBinError(13,1.024017);
   VbbHcc_both_Aplanarity__951->SetBinError(14,0.8623194);
   VbbHcc_both_Aplanarity__951->SetBinError(15,0.6230478);
   VbbHcc_both_Aplanarity__951->SetBinError(16,0.544787);
   VbbHcc_both_Aplanarity__951->SetBinError(17,0.4273897);
   VbbHcc_both_Aplanarity__951->SetBinError(18,0.3384859);
   VbbHcc_both_Aplanarity__951->SetBinError(19,0.2853273);
   VbbHcc_both_Aplanarity__951->SetBinError(20,0.1863954);
   VbbHcc_both_Aplanarity__951->SetBinError(21,0.09098587);
   VbbHcc_both_Aplanarity__951->SetBinError(22,0.05973602);
   VbbHcc_both_Aplanarity__951->SetBinError(24,0.06263217);
   VbbHcc_both_Aplanarity__951->SetEntries(244052);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity__951->SetFillColor(ci);
   VbbHcc_both_Aplanarity__951->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__951->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__951->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__951->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__951->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__951->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__951->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__951->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__951->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__951->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__951->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
