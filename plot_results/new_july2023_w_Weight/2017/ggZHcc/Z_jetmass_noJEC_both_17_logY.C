void Z_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Thu Aug 10 10:43:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-4.18105,340,-1.232582);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLogy();
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.0006777436);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.003368083);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.01467998);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.0156683);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.01152735);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.00817257);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.005869981);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.002034965);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.003859284);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.001443873);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(13,0.001094585);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.00142273);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(15,0.0007766945);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0002599123);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(17,0.0005246283);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(20,0.0002758581);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(23,0.0002609992);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0004006648);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(4,0.0008947803);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001884319);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(6,0.001979339);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001682149);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(8,0.00141785);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(9,0.001197276);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0006876761);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0009011102);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0005539905);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(13,0.0005044254);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0006034356);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(15,0.0004484702);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0002599123);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(17,0.0003709744);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(20,0.0002758581);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(23,0.0002609992);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}
