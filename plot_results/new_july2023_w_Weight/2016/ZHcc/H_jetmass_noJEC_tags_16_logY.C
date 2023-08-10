void H_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Thu Aug 10 10:41:23 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-3.027918,340,-1.181394);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLogy();
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(3,0.002869221);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(5,0.02013573);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(6,0.0227198);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(7,0.01472045);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(8,0.008679158);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(9,0.008618805);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(10,0.009044693);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(12,0.003125658);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(13,0.005802713);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(14,0.00585374);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(39,0.003126194);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(3,0.002869221);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(5,0.007642265);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(6,0.008066194);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(7,0.006585725);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(8,0.005011135);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(9,0.004982315);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(10,0.00522933);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(12,0.003125658);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(13,0.004103386);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(14,0.004139294);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(39,0.003126194);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->Draw("HIST");
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
