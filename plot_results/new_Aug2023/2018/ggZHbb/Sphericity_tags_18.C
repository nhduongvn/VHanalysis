void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:20:44 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-0.9676745,1.133333,8.70907);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,7.372758);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,6.05803);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,3.364692);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.203905);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.324566);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.7659256);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.407826);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.227948);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1739281);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1355584);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.08989824);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.07318309);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.05845558);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.04604668);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.04523832);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02792892);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02137291);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01726826);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.007962934);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.002373413);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001753261);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0006269329);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0005849238);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.06447655);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.0577721);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.0431442);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.03496426);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02722571);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.02081472);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01525158);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01145713);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.009976794);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.008882221);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.00726347);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.006509704);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.005835376);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.005143752);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.005140933);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004049964);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.003547777);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003172382);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002158297);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.00119711);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001014055);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0006269329);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0005849238);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(40948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
