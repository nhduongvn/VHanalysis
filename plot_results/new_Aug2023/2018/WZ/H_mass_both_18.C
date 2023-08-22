void H_mass_both_18()
{
//=========Macro generated from canvas: H_mass_both_18/H_mass_both_18
//=========  (Tue Aug 22 09:22:29 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_18 = new TCanvas("H_mass_both_18", "H_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_18->SetHighLightColor(2);
   H_mass_both_18->Range(-80,-0.3653036,453.3333,3.287732);
   H_mass_both_18->SetFillColor(0);
   H_mass_both_18->SetBorderMode(0);
   H_mass_both_18->SetBorderSize(2);
   H_mass_both_18->SetLeftMargin(0.15);
   H_mass_both_18->SetFrameBorderMode(0);
   H_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_7 = new TH1D("VbbHcc_both_H_mass_stack_7","",40,0,400);
   VbbHcc_both_H_mass_stack_7->SetBinContent(4,0.3410058);
   VbbHcc_both_H_mass_stack_7->SetBinContent(8,0.7188988);
   VbbHcc_both_H_mass_stack_7->SetBinContent(9,2.783265);
   VbbHcc_both_H_mass_stack_7->SetBinContent(10,0.4375283);
   VbbHcc_both_H_mass_stack_7->SetBinContent(11,0.5037459);
   VbbHcc_both_H_mass_stack_7->SetBinContent(12,0.5493952);
   VbbHcc_both_H_mass_stack_7->SetBinContent(13,0.2447034);
   VbbHcc_both_H_mass_stack_7->SetBinContent(14,0.4655805);
   VbbHcc_both_H_mass_stack_7->SetBinContent(16,0.9636619);
   VbbHcc_both_H_mass_stack_7->SetBinContent(18,0.4671207);
   VbbHcc_both_H_mass_stack_7->SetBinContent(19,0.3443088);
   VbbHcc_both_H_mass_stack_7->SetBinContent(20,0.09964461);
   VbbHcc_both_H_mass_stack_7->SetBinContent(22,0.3429098);
   VbbHcc_both_H_mass_stack_7->SetBinContent(23,0.4675795);
   VbbHcc_both_H_mass_stack_7->SetBinContent(26,0.6922083);
   VbbHcc_both_H_mass_stack_7->SetBinContent(27,0.3453961);
   VbbHcc_both_H_mass_stack_7->SetBinContent(31,0.4702074);
   VbbHcc_both_H_mass_stack_7->SetBinContent(32,0.4536609);
   VbbHcc_both_H_mass_stack_7->SetBinContent(37,0.4722652);
   VbbHcc_both_H_mass_stack_7->SetBinContent(41,2.466672);
   VbbHcc_both_H_mass_stack_7->SetBinError(4,0.3410058);
   VbbHcc_both_H_mass_stack_7->SetBinError(8,0.5088761);
   VbbHcc_both_H_mass_stack_7->SetBinError(9,1.060165);
   VbbHcc_both_H_mass_stack_7->SetBinError(10,0.4375283);
   VbbHcc_both_H_mass_stack_7->SetBinError(11,0.5037459);
   VbbHcc_both_H_mass_stack_7->SetBinError(12,0.5493952);
   VbbHcc_both_H_mass_stack_7->SetBinError(13,0.2447034);
   VbbHcc_both_H_mass_stack_7->SetBinError(14,0.4655805);
   VbbHcc_both_H_mass_stack_7->SetBinError(16,0.9636619);
   VbbHcc_both_H_mass_stack_7->SetBinError(18,0.4671207);
   VbbHcc_both_H_mass_stack_7->SetBinError(19,0.3443088);
   VbbHcc_both_H_mass_stack_7->SetBinError(20,0.09964461);
   VbbHcc_both_H_mass_stack_7->SetBinError(22,0.3429098);
   VbbHcc_both_H_mass_stack_7->SetBinError(23,0.4675795);
   VbbHcc_both_H_mass_stack_7->SetBinError(26,0.4894713);
   VbbHcc_both_H_mass_stack_7->SetBinError(27,0.3453961);
   VbbHcc_both_H_mass_stack_7->SetBinError(31,0.4702074);
   VbbHcc_both_H_mass_stack_7->SetBinError(32,0.4536609);
   VbbHcc_both_H_mass_stack_7->SetBinError(37,0.4722652);
   VbbHcc_both_H_mass_stack_7->SetBinError(41,1.041514);
   VbbHcc_both_H_mass_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_18->Modified();
   H_mass_both_18->cd();
   H_mass_both_18->SetSelected(H_mass_both_18);
}
