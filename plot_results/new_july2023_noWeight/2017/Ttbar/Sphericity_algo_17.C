void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-8250.672,1.133333,74256.04);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,58766.48);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,62862.26);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,33544.79);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,18161.88);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,9553.749);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,4580.588);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2007.636);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,884.7734);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,431.1066);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,232.9382);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,138.9212);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,85.2909);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,53.5077);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,37.03683);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,25.90366);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,16.94257);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,13.29559);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,6.972501);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,4.399863);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,1.733191);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.485481);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.1758528);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.1407128);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(24,0.04456635);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,60.34896);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,62.6936);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,45.7581);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,33.64958);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,24.36816);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,16.79112);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,11.01611);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,7.219183);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,4.990639);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.645676);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,2.817863);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.190156);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.722258);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.442189);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.21112);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.9789971);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.8789125);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.6298158);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.4995267);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.3198651);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1752386);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1055219);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.09949895);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(24,0.04456635);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3230340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->Draw("HIST");
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
