void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug  3 12:26:24 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-17552.3,1.133333,157970.7);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,133731.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,36201.87);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,19493.45);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,12585.29);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,4947.896);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3094.646);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2491.541);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1122.211);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,3434.345);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,704.8891);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,301.4312);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,626.5397);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,544.9002);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,144.1448);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,408.4318);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.3095896);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,73.64506);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.881228);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,31.92775);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4804.133);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2976.119);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2913.46);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1695.433);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,874.1088);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,679.6296);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,671.4264);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,394.7531);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,1786.95);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,380.5195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,88.56206);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,380.5086);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,376.6403);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,52.71421);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,372.042);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.3095896);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,46.20171);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.881228);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,31.92775);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10726);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
