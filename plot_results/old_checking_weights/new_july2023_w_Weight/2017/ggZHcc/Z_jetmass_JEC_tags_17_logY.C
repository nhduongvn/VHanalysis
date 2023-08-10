void Z_jetmass_JEC_tags_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_17/Z_jetmass_JEC_tags_17
//=========  (Thu Aug 10 10:41:33 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_17 = new TCanvas("Z_jetmass_JEC_tags_17", "Z_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_17->SetHighLightColor(2);
   Z_jetmass_JEC_tags_17->Range(-60,-4.873774,340,-1.13405);
   Z_jetmass_JEC_tags_17->SetFillColor(0);
   Z_jetmass_JEC_tags_17->SetBorderMode(0);
   Z_jetmass_JEC_tags_17->SetBorderSize(2);
   Z_jetmass_JEC_tags_17->SetLogy();
   Z_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(4,0.001116441);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(5,0.009171077);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01638433);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01095782);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(8,0.008530398);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(9,0.006997685);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(10,0.003793855);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(11,0.001673785);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(12,0.000915067);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(13,0.002523002);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0007791656);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(15,0.0002537467);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0007206305);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(17,6.327442e-05);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(20,0.000263825);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0002758581);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(22,0.0001574125);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0002609992);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(4,0.0005054247);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(5,0.001478113);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(6,0.002024655);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(7,0.00163656);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(8,0.00144161);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(9,0.001318888);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(10,0.0009608129);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(11,0.0005985204);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(12,0.0004241334);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(13,0.0007815119);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(14,0.0004146389);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(15,0.0002537467);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(16,0.000419172);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(17,6.327442e-05);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(20,0.000263825);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(21,0.0002758581);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(22,0.0001574125);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(23,0.0002609992);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_17->Modified();
   Z_jetmass_JEC_tags_17->cd();
   Z_jetmass_JEC_tags_17->SetSelected(Z_jetmass_JEC_tags_17);
}
