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
   Aplanarity_both_16->Range(-0.2,-2.519738,1.133333,22.67764);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__957 = new TH1D("VbbHcc_both_Aplanarity__957","",50,0,1);
   VbbHcc_both_Aplanarity__957->SetBinContent(1,19.198);
   VbbHcc_both_Aplanarity__957->SetBinContent(2,5.903801);
   VbbHcc_both_Aplanarity__957->SetBinContent(3,2.946659);
   VbbHcc_both_Aplanarity__957->SetBinContent(4,1.703296);
   VbbHcc_both_Aplanarity__957->SetBinContent(5,1.07502);
   VbbHcc_both_Aplanarity__957->SetBinContent(6,0.691786);
   VbbHcc_both_Aplanarity__957->SetBinContent(7,0.4532648);
   VbbHcc_both_Aplanarity__957->SetBinContent(8,0.3075965);
   VbbHcc_both_Aplanarity__957->SetBinContent(9,0.1942749);
   VbbHcc_both_Aplanarity__957->SetBinContent(10,0.1255707);
   VbbHcc_both_Aplanarity__957->SetBinContent(11,0.07552468);
   VbbHcc_both_Aplanarity__957->SetBinContent(12,0.06341658);
   VbbHcc_both_Aplanarity__957->SetBinContent(13,0.035941);
   VbbHcc_both_Aplanarity__957->SetBinContent(14,0.02361651);
   VbbHcc_both_Aplanarity__957->SetBinContent(15,0.01339936);
   VbbHcc_both_Aplanarity__957->SetBinContent(16,0.008947576);
   VbbHcc_both_Aplanarity__957->SetBinContent(17,0.007990439);
   VbbHcc_both_Aplanarity__957->SetBinContent(18,0.004009667);
   VbbHcc_both_Aplanarity__957->SetBinContent(19,0.002438738);
   VbbHcc_both_Aplanarity__957->SetBinContent(20,0.0009166708);
   VbbHcc_both_Aplanarity__957->SetBinContent(22,0.001254204);
   VbbHcc_both_Aplanarity__957->SetBinError(1,0.1563763);
   VbbHcc_both_Aplanarity__957->SetBinError(2,0.08670254);
   VbbHcc_both_Aplanarity__957->SetBinError(3,0.06096853);
   VbbHcc_both_Aplanarity__957->SetBinError(4,0.04620814);
   VbbHcc_both_Aplanarity__957->SetBinError(5,0.03647917);
   VbbHcc_both_Aplanarity__957->SetBinError(6,0.02968231);
   VbbHcc_both_Aplanarity__957->SetBinError(7,0.02341974);
   VbbHcc_both_Aplanarity__957->SetBinError(8,0.01965318);
   VbbHcc_both_Aplanarity__957->SetBinError(9,0.01538631);
   VbbHcc_both_Aplanarity__957->SetBinError(10,0.01243924);
   VbbHcc_both_Aplanarity__957->SetBinError(11,0.009679579);
   VbbHcc_both_Aplanarity__957->SetBinError(12,0.009036123);
   VbbHcc_both_Aplanarity__957->SetBinError(13,0.006501274);
   VbbHcc_both_Aplanarity__957->SetBinError(14,0.005263801);
   VbbHcc_both_Aplanarity__957->SetBinError(15,0.003931538);
   VbbHcc_both_Aplanarity__957->SetBinError(16,0.00342514);
   VbbHcc_both_Aplanarity__957->SetBinError(17,0.00304781);
   VbbHcc_both_Aplanarity__957->SetBinError(18,0.002322627);
   VbbHcc_both_Aplanarity__957->SetBinError(19,0.001776436);
   VbbHcc_both_Aplanarity__957->SetBinError(20,0.0009166708);
   VbbHcc_both_Aplanarity__957->SetBinError(22,0.001254204);
   VbbHcc_both_Aplanarity__957->SetEntries(28807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity__957->SetFillColor(ci);
   VbbHcc_both_Aplanarity__957->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__957->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__957->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__957->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__957->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__957->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__957->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__957->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__957->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__957->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__957->Draw("HIST");
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
