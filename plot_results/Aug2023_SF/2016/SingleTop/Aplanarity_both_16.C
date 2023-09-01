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
   Aplanarity_both_16->Range(-0.2,-48.07428,1.133333,432.6685);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__950 = new TH1D("VbbHcc_both_Aplanarity__950","",50,0,1);
   VbbHcc_both_Aplanarity__950->SetBinContent(1,366.2802);
   VbbHcc_both_Aplanarity__950->SetBinContent(2,110.4567);
   VbbHcc_both_Aplanarity__950->SetBinContent(3,57.28692);
   VbbHcc_both_Aplanarity__950->SetBinContent(4,32.0715);
   VbbHcc_both_Aplanarity__950->SetBinContent(5,18.90118);
   VbbHcc_both_Aplanarity__950->SetBinContent(6,14.46986);
   VbbHcc_both_Aplanarity__950->SetBinContent(7,9.124412);
   VbbHcc_both_Aplanarity__950->SetBinContent(8,3.722071);
   VbbHcc_both_Aplanarity__950->SetBinContent(9,3.191686);
   VbbHcc_both_Aplanarity__950->SetBinContent(10,1.863753);
   VbbHcc_both_Aplanarity__950->SetBinContent(11,1.992604);
   VbbHcc_both_Aplanarity__950->SetBinContent(12,1.010957);
   VbbHcc_both_Aplanarity__950->SetBinContent(13,0.7154375);
   VbbHcc_both_Aplanarity__950->SetBinContent(14,0.39197);
   VbbHcc_both_Aplanarity__950->SetBinContent(15,0.7212858);
   VbbHcc_both_Aplanarity__950->SetBinContent(16,0.4497675);
   VbbHcc_both_Aplanarity__950->SetBinContent(17,0.3111286);
   VbbHcc_both_Aplanarity__950->SetBinContent(18,0.346967);
   VbbHcc_both_Aplanarity__950->SetBinContent(22,0.04330472);
   VbbHcc_both_Aplanarity__950->SetBinError(1,7.561646);
   VbbHcc_both_Aplanarity__950->SetBinError(2,4.107086);
   VbbHcc_both_Aplanarity__950->SetBinError(3,3.049393);
   VbbHcc_both_Aplanarity__950->SetBinError(4,2.232967);
   VbbHcc_both_Aplanarity__950->SetBinError(5,1.666502);
   VbbHcc_both_Aplanarity__950->SetBinError(6,1.639634);
   VbbHcc_both_Aplanarity__950->SetBinError(7,1.317118);
   VbbHcc_both_Aplanarity__950->SetBinError(8,0.6859264);
   VbbHcc_both_Aplanarity__950->SetBinError(9,0.6843928);
   VbbHcc_both_Aplanarity__950->SetBinError(10,0.4951063);
   VbbHcc_both_Aplanarity__950->SetBinError(11,0.6359535);
   VbbHcc_both_Aplanarity__950->SetBinError(12,0.4238123);
   VbbHcc_both_Aplanarity__950->SetBinError(13,0.2605474);
   VbbHcc_both_Aplanarity__950->SetBinError(14,0.1329212);
   VbbHcc_both_Aplanarity__950->SetBinError(15,0.3066419);
   VbbHcc_both_Aplanarity__950->SetBinError(16,0.2983828);
   VbbHcc_both_Aplanarity__950->SetBinError(17,0.2307493);
   VbbHcc_both_Aplanarity__950->SetBinError(18,0.346967);
   VbbHcc_both_Aplanarity__950->SetBinError(22,0.04330472);
   VbbHcc_both_Aplanarity__950->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity__950->SetFillColor(ci);
   VbbHcc_both_Aplanarity__950->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__950->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__950->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__950->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__950->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__950->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__950->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__950->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__950->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__950->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__950->Draw("HIST");
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
