void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:24:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-3.629909,6.8,32.66918);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,12.95404);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,15.26107);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,11.84198);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,7.535207);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,19.17428);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,11.56153);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,13.18569);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,22.34766);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,16.93296);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,15.07289);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,19.10003);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,24.95922);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,27.65645);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,22.31361);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,11.21939);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,8.252529);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,5.653185);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,5.658363);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,4.347734);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,3.496813);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,1.052108);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.5204002);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.1704336);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.952543);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.726299);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,2.369386);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9949141);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,5.972585);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,2.581791);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.868465);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,8.304684);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,3.262098);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,2.44295);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,3.080682);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,3.815695);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.534856);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,3.058938);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,2.415345);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.175867);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.9958598);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.352786);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.534319);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,1.764688);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.3934187);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.2100491);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.1704336);
   VbbHcc_both_H_dR_stack_5->SetEntries(2376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->Draw("HIST");
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
