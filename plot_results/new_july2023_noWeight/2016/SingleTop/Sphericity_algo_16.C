void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug  3 12:24:51 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1040.795,1.133333,9367.151);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,7929.863);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,7736.14);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,4318.391);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,2386.311);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,1240.131);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,574.2636);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,235.8693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,101.9053);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,49.57024);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,31.91061);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,17.15576);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,13.91401);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,9.049533);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,5.879297);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,3.399035);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,3.445243);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,2.75884);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.765476);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.8281293);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.269396);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.04373405);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,32.63137);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,31.96205);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,24.03188);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,18.02594);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,12.9846);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,8.901481);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,5.71301);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.654123);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.585154);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,2.144436);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.541015);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.531434);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,1.138887);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.8227723);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6714454);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.7151477);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.6444457);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.5070782);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.3134842);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.1101655);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.04373405);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(358903);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
