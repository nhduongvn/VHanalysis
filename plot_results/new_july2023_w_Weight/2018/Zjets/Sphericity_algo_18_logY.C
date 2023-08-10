void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.276269,1.133333,4.478819);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,4224.36);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3882.009);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2210.227);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1340.804);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,690.894);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,300.4255);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,93.71542);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,30.72032);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.886105);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.65426);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,3.661437);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,7.464378);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8204359);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.6820568);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.4307968);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.3983546);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.4195517);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,1.507483);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,55.87508);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,55.92404);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,41.97312);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,31.056);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,21.40858);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,14.25228);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.966079);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.270781);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.541673);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.9333638);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.9878969);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,5.917411);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3364476);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2813121);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2158915);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.23345);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.3375436);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,1.169415);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(55877);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
