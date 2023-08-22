void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:21:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-19757.69,1.133333,177819.2);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.08717088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,150534.7);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,19458.78);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,3903.971);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1056.003);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,342.9136);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,131.589);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,58.04237);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,26.881);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,13.56199);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,8.159049);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,4.324614);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,2.752368);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.864031);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.7693777);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.4087682);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2980184);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.2197594);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2702604);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.1432011);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.0358719);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.04673127);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.08717088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,98.12484);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,34.70862);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,15.35965);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,7.902273);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,4.443533);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,2.729528);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,1.780405);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.199504);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.8517376);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.6552765);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.4683578);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.3794408);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3153327);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.1986397);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1539396);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1178467);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1035344);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1278986);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.08953724);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.0358719);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.04673127);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3114170);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
