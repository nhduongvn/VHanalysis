void Z_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_17/Z_jetmass_noJEC_tags_17
//=========  (Thu Aug 10 12:23:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_17 = new TCanvas("Z_jetmass_noJEC_tags_17", "Z_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_17->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_17->Range(-60,-0.001967861,340,0.01771074);
   Z_jetmass_noJEC_tags_17->SetFillColor(0);
   Z_jetmass_noJEC_tags_17->SetBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetBorderSize(2);
   Z_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.0004131521);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.002261961);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.01133961);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.01499322);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.01071977);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.00782657);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.006004697);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.002663516);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.002768878);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.001011973);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(13,0.001520506);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.001057954);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(15,0.0007766945);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0002599123);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(17,0.0002618518);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(20,0.0005396832);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(23,0.0002609992);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(25,0.0001574125);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0003008714);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(4,0.0007227435);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001655448);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(6,0.001937459);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001620121);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(8,0.001396081);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(9,0.001221444);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0007801252);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0007834279);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0004591576);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(13,0.0005869763);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0005107405);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(15,0.0004484702);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0002599123);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(17,0.0002084146);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(20,0.0003817085);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(23,0.0002609992);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(25,0.0001574125);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_17->Modified();
   Z_jetmass_noJEC_tags_17->cd();
   Z_jetmass_noJEC_tags_17->SetSelected(Z_jetmass_noJEC_tags_17);
}
