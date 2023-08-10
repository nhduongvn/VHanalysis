void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-1138.298,1.133333,10244.68);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,8672.747);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2903.227);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1436.464);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,827.1738);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,522.7152);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,337.5822);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,234.4693);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,156.8301);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,108.0463);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,72.67653);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,53.13575);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,35.44231);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,24.4785);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,17.07456);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,10.10075);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,6.81641);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,4.285966);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.619052);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.084276);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.871534);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.2378967);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.07882061);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.08377996);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,24.57626);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,14.22496);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,10.01617);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,7.603242);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,6.040317);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,4.865537);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.05835);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.312444);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.748473);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.265298);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.934889);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.576084);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.312377);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.091262);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.8399574);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.6956658);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.5434185);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.4175578);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.389875);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2462995);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1204602);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.07882061);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.08377996);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(238439);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
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
