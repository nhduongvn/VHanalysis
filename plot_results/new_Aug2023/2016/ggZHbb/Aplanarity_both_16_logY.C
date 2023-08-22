void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:18:48 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-4.446493,1.133333,1.7879);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,7.707461);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,2.546985);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.319387);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,0.7743023);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.485484);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.3104605);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2153426);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.155095);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.09556566);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.06465525);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.0358125);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03184542);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02150173);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.01626069);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.004568932);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.004282602);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.003981463);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.0006297819);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001376791);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0003005912);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05104886);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.02916844);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02097262);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01603429);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01270064);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01012738);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.008433714);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.007158131);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.005610028);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.004610946);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.003394677);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.003263359);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.002652741);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002295936);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001226856);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001195745);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001116002);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0004500812);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0006909095);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0003005912);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(41891);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->Draw("HIST");
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
