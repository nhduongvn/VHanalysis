void H_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Thu Aug 10 12:20:22 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-4.102361,340,-1.546502);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLogy();
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(3,0.002343403);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(4,0.004096023);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(5,0.007666372);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(6,0.00832459);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(7,0.007515127);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(8,0.002006278);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(9,0.006935238);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(10,0.001177982);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(11,0.002254083);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(12,0.0007289395);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(13,0.001505394);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(14,0.001185794);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(16,0.000284613);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(18,0.0008246244);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(20,0.0004202124);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(28,0.0004167629);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(61,0.0003771667);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(3,0.000958186);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(4,0.001241614);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(5,0.00171488);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(6,0.001760002);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(7,0.001687602);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(8,0.0008982484);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(9,0.001640047);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(10,0.0006816483);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(11,0.0009204492);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(12,0.0005157137);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(13,0.000752829);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(14,0.0006861085);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(16,0.000284613);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(18,0.000583543);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(20,0.0004202124);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(28,0.0004167629);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(61,0.0003771667);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}
