void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-0.033203,1.133333,6.604147);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,460111.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,434156.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,226901.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,139972.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,65738.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,28412.39);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,6555.529);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,2926.049);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,998.897);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,446.0577);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,546.6481);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,143.3792);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,46.16807);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,92.99128);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,33.36761);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,273.8525);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,27.92295);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,11.16858);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,20.83592);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,8.542049);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,22644.15);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,22987.35);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,5669.17);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,16403.55);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,2949.583);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,2256.584);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,837.6083);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,667.1456);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,333.9516);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,169.6398);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,314.2081);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,50.24392);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,17.66612);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,40.07892);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,18.68285);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,237.2582);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,11.02426);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,5.125554);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,17.63862);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,6.177334);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(106115);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
