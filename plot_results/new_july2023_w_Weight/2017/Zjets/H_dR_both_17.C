void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:24:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-34.3039,6.8,308.735);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,128.8093);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,186.6699);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,162.945);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,120.8768);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,114.2754);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,113.19);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,138.4045);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,124.5181);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,154.3566);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,193.8552);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,196.9489);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,235.2699);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,246.5292);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,261.363);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,133.2557);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,94.39509);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,49.29352);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,29.10933);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,20.70455);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,12.50119);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,6.318976);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,2.767459);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,2.797854);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.9005378);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1461408);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,7.598777);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,8.768043);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,9.492603);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,5.913132);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,7.743745);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,6.034304);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,10.57139);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,6.924888);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,9.22894);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,12.22551);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,9.941974);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,12.3463);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,9.987498);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,11.08441);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,6.872773);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,8.5966);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,4.660092);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,2.470863);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,2.229777);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.739217);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.276614);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.7816505);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.9184264);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.5557897);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.1045942);
   VbbHcc_both_H_dR_stack_4->SetEntries(18216);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
