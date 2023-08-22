void H_mass_tags_17_logY()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Tue Aug 22 09:15:53 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(-80,-3.485109,453.3333,-1.436521);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetLogy();
   H_mass_tags_17->SetLeftMargin(0.15);
   H_mass_tags_17->SetFrameBorderMode(0);
   H_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.00214307);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(6,0.001571673);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.001621248);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.00345065);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.003675542);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.004554117);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.0114583);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01205233);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.009550427);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.007570941);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.005639322);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.001345786);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.001361999);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.005193639);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.001936516);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.00161524);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.001253935);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.002974461);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.001700983);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(28,0.001430948);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(30,0.001471723);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(34,0.001845983);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.001607775);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001049011);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.04464795);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.00214307);
   VbbHcc_tags_H_mass_stack_11->SetBinError(6,0.001571673);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.001621248);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002445298);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.00260286);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.002633287);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004112826);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.004290483);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.003645549);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.003438022);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.002843691);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.001345786);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.001361999);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.003033624);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.001936516);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.00161524);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.001253935);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002108021);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.001700983);
   VbbHcc_tags_H_mass_stack_11->SetBinError(28,0.001430948);
   VbbHcc_tags_H_mass_stack_11->SetBinError(30,0.001153144);
   VbbHcc_tags_H_mass_stack_11->SetBinError(34,0.001845983);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.001607775);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001049011);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.008644468);
   VbbHcc_tags_H_mass_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_17->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->SetSelected(H_mass_tags_17);
}
