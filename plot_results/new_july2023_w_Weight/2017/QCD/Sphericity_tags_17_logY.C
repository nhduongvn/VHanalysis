void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,0.498605,1.133333,5.681037);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,76779.39);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,57217.99);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,34669.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,18739.61);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,32496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,5266.855);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1490.294);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1808.62);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1065.09);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,875.4727);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,781.721);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,224.5689);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,249.9711);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,197.6332);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,243.0487);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,105.5624);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,20.79114);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,26.04271);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,20.80763);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,15597.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3628.555);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2700.562);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1870.303);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,21709.64);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,957.1624);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,262.696);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,609.8404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,382.9193);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,419.5428);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,375.2702);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,61.47585);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,69.23781);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,73.16747);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,70.61372);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,33.79989);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,10.5686);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,12.25406);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,10.446);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9821);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
