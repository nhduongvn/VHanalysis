void H_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Thu Aug 10 12:23:44 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-0.003730995,340,0.03357895);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(3,0.001666046);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(4,0.02073846);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(5,0.02842663);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(6,0.02319576);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(7,0.008379597);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(8,0.0201987);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(10,0.01077465);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(11,0.01550094);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(12,0.004253827);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(14,0.005620647);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(15,0.007449438);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(17,0.005451419);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(23,0.001943023);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(26,0.002310481);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(3,0.001666046);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(4,0.006335108);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(5,0.007413606);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(6,0.00648413);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(7,0.003785222);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(8,0.005943057);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(10,0.004154003);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(11,0.005560652);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(12,0.003012518);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(14,0.003249312);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(15,0.003573771);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(17,0.003253255);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(23,0.001943023);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(26,0.002310481);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_17->Modified();
   H_jetmass_JEC_tags_17->cd();
   H_jetmass_JEC_tags_17->SetSelected(H_jetmass_JEC_tags_17);
}
