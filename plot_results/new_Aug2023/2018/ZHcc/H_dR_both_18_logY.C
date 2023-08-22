void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-3.340834,6.8,-0.9300318);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.01950193);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.01663726);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.03559091);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01651034);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01307704);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.006112798);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.01853142);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.009146992);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.01312856);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.004675028);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.004425719);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.008073542);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.007409301);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.006612664);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.00664369);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.002607922);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.001589558);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.006603635);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.006348062);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.009304595);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.006809867);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.0058924);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.003789232);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.006594619);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.004540927);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.005363264);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.003306605);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003129504);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.004123221);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003903249);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003824585);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003837388);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.002607922);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.001589558);
   VbbHcc_both_H_dR_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
