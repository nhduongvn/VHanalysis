void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 10:41:09 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,0.4338285,1.133333,5.630301);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,68093.31);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,53012.42);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,27466.28);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,18313.35);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,6180.629);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,5607.314);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1291.31);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1323.231);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,697.9253);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,241.5123);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,238.1088);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,191.8697);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,118.7194);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,94.37821);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,74.4131);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,94.92458);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,39.88799);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,48.29916);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,17.96825);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,5274.671);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4345.699);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,3408.367);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2312.556);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,905.8582);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1874.414);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,309.288);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,390.1108);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,318.4339);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,57.98671);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,63.28034);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,52.51339);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,34.16156);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,38.44359);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,21.3933);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,31.96839);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,23.75692);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,27.89522);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,9.020549);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9435);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
