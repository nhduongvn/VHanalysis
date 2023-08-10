void H_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_17/H_jetmass_noJEC_tags_17
//=========  (Thu Aug 10 12:23:42 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_17 = new TCanvas("H_jetmass_noJEC_tags_17", "H_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_17->SetHighLightColor(2);
   H_jetmass_noJEC_tags_17->Range(-60,-0.003359066,340,0.03023159);
   H_jetmass_noJEC_tags_17->SetFillColor(0);
   H_jetmass_noJEC_tags_17->SetBorderMode(0);
   H_jetmass_noJEC_tags_17->SetBorderSize(2);
   H_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(3,0.001666046);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(4,0.02450574);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(5,0.02239547);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(6,0.02559288);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(7,0.007478622);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(8,0.01293347);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(9,0.006626335);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(10,0.01107177);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(11,0.01661043);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(12,0.004253827);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(14,0.005533561);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(15,0.007536523);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(17,0.002416406);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(18,0.003035013);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(25,0.001943023);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(26,0.002310481);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(3,0.001666046);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(4,0.006872574);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(5,0.00654874);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(6,0.006884053);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(7,0.00338571);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(8,0.004919055);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(9,0.003349868);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(10,0.004377667);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(11,0.005604404);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(12,0.003012518);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(14,0.003196414);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(15,0.003621161);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(17,0.002416406);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(18,0.002178222);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(25,0.001943023);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(26,0.002310481);
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
