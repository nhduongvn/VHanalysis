void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug  3 12:26:19 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-482.468,1.133333,4342.212);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,3288.785);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,3675.946);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2714.043);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2068.966);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1596.587);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1279.875);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1067.575);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,874.7823);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,742.4025);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,636.8691);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,541.4746);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,459.5015);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,399.88);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,325.8199);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,280.1187);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,228.8511);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,170.0469);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,118.8529);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,73.68254);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,34.45165);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,13.77354);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.061884);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.8841656);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.1336991);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,14.32954);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,15.1595);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,13.03529);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,11.37834);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,9.988958);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,8.95167);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,8.175498);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,7.405239);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,6.815158);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,6.32418);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,5.828713);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,5.366172);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.005413);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,4.524323);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.19991);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.791019);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.269566);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.726393);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.149373);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.470321);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.9304327);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.4961574);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2275395);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.07719119);
   VbbHcc_both_Sphericity_stack_3->SetEntries(345543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
