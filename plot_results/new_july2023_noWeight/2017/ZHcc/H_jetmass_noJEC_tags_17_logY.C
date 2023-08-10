void H_jetmass_noJEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_17/H_jetmass_noJEC_tags_17
//=========  (Thu Aug 10 12:31:39 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_17 = new TCanvas("H_jetmass_noJEC_tags_17", "H_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_17->SetHighLightColor(2);
   H_jetmass_noJEC_tags_17->Range(-60,-3.317892,340,-1.162009);
   H_jetmass_noJEC_tags_17->SetFillColor(0);
   H_jetmass_noJEC_tags_17->SetBorderMode(0);
   H_jetmass_noJEC_tags_17->SetBorderSize(2);
   H_jetmass_noJEC_tags_17->SetLogy();
   H_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(3,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(4,0.02054326);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(5,0.01896301);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(6,0.02212352);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(8,0.01106176);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(9,0.006321005);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(10,0.01106176);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(11,0.01422226);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(12,0.003160502);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(14,0.004740753);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(15,0.007901256);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(3,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(4,0.005697677);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(5,0.005474151);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(6,0.005912758);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(8,0.004180952);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(9,0.003160502);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(10,0.004180952);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(11,0.004740753);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(12,0.002234813);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(14,0.002737075);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(15,0.003533549);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(18,0.002234813);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetEntries(87);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_17->Modified();
   H_jetmass_noJEC_tags_17->cd();
   H_jetmass_noJEC_tags_17->SetSelected(H_jetmass_noJEC_tags_17);
}
