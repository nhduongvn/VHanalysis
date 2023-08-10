void H_mass_tags_17()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Thu Aug 10 12:23:09 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(-80,-0.002008723,453.3333,0.0180785);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetLeftMargin(0.15);
   H_mass_tags_17->SetFrameBorderMode(0);
   H_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.002244052);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(6,0.001859968);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.001918637);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.003935131);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.004235866);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.005931472);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.01289175);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01530455);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01176258);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.008877709);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.007204083);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.001552233);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.001426177);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.006372965);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.002414608);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.002014015);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.001313021);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.00343171);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.001781134);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(28,0.001730288);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(30,0.001656612);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(34,0.001932967);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.001944105);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001241434);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.05093255);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.002244052);
   VbbHcc_tags_H_mass_stack_11->SetBinError(6,0.001859968);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.001918637);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002783179);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.003024806);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.003425408);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004619142);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005427491);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.004489483);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.004006981);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.0036132);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.001552233);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.001426177);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.003691299);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.002414608);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.002014015);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.001313021);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002455005);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.001781134);
   VbbHcc_tags_H_mass_stack_11->SetBinError(28,0.001730288);
   VbbHcc_tags_H_mass_stack_11->SetBinError(30,0.001316969);
   VbbHcc_tags_H_mass_stack_11->SetBinError(34,0.001932967);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.001944105);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001241434);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.00981382);
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
