void H_jetmass_noJEC_algo_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_algo_17/H_jetmass_noJEC_algo_17
//=========  (Thu Aug 10 12:24:24 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_algo_17 = new TCanvas("H_jetmass_noJEC_algo_17", "H_jetmass_noJEC_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_algo_17->SetHighLightColor(2);
   H_jetmass_noJEC_algo_17->Range(-60,-0.4659071,340,4.193163);
   H_jetmass_noJEC_algo_17->SetFillColor(0);
   H_jetmass_noJEC_algo_17->SetBorderMode(0);
   H_jetmass_noJEC_algo_17->SetBorderSize(2);
   H_jetmass_noJEC_algo_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_algo_H_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(7,1.799004);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(8,2.002771);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(9,3.549768);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(10,2.503695);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(11,3.346372);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(12,1.159029);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(13,2.836304);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(14,2.708082);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(15,0.9462945);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(16,1.415489);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(18,0.6997047);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(20,1.008195);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(22,1.065859);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(23,0.7245614);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(28,0.08934998);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(36,0.3669034);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(40,0.3404851);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(41,0.3245153);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(43,0.400883);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(44,0.7044749);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(45,0.3901268);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(52,0.4018544);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(7,0.8126709);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(8,0.899196);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(9,1.083936);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(10,0.9575386);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(11,1.077031);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(12,0.6694083);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(13,1.025437);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(14,0.9660839);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(15,0.5561189);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(16,0.7181833);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(18,0.4993617);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(20,0.5922795);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(22,0.6157078);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(23,0.5147393);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(28,0.08934998);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(36,0.3669034);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(40,0.3404851);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(41,0.3245153);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(43,0.400883);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(44,0.5024719);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(45,0.3901268);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(52,0.4018544);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_algo_17->Modified();
   H_jetmass_noJEC_algo_17->cd();
   H_jetmass_noJEC_algo_17->SetSelected(H_jetmass_noJEC_algo_17);
}
